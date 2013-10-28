<?php
/**
 * @file
 * cipp_visualization.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cipp_visualization_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'viz-content-type';
  $context->description = '';
  $context->tag = 'Content types';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'visualizations' => 'visualizations',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'breadcrumb' => 'visualizaciones-y-herramientas',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Content types');
  $export['viz-content-type'] = $context;

  return $export;
}
