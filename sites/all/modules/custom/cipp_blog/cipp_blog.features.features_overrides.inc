<?php
/**
 * @file
 * cipp_blog.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function cipp_blog_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.blog-content-type.reactions|block|blocks|block-3"] = array(
    'module' => 'block',
    'delta' => 3,
    'region' => 'preface_first',
    'weight' => -10,
  );

  // Exported overrides for: user_permission
  $overrides["user_permission.create blog content.roles|0"]["DELETED"] = TRUE;
  $overrides["user_permission.create blog content.roles|1"]["DELETED"] = TRUE;
  $overrides["user_permission.create blog content.roles|2"]["DELETED"] = TRUE;
  $overrides["user_permission.create blog content.roles|3"]["DELETED"] = TRUE;
  $overrides["user_permission.create blog content.roles|administrator"] = 'administrator';
  $overrides["user_permission.create blog content.roles|blogger"] = 'blogger';
  $overrides["user_permission.create blog content.roles|contributor"] = 'contributor';
  $overrides["user_permission.create blog content.roles|editor"] = 'editor';
  $overrides["user_permission.delete any blog content.roles|0"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any blog content.roles|1"]["DELETED"] = TRUE;
  $overrides["user_permission.delete any blog content.roles|administrator"] = 'administrator';
  $overrides["user_permission.delete any blog content.roles|editor"] = 'editor';
  $overrides["user_permission.delete own blog content.roles|0"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own blog content.roles|1"]["DELETED"] = TRUE;
  $overrides["user_permission.delete own blog content.roles|blogger"] = 'blogger';
  $overrides["user_permission.delete own blog content.roles|contributor"] = 'contributor';
  $overrides["user_permission.edit any blog content.roles|0"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any blog content.roles|1"]["DELETED"] = TRUE;
  $overrides["user_permission.edit any blog content.roles|administrator"] = 'administrator';
  $overrides["user_permission.edit any blog content.roles|editor"] = 'editor';
  $overrides["user_permission.edit own blog content.roles|0"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own blog content.roles|1"]["DELETED"] = TRUE;
  $overrides["user_permission.edit own blog content.roles|blogger"] = 'blogger';
  $overrides["user_permission.edit own blog content.roles|contributor"] = 'contributor';

  // Exported overrides for: user_role
  $overrides["user_role.blogger.weight"] = 5;

  // Exported overrides for: views_view
  $overrides["views_view.blog.display|block_2|display_options|arguments|uid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|block_2|display_options|arguments|uid|default_argument_skip_url"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|block_2|display_options|arguments|uid|not"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|fields|title|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|fields|title|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|fields|title|element_label_colon"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|fields|title|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|fields|title|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|pager|options|expose"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|default|display_options|use_more_always"] = FALSE;
  $overrides["views_view.blog.display|feed_1|display_options|arguments|nid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|feed_1|display_options|arguments|nid|not"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|arguments|uid|break_phrase"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|arguments|uid|default_argument_skip_url"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|arguments|uid|not"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|arguments|uid|specify_validation"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|arguments|uid|title_enable"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|body|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|body|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|body|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|body|field_api_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|body|hide_alter_empty"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|body|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|created|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|created|custom_date_format"] = 'F d, Y';
  $overrides["views_view.blog.display|page_1|display_options|fields|created|date_format"] = 'custom';
  $overrides["views_view.blog.display|page_1|display_options|fields|created|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|created|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|created|hide_alter_empty"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|created|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|field_content_image|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|field_content_image|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|field_content_image|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|field_content_image|field_api_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|field_content_image|hide_alter_empty"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|field_content_image|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|absolute"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|alter_text"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|ellipsis"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|external"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|html"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|make_link"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|more_link"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|nl2br"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|replace_spaces"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|strip_tags"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|trim"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|trim_whitespace"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|alter|word_boundary"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|format_username"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|hide_alter_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|link_to_user"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|name|overwrite_anonymous"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|absolute"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|ellipsis"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|external"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|html"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|make_link"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|more_link"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|nl2br"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|replace_spaces"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|strip_tags"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|text"] = 'Posted by [name] on [created]';
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|trim"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|trim_whitespace"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|alter|word_boundary"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|element_default_classes"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|element_type"] = 'p';
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|hide_alter_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|nothing|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|title|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|title|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|title|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|title|hide_alter_empty"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|title|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|title|link_to_node"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|uid|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|uid|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|uid|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|uid|hide_alter_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|uid|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|uid|link_to_user"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|view_node|alter"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|view_node|element_default_classes"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|view_node|empty_zero"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|fields|view_node|hide_alter_empty"] = FALSE;
  $overrides["views_view.blog.display|page_1|display_options|fields|view_node|hide_empty"]["DELETED"] = TRUE;
  $overrides["views_view.blog.display|page_1|display_options|pager|options|expose"]["DELETED"] = TRUE;

 return $overrides;
}
