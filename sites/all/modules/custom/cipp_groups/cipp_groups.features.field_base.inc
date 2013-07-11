<?php
/**
 * @file
 * cipp_groups.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function cipp_groups_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_group_type'
  $field_bases['field_group_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_group_type',
    'foreign keys' => array(),
    'indexes' => array(
      'value' => array(
        0 => 'value',
      ),
    ),
    'locked' => 0,
    'module' => 'list',
    'settings' => array(
      'allowed_values' => array(
        1 => 'Government',
        2 => 'Socio-economic',
      ),
      'allowed_values_function' => '',
    ),
    'translatable' => 0,
    'type' => 'list_integer',
  );

  return $field_bases;
}
