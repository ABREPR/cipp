<?php
/**
 * @file
 * cipp_groups.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function cipp_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'find_data';
  $context->description = 'Find Data landing page for groups and taxonomy';
  $context->tag = 'Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'find-data' => 'find-data',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Find Data landing page for groups and taxonomy');
  t('Page');
  $export['find_data'] = $context;

  return $export;
}
