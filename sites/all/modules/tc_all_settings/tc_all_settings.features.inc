<?php
/**
 * @file
 * tc_all_settings.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tc_all_settings_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tc_all_settings_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company name'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
