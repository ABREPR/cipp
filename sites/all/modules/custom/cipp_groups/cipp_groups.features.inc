<?php
/**
 * @file
 * cipp_groups.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function cipp_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}

/**
 * Implements hook_views_api().
 */
function cipp_groups_views_api() {
  return array("api" => "3.0");
}
