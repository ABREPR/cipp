<?php
/**
 * @file
 * cipp_visualization.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cipp_visualization_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function cipp_visualization_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function cipp_visualization_node_info() {
  $items = array(
    'visualizations' => array(
      'name' => t('Visualizations'),
      'base' => 'node_content',
      'description' => t('Content type for visualizations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
