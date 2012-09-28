<?php
/**
 * @file
 * tc_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tc_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'company_s_customers_box_layout_';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company\'s Customers (box layout)';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '15';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customers_target_id']['id'] = 'field_customers_target_id';
  $handler->display->display_options['relationships']['field_customers_target_id']['table'] = 'field_data_field_customers';
  $handler->display->display_options['relationships']['field_customers_target_id']['field'] = 'field_customers_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = FALSE;
  /* Field: Content: Company Description */
  $handler->display->display_options['fields']['field_descriptions']['id'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['table'] = 'field_data_field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['field'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_descriptions']['label'] = '';
  $handler->display->display_options['fields']['field_descriptions']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_descriptions']['alter']['text'] = '[title]<br>[field_descriptions]';
  $handler->display->display_options['fields']['field_descriptions']['alter']['max_length'] = '200';
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['field_descriptions']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_descriptions']['hide_alter_empty'] = FALSE;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_industry']['label'] = '';
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Competencies */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_competencies']['label'] = '';
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competencies']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  /* Field: Content: Customers */
  $handler->display->display_options['fields']['field_customers']['id'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['table'] = 'field_data_field_customers';
  $handler->display->display_options['fields']['field_customers']['field'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_customers']['label'] = '';
  $handler->display->display_options['fields']['field_customers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_customers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_customers']['delta_offset'] = '0';
  /* Field: Content: Competitors */
  $handler->display->display_options['fields']['field_competitors']['id'] = 'field_competitors';
  $handler->display->display_options['fields']['field_competitors']['table'] = 'field_data_field_competitors';
  $handler->display->display_options['fields']['field_competitors']['field'] = 'field_competitors';
  $handler->display->display_options['fields']['field_competitors']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_competitors']['label'] = '';
  $handler->display->display_options['fields']['field_competitors']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_competitors']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_competitors']['delta_offset'] = '0';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<i class="icon-edit"></i> [edit_node]   <i class=icon-eye-close></i> Follow';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['title_enable'] = TRUE;
  $handler->display->display_options['arguments']['nid']['title'] = '%1\'s Customers';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'company/%/customers2';
  $export['company_s_customers_box_layout_'] = $view;

  return $export;
}
