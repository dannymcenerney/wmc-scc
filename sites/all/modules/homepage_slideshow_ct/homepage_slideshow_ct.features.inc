<?php
/**
 * @file
 * homepage_slideshow_ct.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function homepage_slideshow_ct_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function homepage_slideshow_ct_node_info() {
  $items = array(
    'homepage_slideshow' => array(
      'name' => t('homepage_slideshow'),
      'base' => 'node_content',
      'description' => t('Add images to the homepage slideshow. Only create one of these content types!'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
