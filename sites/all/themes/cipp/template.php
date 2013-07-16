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