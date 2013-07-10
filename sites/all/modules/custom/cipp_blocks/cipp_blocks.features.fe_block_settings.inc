<?php
/**
 * @file
 * cipp_blocks.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function cipp_blocks_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-blog_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'blog_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cipp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cipp',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-cipp_social'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'cipp_social',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cipp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cipp',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['block-front_featured'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'front_featured',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cipp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cipp',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Featured Visualization',
    'visibility' => 0,
  );

  $export['block-front_help'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'front_help',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'cipp' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'cipp',
        'weight' => 0,
      ),
      'dkan' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'dkan',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Help Improve Open PR',
    'visibility' => 0,
  );

  return $export;
}
