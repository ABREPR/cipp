<?php

/**
 * @file
 * Contains the FeedsCSVParser class.
 */

/**
 * Parses a given file as a CSV file.
 */
class FeedsCSVParser extends FeedsParser {

  /**
   * Implements FeedsParser::parse().
   */
  public function parse(FeedsSource $source, FeedsFetcherResult $fetcher_result) {
    $source_config = $source->getConfigFor($this);
    $state = $source->state(FEEDS_PARSE);

    // Load and configure parser.
    feeds_include_library('ParserCSV.inc', 'ParserCSV');
    $parser = new ParserCSV();
    $delimiter = $source_config['delimiter'] == 'TAB' ? "\t" : $source_config['delimiter'];
    $parser->setDelimiter($delimiter);
    $parser->setEncoding($source_config['encoding']['encoding']);
    $parser->setEncodingCheck($source_config['encoding']['check_encoding']);

    $iterator = new ParserCSVIterator($fetcher_result->getFilePath());
    if (empty($source_config['no_headers'])) {
      // Get first line and use it for column names, convert them to lower case.
      $header = $this->parseHeader($parser, $iterator);
      if (!$header) {
        return;
      }
      $parser->setColumnNames($header);
    }

    // Determine section to parse, parse.
    $start = $state->pointer ? $state->pointer : $parser->lastLinePos();
    $limit = $source->importer->getLimit();
    $rows = $this->parseItems($parser, $iterator, $start, $limit);

    // Report progress.
    $state->total = filesize($fetcher_result->getFilePath());
    $state->pointer = $parser->lastLinePos();
    $progress = $parser->lastLinePos() ? $parser->lastLinePos() : $state->total;
    $state->progress($state->total, $progress);

    // Create a result object and return it.
    return new FeedsParserResult($rows, $source->feed_nid);
  }

  /**
   * Get first line and use it for column names, convert them to lower case.
   * Be aware that the $parser and iterator objects can be modified in this
   * function since they are passed in by reference
   *
   * @param ParserCSV $parser
   * @param ParserCSVIterator $iterator
   * @return
   *   An array of lower-cased column names to use as keys for the parsed items.
   */
  protected function parseHeader(ParserCSV $parser, ParserCSVIterator $iterator) {
    $parser->setLineLimit(1);
    $rows = $parser->parse($iterator);
    if (!count($rows)) {
      return FALSE;
    }
    $header = array_shift($rows);
    foreach ($header as $i => $title) {
      $header[$i] = trim(drupal_strtolower($title));
    }
    return $header;
  }

  /**
   * Parse all of the items from the CSV.
   *
   * @param ParserCSV $parser
   * @param ParserCSVIterator $iterator
   * @return
   *   An array of rows of the CSV keyed by the column names previously set
   */
  protected function parseItems(ParserCSV $parser, ParserCSVIterator $iterator, $start = 0, $limit = 0) {
    $parser->setLineLimit($limit);
    $parser->setStartByte($start);
    $rows = $parser->parse($iterator);
    return $rows;
  }

  /**
   * Override parent::getMappingSources().
   */
  public function getMappingSources() {
    return FALSE;
  }

  /**
   * Override parent::getSourceElement() to use only lower keys.
   */
  public function getSourceElement(FeedsSource $source, FeedsParserResult $result, $element_key) {
    return parent::getSourceElement($source, $result, drupal_strtolower($element_key));
  }

  /**
   * Define defaults.
   */
  public function sourceDefaults() {
    return array(
      'delimiter' => $this->config['delimiter'],
      'encoding' => $this->config['encoding'],
      'check_encoding' => $this->config['check_encoding'],
      'no_headers' => $this->config['no_headers'],
    );
  }

  /**
   * Source form.
   *
   * Show mapping configuration as a guidance for import form users.
   */
  public function sourceForm($source_config) {
    $form = array();
    $form['#weight'] = -10;

    $mappings = feeds_importer($this->id)->processor->config['mappings'];
    $sources = $uniques = array();
    foreach ($mappings as $mapping) {
      $sources[] = check_plain($mapping['source']);
      if (!empty($mapping['unique'])) {
        $uniques[] = check_plain($mapping['source']);
      }
    }

    $output = t('Import !csv_files with one or more of these columns: !columns.', array('!csv_files' => l(t('CSV files'), 'http://en.wikipedia.org/wiki/Comma-separated_values'), '!columns' => implode(', ', $sources)));
    $items = array();
    $items[] = format_plural(count($uniques), t('Column <strong>!column</strong> is mandatory and considered unique: only one item per !column value will be created.', array('!column' => implode(', ', $uniques))), t('Columns <strong>!columns</strong> are mandatory and values in these columns are considered unique: only one entry per value in one of these column will be created.', array('!columns' => implode(', ', $uniques))));
    $items[] = l(t('Download a template'), 'import/' . $this->id . '/template');
    $form['help'] = array(
      '#prefix' => '<div class="help">',
      '#suffix' => '</div>',
      'description' => array(
        '#prefix' => '<p>',
        '#markup' => $output,
        '#suffix' => '</p>',
      ),
      'list' => array(
        '#theme' => 'item_list',
        '#items' => $items,
      ),
    );
    $form['delimiter'] = array(
      '#type' => 'select',
      '#title' => t('Delimiter'),
      '#description' => t('The character that delimits fields in the CSV file.'),
      '#options'  => array(
        ',' => ',',
        ';' => ';',
        'TAB' => 'TAB',
        '|' => '|',
        '+' => '+',
      ),
      '#default_value' => isset($source_config['delimiter']) ? $source_config['delimiter'] : ',',
    );
    $form['no_headers'] = array(
      '#type' => 'checkbox',
      '#title' => t('No Headers'),
      '#description' => t('Check if the imported CSV file does not start with a header row. If checked, mapping sources must be named \'0\', \'1\', \'2\' etc.'),
      '#default_value' => isset($source_config['no_headers']) ? $source_config['no_headers'] : 0,
    );
    return $form + $this->configEncodingForm();
  }

  public function configEncodingForm($sourceForm = FALSE) {
    $form = array();
    $defaults = $this->configDefaults();
    if (extension_loaded('mbstring')) {
      $form['encoding'] = array(
        '#type' => 'fieldset',
        '#title' => 'Encoding conversion',
        '#collapsible' => TRUE,
        '#collapsed' => $sourceForm || ($this->config['encoding'] == $defaults['encoding'] && $this->config['check_encoding'] == $defaults['check_encoding']),
      );
      $options = mb_list_encodings();
      $options = array_combine($options, $options);
      $form['encoding']['encoding'] = array(
        '#type' => 'select',
        '#title' => t('Source file encoding'),
        '#description' => t('Performs encoding conversion of a source files to UTF-8. Defaults to <code>UTF-8</code> &mdash; no encoding conversion will happen.'),
        '#options' => $options,
        '#default_value' => $this->config['encoding'],
      );
      $form['encoding']['check_encoding'] = array(
        '#type' => 'checkbox',
        '#title' => t('Check encoding'),
        '#description' => t('Checks encoding of a source file and breaks import process if encoding differs.'),
        '#default_value' => $this->config['check_encoding'],
      );
    }
    else {
      $form['encoding']['encoding'] = array(
        '#markup' => '<p><em>' . t('Encoding conversion is disabled due to the lack of <code>mbstring</code> PHP extension.') . '</em></p>',
      );
    }
     return $form;
   }

  /**
   * Checks and converts encoding of input data
   *
   * @param $data
   *   A chunk of data
   * @return
   *   Data in correct encoding or throws exceptions if
   *   ecnoding doesn't match or mbstring is not found.
   */
  private function fixEncoding($data) {

    if (extension_loaded('mbstring')) {
      // Check encoding if needed
      if ($this->check_encoding) {
        if (!mb_check_encoding($data, $this->from_encoding)) {
          throw new Exception(t('Source file is not in @encoding encoding.', array('@encoding' => $this->from_encoding)));
        }
      }

      $encode_array = array('ASCII', 'UTF-8', 'GBK', 'GB2312', 'BIG5');
      $this->encoding = mb_detect_encoding($data, $encode_array);

      // Convert encoding if needed
      if ($this->encoding != $this->to_encoding) {
        $data = mb_convert_encoding($data, $this->to_encoding, $this->encoding);
      }
    }
    else {
      throw new Exception(t('For encoding conversion <code>mbstring</code> PHP extension must be available.'));
    }

    return $data;
  }

  /**
   * Define default configuration.
   */
  public function configDefaults() {
    return array(
      'delimiter' => ',',
      'encoding' => 'UTF-8',
      'check_encoding' => FALSE,
      'no_headers' => 0,
    );
  }

  /**
   * Build configuration form.
   */
  public function configForm(&$form_state) {
    $form = array();
    $form['delimiter'] = array(
      '#type' => 'select',
      '#title' => t('Default delimiter'),
      '#description' => t('Default field delimiter.'),
      '#options' => array(
        ',' => ',',
        ';' => ';',
        'TAB' => 'TAB',
        '|' => '|',
        '+' => '+',
      ),
      '#default_value' => $this->config['delimiter'],
    );
    $form['no_headers'] = array(
      '#type' => 'checkbox',
      '#title' => t('No headers'),
      '#description' => t('Check if the imported CSV file does not start with a header row. If checked, mapping sources must be named \'0\', \'1\', \'2\' etc.'),
      '#default_value' => $this->config['no_headers'],
    );
    return $form;
  }

  public function getTemplate() {
    $mappings = feeds_importer($this->id)->processor->config['mappings'];
    $sources = $uniques = array();
    foreach ($mappings as $mapping) {
      if (!empty($mapping['unique'])) {
        $uniques[] = check_plain($mapping['source']);
      }
      else {
        $sources[] = check_plain($mapping['source']);
      }
    }
    $sep = ',';
    $columns = array();
    foreach (array_merge($uniques, $sources) as $col) {
      if (strpos($col, $sep) !== FALSE) {
        $col = '"' . str_replace('"', '""', $col) . '"';
      }
      $columns[] = $col;
    }
    drupal_add_http_header('Cache-Control', 'max-age=60, must-revalidate');
    drupal_add_http_header('Content-Disposition', 'attachment; filename="' . $this->id . '_template.csv"');
    drupal_add_http_header('Content-type', 'text/csv; charset=utf-8');
    print implode($sep, $columns);
    return;
  }
}
