<?php
/**
 * @file
 * tc_company.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function tc_company_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'company';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Company';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Company Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_address']['field_api_classes'] = 0;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_website']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_website']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_website']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_website']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_website']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_website']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_website']['field_api_classes'] = 0;
  /* Field: Content: Company Description */
  $handler->display->display_options['fields']['field_descriptions']['id'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['table'] = 'field_data_field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['field'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_industry']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_industry']['field_api_classes'] = 0;
  /* Field: Content: Competencies */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_competencies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_competencies']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_competencies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_competencies']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_competencies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_competencies']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_competencies']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_competencies']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_competencies']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_competencies']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_competencies']['field_api_classes'] = 0;
  /* Field: Content: Competitors */
  $handler->display->display_options['fields']['field_competitors']['id'] = 'field_competitors';
  $handler->display->display_options['fields']['field_competitors']['table'] = 'field_data_field_competitors';
  $handler->display->display_options['fields']['field_competitors']['field'] = 'field_competitors';
  $handler->display->display_options['fields']['field_competitors']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_competitors']['alter']['text'] = '<a href="/company/[nid]/competitors">[field_competitors]</a>';
  $handler->display->display_options['fields']['field_competitors']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_competitors']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_competitors']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_competitors']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_competitors']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_competitors']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_competitors']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_competitors']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_competitors']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_competitors']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_competitors']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_competitors']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_competitors']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_competitors']['field_api_classes'] = 0;
  /* Field: Content: Customers */
  $handler->display->display_options['fields']['field_customers']['id'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['table'] = 'field_data_field_customers';
  $handler->display->display_options['fields']['field_customers']['field'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['text'] = '<a href="/company/[nid]/customers">[field_customers]</a>';
  $handler->display->display_options['fields']['field_customers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_customers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_customers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_customers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_customers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_customers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_customers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_customers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_customers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_customers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_customers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_customers']['field_api_classes'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title'] = '%1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
  $handler->display->display_options['path'] = 'company';
  $export['company'] = $view;

  $view = new view;
  $view->name = 'company_s_competitors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company\'s Competitors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_competitors_target_id']['id'] = 'field_competitors_target_id';
  $handler->display->display_options['relationships']['field_competitors_target_id']['table'] = 'field_data_field_competitors';
  $handler->display->display_options['relationships']['field_competitors_target_id']['field'] = 'field_competitors_target_id';
  $handler->display->display_options['relationships']['field_competitors_target_id']['required'] = 0;
  /* Field: Content: Company Description */
  $handler->display->display_options['fields']['field_descriptions']['id'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['table'] = 'field_data_field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['field'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['relationship'] = 'field_competitors_target_id';
  $handler->display->display_options['fields']['field_descriptions']['label'] = 'Company';
  $handler->display->display_options['fields']['field_descriptions']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_descriptions']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_competitors_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<a href="#">[title]</a>
<br>[field_descriptions] ';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['relationship'] = 'field_competitors_target_id';
  $handler->display->display_options['fields']['field_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_industry']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_industry']['field_api_classes'] = 0;
  /* Field: Content: Competencies */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['relationship'] = 'field_competitors_target_id';
  $handler->display->display_options['fields']['field_competencies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_competencies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_competencies']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_competencies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_competencies']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_competencies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_competencies']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_competencies']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_competencies']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_competencies']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_competencies']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_competencies']['field_api_classes'] = 0;
  /* Field: Content: Customers */
  $handler->display->display_options['fields']['field_customers']['id'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['table'] = 'field_data_field_customers';
  $handler->display->display_options['fields']['field_customers']['field'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['relationship'] = 'field_competitors_target_id';
  $handler->display->display_options['fields']['field_customers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_customers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_customers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_customers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_customers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_customers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_customers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_customers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_customers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_customers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_customers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_customers']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="#">Follow</a>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title'] = '%1\'s Competitors';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
  $handler->display->display_options['path'] = 'company/%/competitors';
  $export['company_s_competitors'] = $view;

  $view = new view;
  $view->name = 'company_s_customers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company\'s Customers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_customers_target_id']['id'] = 'field_customers_target_id';
  $handler->display->display_options['relationships']['field_customers_target_id']['table'] = 'field_data_field_customers';
  $handler->display->display_options['relationships']['field_customers_target_id']['field'] = 'field_customers_target_id';
  $handler->display->display_options['relationships']['field_customers_target_id']['required'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Company Description */
  $handler->display->display_options['fields']['field_descriptions']['id'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['table'] = 'field_data_field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['field'] = 'field_descriptions';
  $handler->display->display_options['fields']['field_descriptions']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_descriptions']['label'] = 'Company';
  $handler->display->display_options['fields']['field_descriptions']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['text'] = '[title]<br>[field_descriptions]';
  $handler->display->display_options['fields']['field_descriptions']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_descriptions']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['field_descriptions']['field_api_classes'] = 0;
  /* Field: Content: Industry */
  $handler->display->display_options['fields']['field_industry']['id'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['table'] = 'field_data_field_industry';
  $handler->display->display_options['fields']['field_industry']['field'] = 'field_industry';
  $handler->display->display_options['fields']['field_industry']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_industry']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_industry']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_industry']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_industry']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_industry']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_industry']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_industry']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_industry']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_industry']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_industry']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_industry']['field_api_classes'] = 0;
  /* Field: Content: Competencies */
  $handler->display->display_options['fields']['field_competencies']['id'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['table'] = 'field_data_field_competencies';
  $handler->display->display_options['fields']['field_competencies']['field'] = 'field_competencies';
  $handler->display->display_options['fields']['field_competencies']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_competencies']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_competencies']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_competencies']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_competencies']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_competencies']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_competencies']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_competencies']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_competencies']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_competencies']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_competencies']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_competencies']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_competencies']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_competencies']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_competencies']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_competencies']['field_api_classes'] = 0;
  /* Field: Content: Customers */
  $handler->display->display_options['fields']['field_customers']['id'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['table'] = 'field_data_field_customers';
  $handler->display->display_options['fields']['field_customers']['field'] = 'field_customers';
  $handler->display->display_options['fields']['field_customers']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_customers']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_customers']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_customers']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_customers']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_customers']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_customers']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_customers']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_customers']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_customers']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_customers']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_customers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_customers']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_customers']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_customers']['field_api_classes'] = 0;
  /* Field: Content: Competitors */
  $handler->display->display_options['fields']['field_competitors']['id'] = 'field_competitors';
  $handler->display->display_options['fields']['field_competitors']['table'] = 'field_data_field_competitors';
  $handler->display->display_options['fields']['field_competitors']['field'] = 'field_competitors';
  $handler->display->display_options['fields']['field_competitors']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['field_competitors']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_competitors']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_competitors']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_competitors']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_competitors']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_competitors']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_competitors']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_competitors']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_competitors']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_competitors']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_competitors']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_competitors']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_competitors']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_competitors']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_competitors']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="#">Follow</a>';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['relationship'] = 'field_customers_target_id';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['title_enable'] = 1;
  $handler->display->display_options['arguments']['nid']['title'] = '%1\'s Customers';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['default_argument_skip_url'] = 0;
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
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
  $handler->display->display_options['path'] = 'company/%/customers';
  $export['company_s_customers'] = $view;

  return $export;
}
