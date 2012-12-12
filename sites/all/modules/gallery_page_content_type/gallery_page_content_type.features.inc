<?php
/**
 * @file
 * gallery_page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function gallery_page_content_type_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function gallery_page_content_type_node_info() {
  $items = array(
    'gallery_page' => array(
      'name' => t('Gallery Page'),
      'base' => 'node_content',
      'description' => t('Gallery page examples are Outdoor, Indoor & Foundations.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
