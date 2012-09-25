<?php
/**
 * @file
 * tc_company.features.inc
 */

/**
 * Implements hook_views_api().
 */
function tc_company_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function tc_company_node_info() {
  $items = array(
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company name'),
      'help' => '',
    ),
  );
  return $items;
}
