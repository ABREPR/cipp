<?php
/**
 * @file
 * cipp_blog.features.inc
 */

/**
 * Implements hook_context_default_contexts_alter().
 */
function cipp_blog_context_default_contexts_alter(&$data) {
  if (isset($data['blog-content-type'])) {
    $data['blog-content-type']->reactions['block']['blocks']['block-3'] = array(
      'module' => 'block',
      'delta' => 3,
      'region' => 'preface_first',
      'weight' => -10,
    ); /* WAS: '' */
  }
}

/**
 * Implements hook_user_default_permissions_alter().
 */
function cipp_blog_user_default_permissions_alter(&$data) {
  if (isset($data['create blog content'])) {
    $data['create blog content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    $data['create blog content']['roles']['blogger'] = 'blogger'; /* WAS: '' */
    $data['create blog content']['roles']['contributor'] = 'contributor'; /* WAS: '' */
    $data['create blog content']['roles']['editor'] = 'editor'; /* WAS: '' */
    unset($data['create blog content']['roles']['0']);
    unset($data['create blog content']['roles']['1']);
    unset($data['create blog content']['roles']['2']);
    unset($data['create blog content']['roles']['3']);
  }
  if (isset($data['delete any blog content'])) {
    $data['delete any blog content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    $data['delete any blog content']['roles']['editor'] = 'editor'; /* WAS: '' */
    unset($data['delete any blog content']['roles']['0']);
    unset($data['delete any blog content']['roles']['1']);
  }
  if (isset($data['delete own blog content'])) {
    $data['delete own blog content']['roles']['blogger'] = 'blogger'; /* WAS: '' */
    $data['delete own blog content']['roles']['contributor'] = 'contributor'; /* WAS: '' */
    unset($data['delete own blog content']['roles']['0']);
    unset($data['delete own blog content']['roles']['1']);
  }
  if (isset($data['edit any blog content'])) {
    $data['edit any blog content']['roles']['administrator'] = 'administrator'; /* WAS: '' */
    $data['edit any blog content']['roles']['editor'] = 'editor'; /* WAS: '' */
    unset($data['edit any blog content']['roles']['0']);
    unset($data['edit any blog content']['roles']['1']);
  }
  if (isset($data['edit own blog content'])) {
    $data['edit own blog content']['roles']['blogger'] = 'blogger'; /* WAS: '' */
    $data['edit own blog content']['roles']['contributor'] = 'contributor'; /* WAS: '' */
    unset($data['edit own blog content']['roles']['0']);
    unset($data['edit own blog content']['roles']['1']);
  }
}

/**
 * Implements hook_user_default_roles_alter().
 */
function cipp_blog_user_default_roles_alter(&$data) {
  if (isset($data['blogger'])) {
    $data['blogger']['weight'] = 5; /* WAS: 5 */
  }
}

/**
 * Implements hook_views_default_views_alter().
 */
function cipp_blog_views_default_views_alter(&$data) {
  if (isset($data['blog'])) {
    $data['blog']->display['default']->display_options['use_more_always'] = FALSE; /* WAS: '' */
    $data['blog']->display['page_1']->display_options['arguments']['uid']['specify_validation'] = TRUE; /* WAS: 1 */
    $data['blog']->display['page_1']->display_options['arguments']['uid']['title_enable'] = TRUE; /* WAS: 1 */
    $data['blog']->display['page_1']->display_options['fields']['body']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['blog']->display['page_1']->display_options['fields']['created']['custom_date_format'] = 'F d, Y'; /* WAS: '' */
    $data['blog']->display['page_1']->display_options['fields']['created']['date_format'] = 'custom'; /* WAS: 'long' */
    $data['blog']->display['page_1']->display_options['fields']['created']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['blog']->display['page_1']->display_options['fields']['field_content_image']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['blog']->display['page_1']->display_options['fields']['name']['alter']['make_link'] = TRUE; /* WAS: 1 */
    $data['blog']->display['page_1']->display_options['fields']['name']['link_to_user'] = FALSE; /* WAS: 0 */
    $data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['text'] = 'Posted by [name] on [created]'; /* WAS: 'Posted [created] in [name]' */
    $data['blog']->display['page_1']->display_options['fields']['nothing']['element_default_classes'] = FALSE; /* WAS: 1 */
    $data['blog']->display['page_1']->display_options['fields']['nothing']['element_type'] = 'p'; /* WAS: 'em' */
    $data['blog']->display['page_1']->display_options['fields']['title']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    $data['blog']->display['page_1']->display_options['fields']['uid']['link_to_user'] = FALSE; /* WAS: 0 */
    $data['blog']->display['page_1']->display_options['fields']['view_node']['hide_alter_empty'] = FALSE; /* WAS: 0 */
    unset($data['blog']->display['block_2']->display_options['arguments']['uid']['break_phrase']);
    unset($data['blog']->display['block_2']->display_options['arguments']['uid']['default_argument_skip_url']);
    unset($data['blog']->display['block_2']->display_options['arguments']['uid']['not']);
    unset($data['blog']->display['default']->display_options['fields']['title']['alter']);
    unset($data['blog']->display['default']->display_options['fields']['title']['element_default_classes']);
    unset($data['blog']->display['default']->display_options['fields']['title']['element_label_colon']);
    unset($data['blog']->display['default']->display_options['fields']['title']['empty_zero']);
    unset($data['blog']->display['default']->display_options['fields']['title']['hide_empty']);
    unset($data['blog']->display['default']->display_options['fields']['title']['link_to_node']);
    unset($data['blog']->display['default']->display_options['pager']['options']['expose']);
    unset($data['blog']->display['feed_1']->display_options['arguments']['nid']['break_phrase']);
    unset($data['blog']->display['feed_1']->display_options['arguments']['nid']['not']);
    unset($data['blog']->display['page_1']->display_options['arguments']['uid']['break_phrase']);
    unset($data['blog']->display['page_1']->display_options['arguments']['uid']['default_argument_skip_url']);
    unset($data['blog']->display['page_1']->display_options['arguments']['uid']['not']);
    unset($data['blog']->display['page_1']->display_options['fields']['body']['alter']);
    unset($data['blog']->display['page_1']->display_options['fields']['body']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['body']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['body']['field_api_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['body']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['created']['alter']);
    unset($data['blog']->display['page_1']->display_options['fields']['created']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['created']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['created']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['field_content_image']['alter']);
    unset($data['blog']->display['page_1']->display_options['fields']['field_content_image']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['field_content_image']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['field_content_image']['field_api_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['field_content_image']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['absolute']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['alter_text']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['ellipsis']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['external']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['html']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['more_link']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['nl2br']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['replace_spaces']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['strip_tags']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['trim']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['trim_whitespace']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['alter']['word_boundary']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['format_username']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['hide_alter_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['name']['overwrite_anonymous']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['absolute']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['ellipsis']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['external']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['html']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['make_link']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['more_link']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['nl2br']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['replace_spaces']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['strip_tags']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['trim']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['trim_whitespace']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['alter']['word_boundary']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['hide_alter_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['nothing']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['title']['alter']);
    unset($data['blog']->display['page_1']->display_options['fields']['title']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['title']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['title']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['title']['link_to_node']);
    unset($data['blog']->display['page_1']->display_options['fields']['uid']['alter']);
    unset($data['blog']->display['page_1']->display_options['fields']['uid']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['uid']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['uid']['hide_alter_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['uid']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['fields']['view_node']['alter']);
    unset($data['blog']->display['page_1']->display_options['fields']['view_node']['element_default_classes']);
    unset($data['blog']->display['page_1']->display_options['fields']['view_node']['empty_zero']);
    unset($data['blog']->display['page_1']->display_options['fields']['view_node']['hide_empty']);
    unset($data['blog']->display['page_1']->display_options['pager']['options']['expose']);
  }
}
