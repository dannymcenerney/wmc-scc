<?php
/**
 * @file
 * top_left_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function top_left_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-top-left-menu.
  $menus['menu-top-left-menu'] = array(
    'menu_name' => 'menu-top-left-menu',
    'title' => 'Top Left Menu',
    'description' => 'This is the top left menu of the website.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('This is the top left menu of the website.');
  t('Top Left Menu');


  return $menus;
}
