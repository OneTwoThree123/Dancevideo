<?php
/**
 * @file
 * dancevideo.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dancevideo_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "video_embed_field" && $api == "default_video_embed_styles") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dancevideo_views_api() {
  list($module, $api) = func_get_args();
  if ($module == "views" && $api == "views_default") {
    return array("version" => "3.0");
  }
}

/**
 * Implements hook_node_info().
 */
function dancevideo_node_info() {
  $items = array(
    '_dancevideo' => array(
      'name' => t('舞蹈视频'),
      'base' => 'node_content',
      'description' => t('包括视频、文字介绍和评价等级'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
