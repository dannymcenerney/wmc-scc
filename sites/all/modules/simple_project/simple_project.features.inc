<?php
/**
 * @file
 * simple_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function simple_project_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function simple_project_node_info() {
  $items = array(
    'project_simple' => array(
      'name' => t('Project (Simple)'),
      'base' => 'node_content',
      'description' => t('Simple Projects allow only one photo and a simple description.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
