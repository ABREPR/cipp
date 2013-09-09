<?php
/**
 * @file
 * cipp_overrides.features.inc
 */

/**
 * Implements hook_content_defaults_alter().
 */
function cipp_overrides_content_defaults_alter(&$data) {
  if (isset($data['about'])) {
    unset($data['about']);
  }
  if (isset($data['aed-district-names'])) {
    $data['aed-district-names']->comment = 0; /* WAS: 0 */
    $data['aed-district-names']->created = 1351485646; /* WAS: 1351485646 */
    $data['aed-district-names']->exported_path = 'dataset/resource/23e6bbab-4c49-4eea-9d6a-183b698039e1'; /* WAS: '' */
    $data['aed-district-names']->field_dataset_ref = array(
      'und' => array(
        0 => array(
          'target_id' => 4,
        ),
      ),
    ); /* WAS: '' */
    $data['aed-district-names']->field_format['und']['0']['tid'] = 5; /* WAS: 5 */
    $data['aed-district-names']->field_upload['und']['0']['filesize'] = 32378; /* WAS: 32378 */
    $data['aed-district-names']->field_upload['und']['0']['graph'] = 0; /* WAS: 0 */
    $data['aed-district-names']->field_upload['und']['0']['grid'] = 1; /* WAS: 1 */
    $data['aed-district-names']->field_upload['und']['0']['map'] = 1; /* WAS: 1 */
    $data['aed-district-names']->field_upload['und']['0']['status'] = 1; /* WAS: 1 */
    $data['aed-district-names']->field_upload['und']['0']['uuid'] = '8501d042-b68a-469e-a5e1-6d60a8bdb0dc'; /* WAS: '' */
    $data['aed-district-names']->promote = 0; /* WAS: 0 */
    $data['aed-district-names']->sort_value = 5; /* WAS: 5 */
    $data['aed-district-names']->status = 1; /* WAS: 1 */
    $data['aed-district-names']->sticky = 0; /* WAS: 0 */
    $data['aed-district-names']->translate = 0; /* WAS: 0 */
    unset($data['aed-district-names']->field_upload['und']['0']['timeline']);
    unset($data['aed-district-names']->field_upload['und']['0']['transform']);
  }
  if (isset($data['afghan-election-districts'])) {
    $data['afghan-election-districts']->comment = 1; /* WAS: 1 */
    $data['afghan-election-districts']->created = 1351612344; /* WAS: 1351612344 */
    $data['afghan-election-districts']->exported_path = 'dataset/afghanistan-election-districts'; /* WAS: '' */
    $data['afghan-election-districts']->field_tags['und']['0']['tid'] = 1; /* WAS: 1 */
    $data['afghan-election-districts']->field_tags['und']['1']['tid'] = 2; /* WAS: 2 */
    $data['afghan-election-districts']->field_tags['und']['2']['tid'] = 3; /* WAS: 3 */
    $data['afghan-election-districts']->field_tags['und']['3']['tid'] = 4; /* WAS: 4 */
    $data['afghan-election-districts']->promote = 0; /* WAS: 0 */
    $data['afghan-election-districts']->sort_value = 4; /* WAS: 4 */
    $data['afghan-election-districts']->status = 1; /* WAS: 1 */
    $data['afghan-election-districts']->sticky = 0; /* WAS: 0 */
    $data['afghan-election-districts']->translate = 0; /* WAS: 0 */
    unset($data['afghan-election-districts']->og_group_ref);
  }
  if (isset($data['foreclosure-jan-state'])) {
    $data['foreclosure-jan-state']->body['und']['0']['safe_value'] = '<p>US National Foreclosure Statistics - By State - January 2012</p>
    '; /* WAS: '<p>US National Foreclosure Statistics - By State - January 2012</p>' */
    $data['foreclosure-jan-state']->comment = 0; /* WAS: 0 */
    $data['foreclosure-jan-state']->created = 1360558980; /* WAS: 1360558980 */
    $data['foreclosure-jan-state']->exported_path = 'dataset/resource/92ced429-1e86-40b8-8059-a0fa5f504097'; /* WAS: 'dataset/us-national-foreclosure-statistics-january-2012/resource/d9ed9373-4371-4f94-a17d' */
    $data['foreclosure-jan-state']->field_dataset_ref = array(
      'und' => array(
        0 => array(
          'target_id' => 9,
        ),
      ),
    ); /* WAS: '' */
    $data['foreclosure-jan-state']->field_format['und']['0']['tid'] = 5; /* WAS: 5 */
    $data['foreclosure-jan-state']->field_upload['und']['0']['filesize'] = 1015; /* WAS: 1015 */
    $data['foreclosure-jan-state']->field_upload['und']['0']['graph'] = 1; /* WAS: 1 */
    $data['foreclosure-jan-state']->field_upload['und']['0']['grid'] = 1; /* WAS: 1 */
    $data['foreclosure-jan-state']->field_upload['und']['0']['map'] = 0; /* WAS: 0 */
    $data['foreclosure-jan-state']->field_upload['und']['0']['status'] = 1; /* WAS: 1 */
    $data['foreclosure-jan-state']->field_upload['und']['0']['uuid'] = '6780d215-6fbc-4780-8a94-652aa6093bd7'; /* WAS: '59f55f0d-eb69-4339-bd9f-e5e82a564178' */
    $data['foreclosure-jan-state']->promote = 0; /* WAS: 0 */
    $data['foreclosure-jan-state']->sort_value = 8; /* WAS: 8 */
    $data['foreclosure-jan-state']->status = 1; /* WAS: 1 */
    $data['foreclosure-jan-state']->sticky = 0; /* WAS: 0 */
    $data['foreclosure-jan-state']->translate = 0; /* WAS: 0 */
    unset($data['foreclosure-jan-state']->field_upload['und']['0']['timeline']);
    unset($data['foreclosure-jan-state']->field_upload['und']['0']['transform']);
  }
  if (isset($data['gold-prices'])) {
    $data['gold-prices']->comment = 1; /* WAS: 1 */
    $data['gold-prices']->created = 1360555545; /* WAS: 1360555545 */
    $data['gold-prices']->promote = 0; /* WAS: 0 */
    $data['gold-prices']->sort_value = 7; /* WAS: 7 */
    $data['gold-prices']->status = 1; /* WAS: 1 */
    $data['gold-prices']->sticky = 0; /* WAS: 0 */
    $data['gold-prices']->translate = 0; /* WAS: 0 */
    unset($data['gold-prices']->og_group_ref);
  }
  if (isset($data['group-data-explorer'])) {
    $data['group-data-explorer']->comment = 0; /* WAS: 0 */
    $data['group-data-explorer']->created = 1357269426; /* WAS: 1357269426 */
    $data['group-data-explorer']->exported_path = 'group/data-explorer-examples'; /* WAS: '' */
    $data['group-data-explorer']->field_image['und']['0']['filesize'] = 99273; /* WAS: 99273 */
    $data['group-data-explorer']->field_image['und']['0']['height'] = 477; /* WAS: 477 */
    $data['group-data-explorer']->field_image['und']['0']['status'] = 1; /* WAS: 1 */
    $data['group-data-explorer']->field_image['und']['0']['uuid'] = '5f839b58-871d-49e3-8426-d1bbd92c809b'; /* WAS: '' */
    $data['group-data-explorer']->field_image['und']['0']['width'] = 800; /* WAS: 800 */
    $data['group-data-explorer']->promote = 0; /* WAS: 0 */
    $data['group-data-explorer']->sort_value = 2; /* WAS: 2 */
    $data['group-data-explorer']->status = 1; /* WAS: 1 */
    $data['group-data-explorer']->sticky = 0; /* WAS: 0 */
    $data['group-data-explorer']->translate = 0; /* WAS: 0 */
  }
  if (isset($data['group-geospatial'])) {
    $data['group-geospatial']->comment = 0; /* WAS: 0 */
    $data['group-geospatial']->created = 1357278812; /* WAS: 1357278812 */
    $data['group-geospatial']->exported_path = 'group/geospatial-data-explorer-examples'; /* WAS: '' */
    $data['group-geospatial']->field_image['und']['0']['filesize'] = 68214; /* WAS: 68214 */
    $data['group-geospatial']->field_image['und']['0']['height'] = 189; /* WAS: 189 */
    $data['group-geospatial']->field_image['und']['0']['status'] = 1; /* WAS: 1 */
    $data['group-geospatial']->field_image['und']['0']['uuid'] = 'bfba1e30-651f-4497-b80f-dcd40f9feb2e'; /* WAS: '' */
    $data['group-geospatial']->field_image['und']['0']['width'] = 500; /* WAS: 500 */
    $data['group-geospatial']->promote = 0; /* WAS: 0 */
    $data['group-geospatial']->sort_value = 1; /* WAS: 1 */
    $data['group-geospatial']->status = 1; /* WAS: 1 */
    $data['group-geospatial']->sticky = 0; /* WAS: 0 */
    $data['group-geospatial']->translate = 0; /* WAS: 0 */
  }
  if (isset($data['national-foreclose'])) {
    $data['national-foreclose']->body['und']['0']['safe_value'] = '<p>County data: <a href="http://www.npr.org/templates/story/story.php?storyId=111494514">http://www.npr.org/templates/story/story.php?storyId=111494514</a></p>
    
    <p>State data: <a href="http://statehealthfacts.org/comparetable.jsp?ind=649&amp;cat=1">http://statehealthfacts.org/comparetable.jsp?ind=649&amp;cat=1</a></p>
    '; /* WAS: '<p>County data: <a href="http://www.npr.org/templates/story/story.php?storyId=111494514">http://www.npr.org/templates/story/story.php?storyId=111494514</a></p><p>State data: <a href="http://statehealthfacts.org/comparetable.jsp?ind=649&amp;cat=1">http://statehealthfacts.org/comparetable.jsp?ind=649&amp;cat=1</a></p>' */
    $data['national-foreclose']->comment = 1; /* WAS: 1 */
    $data['national-foreclose']->created = 1360557746; /* WAS: 1360557746 */
    $data['national-foreclose']->exported_path = 'dataset/us-national-foreclosure-statistics-january-2012'; /* WAS: 'us-national-foreclosure-statistics-january-2012' */
    $data['national-foreclose']->field_tags['und']['0']['tid'] = 7; /* WAS: 7 */
    $data['national-foreclose']->field_tags['und']['1']['tid'] = 8; /* WAS: 8 */
    $data['national-foreclose']->field_tags['und']['2']['tid'] = 9; /* WAS: 9 */
    $data['national-foreclose']->promote = 0; /* WAS: 0 */
    $data['national-foreclose']->sort_value = 9; /* WAS: 9 */
    $data['national-foreclose']->status = 1; /* WAS: 1 */
    $data['national-foreclose']->sticky = 0; /* WAS: 0 */
    $data['national-foreclose']->translate = 0; /* WAS: 0 */
    unset($data['national-foreclose']->og_group_ref);
  }
  if (isset($data['polling-madison'])) {
    $data['polling-madison']->comment = 0; /* WAS: 0 */
    $data['polling-madison']->created = 1360559790; /* WAS: 1360559790 */
    $data['polling-madison']->exported_path = 'dataset/resource/c9e56377-b924-40b6-acac-793668819aae'; /* WAS: 'dataset/wisconsin-polling-places/resource/0a6ef5bc-340c-40d7-b8ea-f7f12c390b1f' */
    $data['polling-madison']->field_dataset_ref = array(
      'und' => array(
        0 => array(
          'target_id' => 11,
        ),
      ),
    ); /* WAS: '' */
    $data['polling-madison']->field_format['und']['0']['tid'] = 5; /* WAS: 5 */
    $data['polling-madison']->field_upload['und']['0']['filesize'] = 17468; /* WAS: 17468 */
    $data['polling-madison']->field_upload['und']['0']['graph'] = 0; /* WAS: 0 */
    $data['polling-madison']->field_upload['und']['0']['grid'] = 1; /* WAS: 1 */
    $data['polling-madison']->field_upload['und']['0']['map'] = 1; /* WAS: 1 */
    $data['polling-madison']->field_upload['und']['0']['status'] = 1; /* WAS: 1 */
    $data['polling-madison']->field_upload['und']['0']['uuid'] = '1493295e-1763-404a-96fc-2b74719b2fd2'; /* WAS: 'd8c82777-f8ab-4020-ab1a-177b9774c1b5' */
    $data['polling-madison']->promote = 0; /* WAS: 0 */
    $data['polling-madison']->sort_value = 10; /* WAS: 10 */
    $data['polling-madison']->status = 1; /* WAS: 1 */
    $data['polling-madison']->sticky = 0; /* WAS: 0 */
    $data['polling-madison']->translate = 0; /* WAS: 0 */
    unset($data['polling-madison']->field_upload['und']['0']['timeline']);
    unset($data['polling-madison']->field_upload['und']['0']['transform']);
  }
  if (isset($data['polling'])) {
    $data['polling']->body['und']['0']['safe_value'] = '<p>Polling places in the state of Wisconsin</p>
    '; /* WAS: '<p>Polling places in the state of Wisconsin</p>' */
    $data['polling']->comment = 1; /* WAS: 1 */
    $data['polling']->created = 1360559620; /* WAS: 1360559620 */
    $data['polling']->exported_path = 'dataset/wisconsin-polling-places'; /* WAS: '' */
    $data['polling']->field_tags['und']['0']['tid'] = 9; /* WAS: 9 */
    $data['polling']->promote = 0; /* WAS: 0 */
    $data['polling']->sort_value = 11; /* WAS: 11 */
    $data['polling']->status = 1; /* WAS: 1 */
    $data['polling']->sticky = 0; /* WAS: 0 */
    $data['polling']->translate = 0; /* WAS: 0 */
    unset($data['polling']->og_group_ref);
  }
  if (isset($data['table-of-gold'])) {
    $data['table-of-gold']->comment = 0; /* WAS: 0 */
    $data['table-of-gold']->created = 1360555641; /* WAS: 1360555641 */
    $data['table-of-gold']->exported_path = 'dataset/resource/2d3f4606-8941-426f-b720-3f788f4556c7'; /* WAS: 'dataset/gold-prices-london-1950-2008-monthly/resource/f913d1f0-4e4e-459b-ad8d-57cf18d6fcdf' */
    $data['table-of-gold']->field_dataset_ref = array(
      'und' => array(
        0 => array(
          'target_id' => 7,
        ),
      ),
    ); /* WAS: '' */
    $data['table-of-gold']->field_format['und']['0']['tid'] = 5; /* WAS: 5 */
    $data['table-of-gold']->field_upload['und']['0']['filesize'] = 14502; /* WAS: 14502 */
    $data['table-of-gold']->field_upload['und']['0']['graph'] = 1; /* WAS: 1 */
    $data['table-of-gold']->field_upload['und']['0']['grid'] = 1; /* WAS: 1 */
    $data['table-of-gold']->field_upload['und']['0']['map'] = 0; /* WAS: 0 */
    $data['table-of-gold']->field_upload['und']['0']['status'] = 1; /* WAS: 1 */
    $data['table-of-gold']->field_upload['und']['0']['uuid'] = '148acb0e-55ef-4a12-9c0f-8eb24231ba50'; /* WAS: '97c6ae34-58c0-4e02-85a3-6a042a516227' */
    $data['table-of-gold']->promote = 0; /* WAS: 0 */
    $data['table-of-gold']->sort_value = 6; /* WAS: 6 */
    $data['table-of-gold']->status = 1; /* WAS: 1 */
    $data['table-of-gold']->sticky = 0; /* WAS: 0 */
    $data['table-of-gold']->translate = 0; /* WAS: 0 */
    unset($data['table-of-gold']->field_upload['und']['0']['timeline']);
    unset($data['table-of-gold']->field_upload['und']['0']['transform']);
  }
}

/**
 * Implements hook_field_default_fields_alter().
 */
function cipp_overrides_field_default_fields_alter(&$data) {
  if (isset($data['node-dataset-body'])) {
    $data['node-dataset-body']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-body']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-body']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-body']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-body']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-body']['field_instance']['display']['default']['weight'] = 0; /* WAS: 0 */
    $data['node-dataset-body']['field_instance']['display']['teaser']['settings']['trim_length'] = 200; /* WAS: 200 */
    $data['node-dataset-body']['field_instance']['display']['teaser']['weight'] = 1; /* WAS: 1 */
    $data['node-dataset-body']['field_instance']['settings']['text_processing'] = 1; /* WAS: 1 */
    $data['node-dataset-body']['field_instance']['widget']['settings']['rows'] = 4; /* WAS: 4 */
    $data['node-dataset-body']['field_instance']['widget']['weight'] = 1; /* WAS: 1 */
  }
  if (isset($data['node-dataset-field_additional_info'])) {
    $data['node-dataset-field_additional_info']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_additional_info']['field_config']['cardinality'] = -1; /* WAS: -1 */
    $data['node-dataset-field_additional_info']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_additional_info']['field_config']['settings']['first']['maxlength'] = 255; /* WAS: 255 */
    $data['node-dataset-field_additional_info']['field_config']['settings']['first']['precision'] = 10; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['first']['scale'] = 2; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['first']['size'] = 'normal'; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['first']['type'] = 'varchar'; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['second']['maxlength'] = 255; /* WAS: 255 */
    $data['node-dataset-field_additional_info']['field_config']['settings']['second']['precision'] = 10; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['second']['scale'] = 2; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['second']['size'] = 'normal'; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['settings']['second']['type'] = 'varchar'; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_additional_info']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_additional_info']['field_instance']['description'] = ''; /* WAS: 'This is additional information that can be added as a key-value pairing.' */
    $data['node-dataset-field_additional_info']['field_instance']['display']['default']['settings']['first']['suffix'] = ':&nbsp;'; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_instance']['display']['default']['settings']['style'] = 'inline'; /* WAS: '' */
    $data['node-dataset-field_additional_info']['field_instance']['display']['default']['type'] = 'double_field_unformatted_list'; /* WAS: 'double_field_table' */
    $data['node-dataset-field_additional_info']['field_instance']['display']['default']['weight'] = 4; /* WAS: 5 */
    $data['node-dataset-field_additional_info']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 7 */
    $data['node-dataset-field_additional_info']['field_instance']['widget']['settings']['first']['general']['required'] = 1; /* WAS: 0 */
    $data['node-dataset-field_additional_info']['field_instance']['widget']['settings']['first']['textfield']['size'] = 5; /* WAS: 5 */
    $data['node-dataset-field_additional_info']['field_instance']['widget']['settings']['second']['general']['required'] = 1; /* WAS: 0 */
    $data['node-dataset-field_additional_info']['field_instance']['widget']['settings']['second']['textfield']['size'] = 15; /* WAS: 15 */
    $data['node-dataset-field_additional_info']['field_instance']['widget']['weight'] = 17; /* WAS: 3 */
    unset($data['node-dataset-field_additional_info']['field_instance']['display']['default']['settings']['table']);
  }
  if (isset($data['node-dataset-field_author'])) {
    $data['node-dataset-field_author']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_author']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_author']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_author']['field_config']['settings']['max_length'] = 255; /* WAS: 255 */
    $data['node-dataset-field_author']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_author']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_author']['field_instance']['display']['default']['weight'] = 15; /* WAS: 15 */
    $data['node-dataset-field_author']['field_instance']['display']['teaser']['weight'] = 6; /* WAS: 6 */
    $data['node-dataset-field_author']['field_instance']['settings']['text_processing'] = 0; /* WAS: 0 */
    $data['node-dataset-field_author']['field_instance']['widget']['settings']['size'] = 60; /* WAS: 60 */
    $data['node-dataset-field_author']['field_instance']['widget']['weight'] = 10; /* WAS: 10 */
  }
  if (isset($data['node-dataset-field_data_dictionary'])) {
    $data['node-dataset-field_data_dictionary']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_data_dictionary']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_data_dictionary']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_data_dictionary']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_data_dictionary']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_data_dictionary']['field_instance']['description'] = 'Provides some sort of description that helps understanding the data. This usually consists of a table providing explanation of columns meaning, values interpretation and acronyms/codes used in the data. Can be a URL to such a resource. See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#property--data-dictionary">data dictionary</a> for more info.'; /* WAS: 'Provides some sort of description that helps understanding the data. This usually consists of a table providing explanation of columns meaning, values interpretation and acronyms/codes used in the data. Can be a URL to such a resource. . See DCAT <a href="http://www.w3.org/TR/vocab-dcat/#property--data-dictionary">data dictionary</a> for more info.' */
    $data['node-dataset-field_data_dictionary']['field_instance']['display']['default']['weight'] = 16; /* WAS: 16 */
    $data['node-dataset-field_data_dictionary']['field_instance']['settings']['text_processing'] = 0; /* WAS: 0 */
    $data['node-dataset-field_data_dictionary']['field_instance']['widget']['settings']['rows'] = 3; /* WAS: 3 */
    $data['node-dataset-field_data_dictionary']['field_instance']['widget']['weight'] = 16; /* WAS: 16 */
  }
  if (isset($data['node-dataset-field_frequency'])) {
    $data['node-dataset-field_frequency']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_frequency']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_frequency']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_frequency']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_frequency']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_frequency']['field_instance']['display']['default']['weight'] = 8; /* WAS: 8 */
    $data['node-dataset-field_frequency']['field_instance']['widget']['weight'] = 11; /* WAS: 11 */
  }
  if (isset($data['node-dataset-field_granularity'])) {
    $data['node-dataset-field_granularity']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_granularity']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_granularity']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_granularity']['field_config']['settings']['max_length'] = 255; /* WAS: 255 */
    $data['node-dataset-field_granularity']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_granularity']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_granularity']['field_instance']['display']['default']['weight'] = 14; /* WAS: 14 */
    $data['node-dataset-field_granularity']['field_instance']['settings']['text_processing'] = 0; /* WAS: 0 */
    $data['node-dataset-field_granularity']['field_instance']['widget']['settings']['size'] = 60; /* WAS: 60 */
    $data['node-dataset-field_granularity']['field_instance']['widget']['weight'] = 15; /* WAS: 15 */
  }
  if (isset($data['node-dataset-field_license'])) {
    $data['node-dataset-field_license']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_license']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_license']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_license']['field_config']['settings']['max_length'] = 255; /* WAS: 255 */
    $data['node-dataset-field_license']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_license']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_license']['field_instance']['display']['default']['weight'] = 13; /* WAS: 13 */
    $data['node-dataset-field_license']['field_instance']['display']['teaser']['weight'] = 5; /* WAS: 5 */
    $data['node-dataset-field_license']['field_instance']['settings']['text_processing'] = 0; /* WAS: 0 */
    $data['node-dataset-field_license']['field_instance']['widget']['settings']['other_size'] = 60; /* WAS: '' */
    $data['node-dataset-field_license']['field_instance']['widget']['weight'] = 3; /* WAS: 3 */
  }
  if (isset($data['node-dataset-field_spatial'])) {
    $data['node-dataset-field_spatial']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_spatial']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_spatial']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial']['field_instance']['display']['default']['weight'] = 10; /* WAS: 10 */
    $data['node-dataset-field_spatial']['field_instance']['widget']['settings']['map']['center']['lat'] = 43; /* WAS: 43 */
    $data['node-dataset-field_spatial']['field_instance']['widget']['settings']['map']['center']['lng'] = -89; /* WAS: -89 */
    $data['node-dataset-field_spatial']['field_instance']['widget']['settings']['map']['zoom'] = 4; /* WAS: 12 */
    $data['node-dataset-field_spatial']['field_instance']['widget']['weight'] = 12; /* WAS: 12 */
  }
  if (isset($data['node-dataset-field_spatial_geographical_cover'])) {
    $data['node-dataset-field_spatial_geographical_cover']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_spatial_geographical_cover']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_spatial_geographical_cover']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial_geographical_cover']['field_config']['settings']['max_length'] = 255; /* WAS: 255 */
    $data['node-dataset-field_spatial_geographical_cover']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial_geographical_cover']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial_geographical_cover']['field_instance']['display']['default']['weight'] = 11; /* WAS: 11 */
    $data['node-dataset-field_spatial_geographical_cover']['field_instance']['settings']['text_processing'] = 0; /* WAS: 0 */
    $data['node-dataset-field_spatial_geographical_cover']['field_instance']['widget']['settings']['size'] = 60; /* WAS: 60 */
    $data['node-dataset-field_spatial_geographical_cover']['field_instance']['widget']['weight'] = 13; /* WAS: 13 */
  }
  if (isset($data['node-dataset-field_tags'])) {
    $data['node-dataset-field_tags']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_tags']['field_config']['cardinality'] = -1; /* WAS: -1 */
    $data['node-dataset-field_tags']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_tags']['field_config']['settings']['allowed_values']['0']['parent'] = 0; /* WAS: 0 */
    $data['node-dataset-field_tags']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_tags']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_tags']['field_instance']['display']['default']['weight'] = 2; /* WAS: 2 */
    $data['node-dataset-field_tags']['field_instance']['display']['teaser']['weight'] = 2; /* WAS: 2 */
    $data['node-dataset-field_tags']['field_instance']['widget']['settings']['limit'] = 10; /* WAS: 10 */
    $data['node-dataset-field_tags']['field_instance']['widget']['settings']['min_length'] = 0; /* WAS: 0 */
    $data['node-dataset-field_tags']['field_instance']['widget']['settings']['size'] = 60; /* WAS: 60 */
    $data['node-dataset-field_tags']['field_instance']['widget']['weight'] = 2; /* WAS: 2 */
  }
  if (isset($data['node-dataset-field_temporal_coverage'])) {
    $data['node-dataset-field_temporal_coverage']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-field_temporal_coverage']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-dataset-field_temporal_coverage']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_temporal_coverage']['field_config']['settings']['cache_count'] = 4; /* WAS: 4 */
    $data['node-dataset-field_temporal_coverage']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-field_temporal_coverage']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-field_temporal_coverage']['field_instance']['display']['default']['weight'] = 12; /* WAS: 12 */
    $data['node-dataset-field_temporal_coverage']['field_instance']['settings']['default_value'] = 'blank'; /* WAS: 'now' */
    $data['node-dataset-field_temporal_coverage']['field_instance']['widget']['settings']['increment'] = 1; /* WAS: 1 */
    $data['node-dataset-field_temporal_coverage']['field_instance']['widget']['weight'] = 14; /* WAS: 14 */
  }
  if (isset($data['node-dataset-og_group_ref'])) {
    $data['node-dataset-og_group_ref']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-dataset-og_group_ref']['field_config']['cardinality'] = 2; /* WAS: 2 */
    $data['node-dataset-og_group_ref']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-og_group_ref']['field_config']['settings']['sync'] = ''; /* WAS: '' */
    $data['node-dataset-og_group_ref']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-dataset-og_group_ref']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-dataset-og_group_ref']['field_instance']['display']['default']['weight'] = 5; /* WAS: 5 */
    $data['node-dataset-og_group_ref']['field_instance']['display']['teaser']['weight'] = 3; /* WAS: 3 */
    $data['node-dataset-og_group_ref']['field_instance']['widget']['weight'] = 6; /* WAS: 4 */
  }
  if (isset($data['node-group-body'])) {
    $data['node-group-body']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-group-body']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-group-body']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-group-body']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-group-body']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-group-body']['field_instance']['display']['default']['weight'] = 1; /* WAS: 1 */
    $data['node-group-body']['field_instance']['display']['teaser']['weight'] = 1; /* WAS: 1 */
    $data['node-group-body']['field_instance']['widget']['weight'] = 6; /* WAS: 6 */
  }
  if (isset($data['node-group-field_image'])) {
    $data['node-group-field_image']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-group-field_image']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-group-field_image']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-group-field_image']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-group-field_image']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-group-field_image']['field_instance']['display']['default']['weight'] = 0; /* WAS: 0 */
    $data['node-group-field_image']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 0 */
    $data['node-group-field_image']['field_instance']['widget']['weight'] = 5; /* WAS: 5 */
  }
  if (isset($data['node-group-group_group'])) {
    $data['node-group-group_group']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-group-group_group']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-group-group_group']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-group-group_group']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-group-group_group']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-group-group_group']['field_instance']['display']['default']['weight'] = 2; /* WAS: 3 */
    $data['node-group-group_group']['field_instance']['display']['teaser']['weight'] = 3; /* WAS: 3 */
    $data['node-group-group_group']['field_instance']['widget']['weight'] = 2; /* WAS: 2 */
  }
  if (isset($data['node-page-body'])) {
    $data['node-page-body']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-page-body']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-page-body']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-page-body']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-page-body']['field_instance']['deleted'] = 0; /* WAS: 0 */
  }
  if (isset($data['node-resource-body'])) {
    $data['node-resource-body']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-body']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-resource-body']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-body']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-body']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-body']['field_instance']['display']['default']['weight'] = 0; /* WAS: 0 */
    $data['node-resource-body']['field_instance']['display']['teaser']['settings']['trim_length'] = 200; /* WAS: 200 */
    $data['node-resource-body']['field_instance']['display']['teaser']['weight'] = 1; /* WAS: 1 */
    $data['node-resource-body']['field_instance']['settings']['text_processing'] = 1; /* WAS: 1 */
    $data['node-resource-body']['field_instance']['widget']['settings']['rows'] = 4; /* WAS: 4 */
    $data['node-resource-body']['field_instance']['widget']['weight'] = 2; /* WAS: 2 */
  }
  if (isset($data['node-resource-field_dataset_ref'])) {
    $data['node-resource-field_dataset_ref']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-field_dataset_ref']['field_config']['cardinality'] = -1; /* WAS: 1 */
    $data['node-resource-field_dataset_ref']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_dataset_ref']['field_config']['settings']['sync'] = 'field_resources'; /* WAS: '' */
    $data['node-resource-field_dataset_ref']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-field_dataset_ref']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_dataset_ref']['field_instance']['display']['default']['weight'] = 6; /* WAS: 6 */
    $data['node-resource-field_dataset_ref']['field_instance']['required'] = 0; /* WAS: FALSE */
    $data['node-resource-field_dataset_ref']['field_instance']['widget']['active'] = 1; /* WAS: '' */
    $data['node-resource-field_dataset_ref']['field_instance']['widget']['weight'] = 9; /* WAS: 9 */
  }
  if (isset($data['node-resource-field_format'])) {
    $data['node-resource-field_format']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-field_format']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-resource-field_format']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_format']['field_config']['settings']['allowed_values']['0']['parent'] = 0; /* WAS: 0 */
    $data['node-resource-field_format']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-field_format']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_format']['field_instance']['display']['default']['weight'] = 4; /* WAS: 4 */
    $data['node-resource-field_format']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 0 */
    $data['node-resource-field_format']['field_instance']['widget']['module'] = 'autocomplete_deluxe'; /* WAS: 'options' */
    $data['node-resource-field_format']['field_instance']['widget']['type'] = 'autocomplete_deluxe_taxonomy'; /* WAS: 'options_select' */
    $data['node-resource-field_format']['field_instance']['widget']['weight'] = 7; /* WAS: 7 */
  }
  if (isset($data['node-resource-field_link_api'])) {
    $data['node-resource-field_link_api']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-field_link_api']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-resource-field_link_api']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_api']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_api']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_api']['field_instance']['display']['default']['settings']['height'] = 480; /* WAS: 480 */
    $data['node-resource-field_link_api']['field_instance']['display']['default']['settings']['width'] = 900; /* WAS: 900 */
    $data['node-resource-field_link_api']['field_instance']['display']['default']['weight'] = 3; /* WAS: 3 */
    $data['node-resource-field_link_api']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_api']['field_instance']['settings']['display']['url_cutoff'] = 80; /* WAS: 80 */
    $data['node-resource-field_link_api']['field_instance']['settings']['title_maxlength'] = 128; /* WAS: 128 */
    $data['node-resource-field_link_api']['field_instance']['widget']['weight'] = 5; /* WAS: 5 */
  }
  if (isset($data['node-resource-field_link_file'])) {
    $data['node-resource-field_link_file']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-field_link_file']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-resource-field_link_file']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_file']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_file']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_file']['field_instance']['display']['default']['weight'] = 2; /* WAS: 2 */
    $data['node-resource-field_link_file']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 0 */
    $data['node-resource-field_link_file']['field_instance']['settings']['display']['url_cutoff'] = 80; /* WAS: 80 */
    $data['node-resource-field_link_file']['field_instance']['settings']['title_maxlength'] = 128; /* WAS: 128 */
    $data['node-resource-field_link_file']['field_instance']['widget']['weight'] = 4; /* WAS: 4 */
  }
  if (isset($data['node-resource-field_upload'])) {
    $data['node-resource-field_upload']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-field_upload']['field_config']['cardinality'] = 1; /* WAS: 1 */
    $data['node-resource-field_upload']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_upload']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-field_upload']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-field_upload']['field_instance']['display']['default']['weight'] = 1; /* WAS: 1 */
    $data['node-resource-field_upload']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 0 */
    $data['node-resource-field_upload']['field_instance']['settings']['file_extensions'] = 'csv html xls json xlsx doc rdf txt jpg png gif tiff pdf odf'; /* WAS: 'csv' */
    $data['node-resource-field_upload']['field_instance']['widget']['weight'] = 6; /* WAS: 6 */
  }
  if (isset($data['node-resource-og_group_ref'])) {
    $data['node-resource-og_group_ref']['field_config']['active'] = 1; /* WAS: 1 */
    $data['node-resource-og_group_ref']['field_config']['cardinality'] = 2; /* WAS: 2 */
    $data['node-resource-og_group_ref']['field_config']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-og_group_ref']['field_config']['settings']['sync'] = ''; /* WAS: '' */
    $data['node-resource-og_group_ref']['field_config']['translatable'] = 0; /* WAS: 0 */
    $data['node-resource-og_group_ref']['field_instance']['deleted'] = 0; /* WAS: 0 */
    $data['node-resource-og_group_ref']['field_instance']['display']['default']['weight'] = 5; /* WAS: 5 */
    $data['node-resource-og_group_ref']['field_instance']['display']['teaser']['weight'] = 0; /* WAS: 0 */
    $data['node-resource-og_group_ref']['field_instance']['widget']['weight'] = 8; /* WAS: 8 */
  }
}

/**
 * Implements hook_field_group_info_alter().
 */
function cipp_overrides_field_group_info_alter(&$data) {
  if (isset($data['group_tab_datasets|node|group|default'])) {
    unset($data['group_tab_datasets|node|group|default']);
  }
  if (isset($data['group_tab_datasets|node|group|form'])) {
    unset($data['group_tab_datasets|node|group|form']);
  }
  if (isset($data['group_tab_members|node|group|default'])) {
    unset($data['group_tab_members|node|group|default']);
  }
}

/**
 * Implements hook_filter_default_formats_alter().
 */
function cipp_overrides_filter_default_formats_alter(&$data) {
  if (isset($data['html'])) {
    $data['html']['cache'] = 1; /* WAS: 1 */
    $data['html']['filters']['filter_htmlcorrector']['status'] = 1; /* WAS: 1 */
    $data['html']['filters']['filter_htmlcorrector']['weight'] = 10; /* WAS: 10 */
    $data['html']['filters']['filter_html']['status'] = 1; /* WAS: 1 */
    $data['html']['filters']['filter_html']['weight'] = -10; /* WAS: -10 */
    $data['html']['filters']['filter_markdown']['status'] = 1; /* WAS: 1 */
    $data['html']['filters']['filter_markdown']['weight'] = 0; /* WAS: 0 */
    $data['html']['filters']['filter_url']['settings']['filter_url_length'] = 72; /* WAS: 72 */
    $data['html']['filters']['filter_url']['status'] = 1; /* WAS: 1 */
    $data['html']['filters']['filter_url']['weight'] = 0; /* WAS: 0 */
    $data['html']['status'] = 1; /* WAS: 1 */
    $data['html']['weight'] = 0; /* WAS: 0 */
  }
}

/**
 * Implements hook_default_og_membership_type_alter().
 */
function cipp_overrides_default_og_membership_type_alter(&$data) {
  if (isset($data['og_membership_type_default'])) {
    $data['og_membership_type_default']->language = ''; /* WAS: '' */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cipp_overrides_views_default_views_alter(&$data) {
  if (isset($data['archive'])) {
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['block']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['arguments']['created_year_month']['title_enable'] = TRUE; /* WAS: 1 */
    $data['archive']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
  if (isset($data['frontpage'])) {
    $data['frontpage']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['frontpage']->display['default']->display_options['row_options']);
  }
  if (isset($data['glossary'])) {
    $data['glossary']->display['attachment']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['arguments']['title']['summary_options']['inline'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['attachment']->display_options['inherit_arguments'] = FALSE; /* WAS: 0 */
    $data['glossary']->display['default']->display_options['arguments']['title']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['glossary'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['arguments']['title']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['glossary']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    unset($data['glossary']->display['attachment']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['arguments']['title']['transform_dash']);
    unset($data['glossary']->display['default']->display_options['fields']['name']['link_to_user']);
    unset($data['glossary']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['glossary']->display['default']->display_options['style_options']['override']);
    unset($data['glossary']->display['default']->display_options['style_options']['sticky']);
  }
  if (isset($data['taxonomy_term'])) {
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth_modifier']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['break_phrase'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['exception']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['arguments']['term_node_tid_depth']['title_enable'] = TRUE; /* WAS: 1 */
    $data['taxonomy_term']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
  }
}
