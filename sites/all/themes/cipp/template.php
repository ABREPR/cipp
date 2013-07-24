<?php

/**
 * @file
 * Customizations for cipp.
 */

/**
 * Implements template_preprocess_page.
 */
function cipp_preprocess_page(&$vars) {
  // Remove title on dataset edit and creation pages.
  if (!empty($vars['node']) && in_array($vars['node']->type, array('dataset', 'resource'))) {
    $vars['title'] = '';
  }
}

function cipp_preprocess_html(&$vars) {
  drupal_add_css('http://fonts.googleapis.com/css?family=Open+Sans:300,400,700,400italic,700italic', array('type' => 'external'));
  drupal_add_css('http://fonts.googleapis.com/css?family=Oswald:400,700', array('type' => 'external'));
}

/**
 * Implements hook_form_alter.
 */
function cipp_form_alter(&$form, &$form_state, $form_id) {
  switch ($form_id) {
    case 'dataset_node_form':
      drupal_set_title('');
      $vars['title'] = '';
      break;
    
    case 'resource_node_form':
      drupal_set_title('none');
      $vars['title'] = '';
      break;
  }
}