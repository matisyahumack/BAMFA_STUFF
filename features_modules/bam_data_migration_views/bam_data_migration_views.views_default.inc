<?php
/**
 * @file
 * bam_data_migration_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bam_data_migration_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'test_data';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Test Data';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'CMS Import (limited fields) 18792 Records';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_artist' => 'field_artist',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_artist' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Film Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Recent Imports';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['path'] = 'test-data';

  /* Display: FM - Art objects */
  $handler = $view->new_display('page', 'FM - Art objects', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Art objects';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_dates_circa' => 'field_dates_circa',
    'field_dates' => 'field_dates',
    'field_dates_note' => 'field_dates_note',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_ao_period' => 'field_ao_period',
    'field_related_people_by_role' => 'field_related_people_by_role',
    'field_ao_itemclass_term' => 'field_ao_itemclass_term',
    'field_field_ao_creditline' => 'field_field_ao_creditline',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_circa' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_period' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_people_by_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_itemclass_term' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_field_ao_creditline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Circa */
  $handler->display->display_options['fields']['field_dates_circa']['id'] = 'field_dates_circa';
  $handler->display->display_options['fields']['field_dates_circa']['table'] = 'field_data_field_dates_circa';
  $handler->display->display_options['fields']['field_dates_circa']['field'] = 'field_dates_circa';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Earliest year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['label'] = 'Latest year';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Period */
  $handler->display->display_options['fields']['field_ao_period']['id'] = 'field_ao_period';
  $handler->display->display_options['fields']['field_ao_period']['table'] = 'field_data_field_ao_period';
  $handler->display->display_options['fields']['field_ao_period']['field'] = 'field_ao_period';
  $handler->display->display_options['fields']['field_ao_period']['delta_offset'] = '0';
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Content: ItemClass Term */
  $handler->display->display_options['fields']['field_ao_itemclass_term']['id'] = 'field_ao_itemclass_term';
  $handler->display->display_options['fields']['field_ao_itemclass_term']['table'] = 'field_data_field_ao_itemclass_term';
  $handler->display->display_options['fields']['field_ao_itemclass_term']['field'] = 'field_ao_itemclass_term';
  $handler->display->display_options['fields']['field_ao_itemclass_term']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Credit Line */
  $handler->display->display_options['fields']['field_field_ao_creditline']['id'] = 'field_field_ao_creditline';
  $handler->display->display_options['fields']['field_field_ao_creditline']['table'] = 'field_data_field_field_ao_creditline';
  $handler->display->display_options['fields']['field_field_ao_creditline']['field'] = 'field_field_ao_creditline';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'art_object' => 'art_object',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Dates note (field_dates_note) */
  $handler->display->display_options['filters']['field_dates_note_value']['id'] = 'field_dates_note_value';
  $handler->display->display_options['filters']['field_dates_note_value']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['filters']['field_dates_note_value']['field'] = 'field_dates_note_value';
  $handler->display->display_options['filters']['field_dates_note_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_dates_note_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dates_note_value']['expose']['operator_id'] = 'field_dates_note_value_op';
  $handler->display->display_options['filters']['field_dates_note_value']['expose']['label'] = 'Dates note';
  $handler->display->display_options['filters']['field_dates_note_value']['expose']['operator'] = 'field_dates_note_value_op';
  $handler->display->display_options['filters']['field_dates_note_value']['expose']['identifier'] = 'field_dates_note_value';
  $handler->display->display_options['filters']['field_dates_note_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-art-objects';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'BAMCollection';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: FM - Posters */
  $handler = $view->new_display('page', 'FM - Posters', 'page_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Posters';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_doc_alternate_titles' => 'field_doc_alternate_titles',
    'field_doc_people_text' => 'field_doc_people_text',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates' => 'field_dates',
    'field_region_country' => 'field_region_country',
    'field_region_other' => 'field_region_other',
    'field_related_people_by_role' => 'field_related_people_by_role',
    'field_doc_internal_notes' => 'field_doc_internal_notes',
    'field_doc_public_notes' => 'field_doc_public_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_alternate_titles' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_people_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_people_by_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_internal_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_public_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_related_documentation_node']['id'] = 'reverse_field_related_documentation_node';
  $handler->display->display_options['relationships']['reverse_field_related_documentation_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_related_documentation_node']['field'] = 'reverse_field_related_documentation_node';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Alternate Titles */
  $handler->display->display_options['fields']['field_doc_alternate_titles']['id'] = 'field_doc_alternate_titles';
  $handler->display->display_options['fields']['field_doc_alternate_titles']['table'] = 'field_data_field_doc_alternate_titles';
  $handler->display->display_options['fields']['field_doc_alternate_titles']['field'] = 'field_doc_alternate_titles';
  /* Field: Content: Foreign Title */
  $handler->display->display_options['fields']['field_doc_foreign_title']['id'] = 'field_doc_foreign_title';
  $handler->display->display_options['fields']['field_doc_foreign_title']['table'] = 'field_data_field_doc_foreign_title';
  $handler->display->display_options['fields']['field_doc_foreign_title']['field'] = 'field_doc_foreign_title';
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Country of Origin */
  $handler->display->display_options['fields']['field_region_country']['id'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['table'] = 'field_data_field_region_country';
  $handler->display->display_options['fields']['field_region_country']['field'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['label'] = 'Country';
  $handler->display->display_options['fields']['field_region_country']['delta_offset'] = '0';
  /* Field: Content: Place of Origin */
  $handler->display->display_options['fields']['field_region_other']['id'] = 'field_region_other';
  $handler->display->display_options['fields']['field_region_other']['table'] = 'field_data_field_region_other';
  $handler->display->display_options['fields']['field_region_other']['field'] = 'field_region_other';
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_doc_internal_notes']['id'] = 'field_doc_internal_notes';
  $handler->display->display_options['fields']['field_doc_internal_notes']['table'] = 'field_data_field_doc_internal_notes';
  $handler->display->display_options['fields']['field_doc_internal_notes']['field'] = 'field_doc_internal_notes';
  /* Field: Content: Public notes */
  $handler->display->display_options['fields']['field_doc_public_notes']['id'] = 'field_doc_public_notes';
  $handler->display->display_options['fields']['field_doc_public_notes']['table'] = 'field_data_field_doc_public_notes';
  $handler->display->display_options['fields']['field_doc_public_notes']['field'] = 'field_doc_public_notes';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'reverse_field_related_documentation_node';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'documentation' => 'documentation',
  );
  /* Filter criterion: Content: Object Type (field_doc_object_type) */
  $handler->display->display_options['filters']['field_doc_object_type_tid']['id'] = 'field_doc_object_type_tid';
  $handler->display->display_options['filters']['field_doc_object_type_tid']['table'] = 'field_data_field_doc_object_type';
  $handler->display->display_options['filters']['field_doc_object_type_tid']['field'] = 'field_doc_object_type_tid';
  $handler->display->display_options['filters']['field_doc_object_type_tid']['value'] = array(
    0 => '20438',
  );
  $handler->display->display_options['filters']['field_doc_object_type_tid']['vocabulary'] = 'object_type';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'PO';
  $handler->display->display_options['path'] = 'test-data/fm-posters';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM Posters';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Audio tapes */
  $handler = $view->new_display('page', 'FM - Audio tapes', 'page_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Audio tapes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_doc_people_text' => 'field_doc_people_text',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates' => 'field_dates',
    'field_related_people_by_role' => 'field_related_people_by_role',
    'field_related_places' => 'field_related_places',
    'field_doc_internal_notes' => 'field_doc_internal_notes',
    'field_doc_public_notes' => 'field_doc_public_notes',
    'field_dates_note' => 'field_dates_note',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_people_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_people_by_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_places' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_internal_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_public_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Content: Related Places */
  $handler->display->display_options['fields']['field_related_places']['id'] = 'field_related_places';
  $handler->display->display_options['fields']['field_related_places']['table'] = 'field_data_field_related_places';
  $handler->display->display_options['fields']['field_related_places']['field'] = 'field_related_places';
  $handler->display->display_options['fields']['field_related_places']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_places']['delta_offset'] = '0';
  /* Field: Content: Internal Notes */
  $handler->display->display_options['fields']['field_doc_internal_notes']['id'] = 'field_doc_internal_notes';
  $handler->display->display_options['fields']['field_doc_internal_notes']['table'] = 'field_data_field_doc_internal_notes';
  $handler->display->display_options['fields']['field_doc_internal_notes']['field'] = 'field_doc_internal_notes';
  /* Field: Content: Public notes */
  $handler->display->display_options['fields']['field_doc_public_notes']['id'] = 'field_doc_public_notes';
  $handler->display->display_options['fields']['field_doc_public_notes']['table'] = 'field_data_field_doc_public_notes';
  $handler->display->display_options['fields']['field_doc_public_notes']['field'] = 'field_doc_public_notes';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'documentation' => 'documentation',
  );
  /* Filter criterion: Content: Object Type (field_doc_object_type) */
  $handler->display->display_options['filters']['field_doc_object_type_tid']['id'] = 'field_doc_object_type_tid';
  $handler->display->display_options['filters']['field_doc_object_type_tid']['table'] = 'field_data_field_doc_object_type';
  $handler->display->display_options['filters']['field_doc_object_type_tid']['field'] = 'field_doc_object_type_tid';
  $handler->display->display_options['filters']['field_doc_object_type_tid']['value'] = array(
    0 => '20442',
  );
  $handler->display->display_options['filters']['field_doc_object_type_tid']['vocabulary'] = 'object_type';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-audio-tapes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM Audio Tapes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CF - Filmlist */
  $handler = $view->new_display('page', 'CF - Filmlist', 'page_5');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CF - Filmlist';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_cf_filmlist_fid' => 'field_orig_key_cf_filmlist_fid',
    'title' => 'title',
    'field_ao_alternate_titles' => 'field_ao_alternate_titles',
    'field_dates' => 'field_dates',
    'field_ao_people_text' => 'field_ao_people_text',
    'field_ao_genre' => 'field_ao_genre',
    'field_region_country' => 'field_region_country',
    'field_ao_languages' => 'field_ao_languages',
    'field_gallery_subjects' => 'field_gallery_subjects',
    'field_dates_year1' => 'field_dates_year1',
    'field_ao_related_documentation' => 'field_ao_related_documentation',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_cf_filmlist_fid' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_alternate_titles' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_people_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_genre' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_languages' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_gallery_subjects' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ao_related_documentation' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Alternate Titles */
  $handler->display->display_options['fields']['field_ao_alternate_titles']['id'] = 'field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['table'] = 'field_data_field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['field'] = 'field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['delta_offset'] = '0';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Genre */
  $handler->display->display_options['fields']['field_ao_genre']['id'] = 'field_ao_genre';
  $handler->display->display_options['fields']['field_ao_genre']['table'] = 'field_data_field_ao_genre';
  $handler->display->display_options['fields']['field_ao_genre']['field'] = 'field_ao_genre';
  $handler->display->display_options['fields']['field_ao_genre']['delta_offset'] = '0';
  /* Field: Content: Country of Origin */
  $handler->display->display_options['fields']['field_region_country']['id'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['table'] = 'field_data_field_region_country';
  $handler->display->display_options['fields']['field_region_country']['field'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['delta_offset'] = '0';
  /* Field: Content: Place of Origin */
  $handler->display->display_options['fields']['field_region_other']['id'] = 'field_region_other';
  $handler->display->display_options['fields']['field_region_other']['table'] = 'field_data_field_region_other';
  $handler->display->display_options['fields']['field_region_other']['field'] = 'field_region_other';
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_languages']['id'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['table'] = 'field_data_field_languages';
  $handler->display->display_options['fields']['field_languages']['field'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['delta_offset'] = '0';
  /* Field: Content: Subjects */
  $handler->display->display_options['fields']['field_subjects']['id'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['fields']['field_subjects']['field'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['delta_offset'] = '0';
  /* Field: Content: Related Documentation */
  $handler->display->display_options['fields']['field_related_documentation']['id'] = 'field_related_documentation';
  $handler->display->display_options['fields']['field_related_documentation']['table'] = 'field_data_field_related_documentation';
  $handler->display->display_options['fields']['field_related_documentation']['field'] = 'field_related_documentation';
  $handler->display->display_options['fields']['field_related_documentation']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_documentation']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'art_object' => 'art_object',
  );
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value']['id'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['id'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator_id'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['label'] = 'Original Primary Key - Cinefiles';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['identifier'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/cf-filmlist';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'CF Filmlist';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CF - Doclist */
  $handler = $view->new_display('page', 'CF - Doclist', 'page_6');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CF - Doclist';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_cf' => 'field_orig_key_cf',
    'title' => 'title',
    'body' => 'body',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_doc_object_type' => 'field_doc_object_type',
    'field_related_people_by_role' => 'field_related_people_by_role',
    'field_languages' => 'field_languages',
    'field_doc_name_subjects' => 'field_doc_name_subjects',
    'field_subjects' => 'field_subjects',
    'field_doc_id_number_type' => 'field_doc_id_number_type',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_object_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_people_by_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_languages' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_name_subjects' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_subjects' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doc_id_number_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Earliest year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['label'] = 'Latest year';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Object Type */
  $handler->display->display_options['fields']['field_doc_object_type']['id'] = 'field_doc_object_type';
  $handler->display->display_options['fields']['field_doc_object_type']['table'] = 'field_data_field_doc_object_type';
  $handler->display->display_options['fields']['field_doc_object_type']['field'] = 'field_doc_object_type';
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_languages']['id'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['table'] = 'field_data_field_languages';
  $handler->display->display_options['fields']['field_languages']['field'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['delta_offset'] = '0';
  /* Field: Content: Name subjects */
  $handler->display->display_options['fields']['field_doc_name_subjects']['id'] = 'field_doc_name_subjects';
  $handler->display->display_options['fields']['field_doc_name_subjects']['table'] = 'field_data_field_doc_name_subjects';
  $handler->display->display_options['fields']['field_doc_name_subjects']['field'] = 'field_doc_name_subjects';
  $handler->display->display_options['fields']['field_doc_name_subjects']['delta_offset'] = '0';
  /* Field: Content: Subjects */
  $handler->display->display_options['fields']['field_subjects']['id'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['table'] = 'field_data_field_subjects';
  $handler->display->display_options['fields']['field_subjects']['field'] = 'field_subjects';
  $handler->display->display_options['fields']['field_subjects']['delta_offset'] = '0';
  /* Field: Content: ID Number Type */
  $handler->display->display_options['fields']['field_doc_id_number_type']['id'] = 'field_doc_id_number_type';
  $handler->display->display_options['fields']['field_doc_id_number_type']['table'] = 'field_data_field_doc_id_number_type';
  $handler->display->display_options['fields']['field_doc_id_number_type']['field'] = 'field_doc_id_number_type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'documentation' => 'documentation',
  );
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value']['id'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['id'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator_id'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['label'] = 'Original Primary Key - Cinefiles';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['identifier'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/cf-doclist';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'CF Doclist';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Artists */
  $handler = $view->new_display('page', 'FM - Artists', 'page_7');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Artists';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_dates' => 'field_dates',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_note' => 'field_dates_note',
    'field_person_nationality' => 'field_person_nationality',
    'field_person_nationality_text' => 'field_person_nationality_text',
    'field_person_birthplace_country' => 'field_person_birthplace_country',
    'field_person_birthplace_text' => 'field_person_birthplace_text',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_nationality' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_nationality_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_birthplace_country' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_birthplace_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['label'] = 'Latest Year';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Earliest Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Nationality */
  $handler->display->display_options['fields']['field_person_nationality']['id'] = 'field_person_nationality';
  $handler->display->display_options['fields']['field_person_nationality']['table'] = 'field_data_field_person_nationality';
  $handler->display->display_options['fields']['field_person_nationality']['field'] = 'field_person_nationality';
  $handler->display->display_options['fields']['field_person_nationality']['delta_offset'] = '0';
  /* Field: Content: Nationality - Text */
  $handler->display->display_options['fields']['field_person_nationality_text']['id'] = 'field_person_nationality_text';
  $handler->display->display_options['fields']['field_person_nationality_text']['table'] = 'field_data_field_person_nationality_text';
  $handler->display->display_options['fields']['field_person_nationality_text']['field'] = 'field_person_nationality_text';
  /* Field: Content: Country of Birth */
  $handler->display->display_options['fields']['field_person_birthplace_country']['id'] = 'field_person_birthplace_country';
  $handler->display->display_options['fields']['field_person_birthplace_country']['table'] = 'field_data_field_person_birthplace_country';
  $handler->display->display_options['fields']['field_person_birthplace_country']['field'] = 'field_person_birthplace_country';
  /* Field: Content: Country of Birth - Text */
  $handler->display->display_options['fields']['field_person_birthplace_text']['id'] = 'field_person_birthplace_text';
  $handler->display->display_options['fields']['field_person_birthplace_text']['table'] = 'field_data_field_person_birthplace_text';
  $handler->display->display_options['fields']['field_person_birthplace_text']['field'] = 'field_person_birthplace_text';
  $handler->display->display_options['fields']['field_person_birthplace_text']['label'] = 'Place of Birth - Text';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'ART';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-artists';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'BAM Artists';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Posters People */
  $handler = $view->new_display('page', 'FM - Posters People', 'page_8');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Posters People';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_date_of_birth' => 'field_date_of_birth',
    'field_date_of_death' => 'field_date_of_death',
    'field_person_place_of_birth' => 'field_person_place_of_birth',
    'field_place_of_birth_other' => 'field_place_of_birth_other',
    'field_person_nationality' => 'field_person_nationality',
    'field_region_other' => 'field_region_other',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_death' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_place_of_birth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_place_of_birth_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_nationality' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'PO';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-posters-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM Posters People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Audio Tapes People */
  $handler = $view->new_display('page', 'FM - Audio Tapes People', 'page_9');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Audio Tapes People';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_date_of_birth' => 'field_date_of_birth',
    'field_date_of_death' => 'field_date_of_death',
    'field_person_place_of_birth' => 'field_person_place_of_birth',
    'field_place_of_birth_other' => 'field_place_of_birth_other',
    'field_person_nationality' => 'field_person_nationality',
    'field_region_other' => 'field_region_other',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_birth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_date_of_death' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_place_of_birth' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_place_of_birth_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_nationality' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_other' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'TP';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-audio-tapes-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM Audio Tapes People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CF Person list */
  $handler = $view->new_display('page', 'CF Person list', 'page_10');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CF Person list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_cf' => 'field_orig_key_cf',
    'title' => 'title',
    'status' => 'status',
    'field_orig_key_fm' => 'field_orig_key_fm',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value']['id'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['value'] = 'person';
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['id'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator_id'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['identifier'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/cf-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'CF Personlist';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: CF Organization list */
  $handler = $view->new_display('page', 'CF Organization list', 'page_11');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'CF Organization list';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_cf' => 'field_orig_key_cf',
    'title' => 'title',
    'status' => 'status',
    'field_orig_key_fm' => 'field_orig_key_fm',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value']['id'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_cf_value']['value'] = 'organization';
  /* Filter criterion: Content: Original Primary Key - Cinefiles (field_orig_key_cf) */
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['id'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['field'] = 'field_orig_key_cf_value';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator_id'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['operator'] = 'field_orig_key_cf_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['identifier'] = 'field_orig_key_cf_value_1';
  $handler->display->display_options['filters']['field_orig_key_cf_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/cf-organizations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'CF Organizationlist';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Film Series */
  $handler = $view->new_display('page', 'FM - Film Series', 'page_12');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Film Series';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_exh_short_title' => 'field_exh_short_title',
    'field_exh_credits' => 'field_exh_credits',
    'field_related_people_by_role' => 'field_related_people_by_role',
    'field_exh_legacy_url' => 'field_exh_legacy_url',
    'field_exh_summary' => 'field_exh_summary',
    'field_event_notes' => 'field_event_notes',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_short_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_credits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_people_by_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_legacy_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_summary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Start Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Short Title */
  $handler->display->display_options['fields']['field_exh_short_title']['id'] = 'field_exh_short_title';
  $handler->display->display_options['fields']['field_exh_short_title']['table'] = 'field_data_field_exh_short_title';
  $handler->display->display_options['fields']['field_exh_short_title']['field'] = 'field_exh_short_title';
  /* Field: Broken/missing handler */
  $handler->display->display_options['fields']['field_exh_credits']['id'] = 'field_exh_credits';
  $handler->display->display_options['fields']['field_exh_credits']['table'] = 'field_data_field_exh_credits';
  $handler->display->display_options['fields']['field_exh_credits']['field'] = 'field_exh_credits';
  $handler->display->display_options['fields']['field_exh_credits']['label'] = 'Credits';
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Content: Legacy URL */
  $handler->display->display_options['fields']['field_exh_legacy_url']['id'] = 'field_exh_legacy_url';
  $handler->display->display_options['fields']['field_exh_legacy_url']['table'] = 'field_data_field_exh_legacy_url';
  $handler->display->display_options['fields']['field_exh_legacy_url']['field'] = 'field_exh_legacy_url';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_exh_summary']['id'] = 'field_exh_summary';
  $handler->display->display_options['fields']['field_exh_summary']['table'] = 'field_data_field_exh_summary';
  $handler->display->display_options['fields']['field_exh_summary']['field'] = 'field_exh_summary';
  /* Field: Content: Notes */
  $handler->display->display_options['fields']['field_event_notes']['id'] = 'field_event_notes';
  $handler->display->display_options['fields']['field_event_notes']['table'] = 'field_data_field_event_notes';
  $handler->display->display_options['fields']['field_event_notes']['field'] = 'field_event_notes';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'FS';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-film-series';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS FilmSeries';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Film Notes */
  $handler = $view->new_display('page', 'FM - Film Notes', 'page_13');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Film Notes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_event_people_text' => 'field_event_people_text',
    'field_event_summary' => 'field_event_summary',
    'field_related_exhibitions' => 'field_related_exhibitions',
    'field_related_places' => 'field_related_places',
    'field_event_notes' => 'field_event_notes',
    'field_event_author_info' => 'field_event_author_info',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_note' => 'field_dates_note',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_people_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_summary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_exhibitions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_places' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_author_info' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_event_summary']['id'] = 'field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['table'] = 'field_data_field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['field'] = 'field_event_summary';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Special Information */
  $handler->display->display_options['fields']['field_event_special_information']['id'] = 'field_event_special_information';
  $handler->display->display_options['fields']['field_event_special_information']['table'] = 'field_data_field_event_special_information';
  $handler->display->display_options['fields']['field_event_special_information']['field'] = 'field_event_special_information';
  /* Field: Content: Related Exhibitions */
  $handler->display->display_options['fields']['field_related_exhibitions']['id'] = 'field_related_exhibitions';
  $handler->display->display_options['fields']['field_related_exhibitions']['table'] = 'field_data_field_related_exhibitions';
  $handler->display->display_options['fields']['field_related_exhibitions']['field'] = 'field_related_exhibitions';
  $handler->display->display_options['fields']['field_related_exhibitions']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_related_exhibitions']['delta_offset'] = '0';
  /* Field: Content: Related Places */
  $handler->display->display_options['fields']['field_related_places']['id'] = 'field_related_places';
  $handler->display->display_options['fields']['field_related_places']['table'] = 'field_data_field_related_places';
  $handler->display->display_options['fields']['field_related_places']['field'] = 'field_related_places';
  $handler->display->display_options['fields']['field_related_places']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_related_places']['delta_offset'] = '0';
  /* Field: Content: Related Art Objects */
  $handler->display->display_options['fields']['field_related_art_objects']['id'] = 'field_related_art_objects';
  $handler->display->display_options['fields']['field_related_art_objects']['table'] = 'field_data_field_related_art_objects';
  $handler->display->display_options['fields']['field_related_art_objects']['field'] = 'field_related_art_objects';
  $handler->display->display_options['fields']['field_related_art_objects']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_related_art_objects']['delta_offset'] = '0';
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'FN';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-film-notes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS FilmNotes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Exhibition */
  $handler = $view->new_display('page', 'FM - Exhibition', 'page_15');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Exhibition';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_exh_credits' => 'field_exh_credits',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_exh_legacy_url' => 'field_exh_legacy_url',
    'field_exh_summary' => 'field_exh_summary',
    'field_related_people_by_role' => 'field_related_people_by_role',
    'field_exh_type' => 'field_exh_type',
    'field_article_note' => 'field_article_note',
    'field_exh_author_info' => 'field_exh_author_info',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_credits' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_legacy_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_summary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_people_by_role' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_article_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_exh_author_info' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Start Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Legacy URL */
  $handler->display->display_options['fields']['field_exh_legacy_url']['id'] = 'field_exh_legacy_url';
  $handler->display->display_options['fields']['field_exh_legacy_url']['table'] = 'field_data_field_exh_legacy_url';
  $handler->display->display_options['fields']['field_exh_legacy_url']['field'] = 'field_exh_legacy_url';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_exh_summary']['id'] = 'field_exh_summary';
  $handler->display->display_options['fields']['field_exh_summary']['table'] = 'field_data_field_exh_summary';
  $handler->display->display_options['fields']['field_exh_summary']['field'] = 'field_exh_summary';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_exh_type']['id'] = 'field_exh_type';
  $handler->display->display_options['fields']['field_exh_type']['table'] = 'field_data_field_exh_type';
  $handler->display->display_options['fields']['field_exh_type']['field'] = 'field_exh_type';
  /* Field: Content: Credit Line */
  $handler->display->display_options['fields']['field_exh_creditline']['id'] = 'field_exh_creditline';
  $handler->display->display_options['fields']['field_exh_creditline']['table'] = 'field_data_field_exh_creditline';
  $handler->display->display_options['fields']['field_exh_creditline']['field'] = 'field_exh_creditline';
  /* Field: Content: Article Note */
  $handler->display->display_options['fields']['field_article_note']['id'] = 'field_article_note';
  $handler->display->display_options['fields']['field_article_note']['table'] = 'field_data_field_article_note';
  $handler->display->display_options['fields']['field_article_note']['field'] = 'field_article_note';
  $handler->display->display_options['fields']['field_article_note']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_article_note']['settings'] = array(
    'view_mode' => 'full',
  );
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'exhibition' => 'exhibition',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'EXH';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-exhibition';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS Exhibition';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Events */
  $handler = $view->new_display('page', 'FM - Events', 'page_14');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Events';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_es_legacy_url' => 'field_es_legacy_url',
    'field_es_type' => 'field_es_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_es_legacy_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_es_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Start Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Legacy URL */
  $handler->display->display_options['fields']['field_es_legacy_url']['id'] = 'field_es_legacy_url';
  $handler->display->display_options['fields']['field_es_legacy_url']['table'] = 'field_data_field_es_legacy_url';
  $handler->display->display_options['fields']['field_es_legacy_url']['field'] = 'field_es_legacy_url';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_es_type']['id'] = 'field_es_type';
  $handler->display->display_options['fields']['field_es_type']['table'] = 'field_data_field_es_type';
  $handler->display->display_options['fields']['field_es_type']['field'] = 'field_es_type';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event_series' => 'event_series',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'EVT';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-events';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS Events';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Event Notes */
  $handler = $view->new_display('page', 'FM - Event Notes', 'page_16');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Event Notes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_related_places' => 'field_related_places',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_event_creditline' => 'field_event_creditline',
    'field_event_legacy_url' => 'field_event_legacy_url',
    'field_event_subtitle' => 'field_event_subtitle',
    'field_event_type' => 'field_event_type',
    'field_related_event_series' => 'field_related_event_series',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_places' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_creditline' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_legacy_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_subtitle' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_event_series' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Related Places */
  $handler->display->display_options['fields']['field_related_places']['id'] = 'field_related_places';
  $handler->display->display_options['fields']['field_related_places']['table'] = 'field_data_field_related_places';
  $handler->display->display_options['fields']['field_related_places']['field'] = 'field_related_places';
  $handler->display->display_options['fields']['field_related_places']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_places']['delta_offset'] = '0';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Creditline */
  $handler->display->display_options['fields']['field_event_creditline']['id'] = 'field_event_creditline';
  $handler->display->display_options['fields']['field_event_creditline']['table'] = 'field_data_field_event_creditline';
  $handler->display->display_options['fields']['field_event_creditline']['field'] = 'field_event_creditline';
  /* Field: Content: Legacy URL */
  $handler->display->display_options['fields']['field_event_legacy_url']['id'] = 'field_event_legacy_url';
  $handler->display->display_options['fields']['field_event_legacy_url']['table'] = 'field_data_field_event_legacy_url';
  $handler->display->display_options['fields']['field_event_legacy_url']['field'] = 'field_event_legacy_url';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_event_subtitle']['id'] = 'field_event_subtitle';
  $handler->display->display_options['fields']['field_event_subtitle']['table'] = 'field_data_field_event_subtitle';
  $handler->display->display_options['fields']['field_event_subtitle']['field'] = 'field_event_subtitle';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* Field: Content: Related Event Series */
  $handler->display->display_options['fields']['field_related_event_series']['id'] = 'field_related_event_series';
  $handler->display->display_options['fields']['field_related_event_series']['table'] = 'field_data_field_related_event_series';
  $handler->display->display_options['fields']['field_related_event_series']['field'] = 'field_related_event_series';
  $handler->display->display_options['fields']['field_related_event_series']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_event_series']['delta_offset'] = '0';
  /* Field: Content: Related Exhibitions */
  $handler->display->display_options['fields']['field_related_exhibitions']['id'] = 'field_related_exhibitions';
  $handler->display->display_options['fields']['field_related_exhibitions']['table'] = 'field_data_field_related_exhibitions';
  $handler->display->display_options['fields']['field_related_exhibitions']['field'] = 'field_related_exhibitions';
  $handler->display->display_options['fields']['field_related_exhibitions']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_exhibitions']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'EN';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-event-notes';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS EventNotes';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Text */
  $handler = $view->new_display('page', 'FM - Text', 'page_17');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Text';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_pr_legacy_url' => 'field_pr_legacy_url',
    'field_pr_subtitle' => 'field_pr_subtitle',
    'field_pr_contact' => 'field_pr_contact',
    'field_pr_type' => 'field_pr_type',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pr_legacy_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pr_subtitle' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pr_contact' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pr_type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Legacy URL */
  $handler->display->display_options['fields']['field_pr_legacy_url']['id'] = 'field_pr_legacy_url';
  $handler->display->display_options['fields']['field_pr_legacy_url']['table'] = 'field_data_field_pr_legacy_url';
  $handler->display->display_options['fields']['field_pr_legacy_url']['field'] = 'field_pr_legacy_url';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_pr_subtitle']['id'] = 'field_pr_subtitle';
  $handler->display->display_options['fields']['field_pr_subtitle']['table'] = 'field_data_field_pr_subtitle';
  $handler->display->display_options['fields']['field_pr_subtitle']['field'] = 'field_pr_subtitle';
  /* Field: Content: Contact */
  $handler->display->display_options['fields']['field_pr_contact']['id'] = 'field_pr_contact';
  $handler->display->display_options['fields']['field_pr_contact']['table'] = 'field_data_field_pr_contact';
  $handler->display->display_options['fields']['field_pr_contact']['field'] = 'field_pr_contact';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_pr_type']['id'] = 'field_pr_type';
  $handler->display->display_options['fields']['field_pr_type']['table'] = 'field_data_field_pr_type';
  $handler->display->display_options['fields']['field_pr_type']['field'] = 'field_pr_type';
  $handler->display->display_options['fields']['field_pr_type']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'press_release' => 'press_release',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-text';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS Text';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Exhibition (L@TE) */
  $handler = $view->new_display('page', 'FM - Exhibition (L@TE)', 'page_18');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Exhibition (L@TE)';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_year2' => 'field_dates_year2',
    'field_dates_note' => 'field_dates_note',
    'field_event_people_text' => 'field_event_people_text',
    'field_event_subtitle' => 'field_event_subtitle',
    'field_event_summary' => 'field_event_summary',
    'field_event_author_info' => 'field_event_author_info',
    'field_related_event_series' => 'field_related_event_series',
    'field_event_type' => 'field_event_type',
    'field_event_legacy_url' => 'field_event_legacy_url',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year2' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_people_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_subtitle' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_summary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_author_info' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_event_series' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_legacy_url' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Start Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: End Year */
  $handler->display->display_options['fields']['field_dates_year2']['id'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['table'] = 'field_data_field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['field'] = 'field_dates_year2';
  $handler->display->display_options['fields']['field_dates_year2']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year2']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: People Text */
  $handler->display->display_options['fields']['field_event_people_text']['id'] = 'field_event_people_text';
  $handler->display->display_options['fields']['field_event_people_text']['table'] = 'field_data_field_event_people_text';
  $handler->display->display_options['fields']['field_event_people_text']['field'] = 'field_event_people_text';
  /* Field: Content: Subtitle */
  $handler->display->display_options['fields']['field_event_subtitle']['id'] = 'field_event_subtitle';
  $handler->display->display_options['fields']['field_event_subtitle']['table'] = 'field_data_field_event_subtitle';
  $handler->display->display_options['fields']['field_event_subtitle']['field'] = 'field_event_subtitle';
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_event_summary']['id'] = 'field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['table'] = 'field_data_field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['field'] = 'field_event_summary';
  /* Field: Content: Author info */
  $handler->display->display_options['fields']['field_event_author_info']['id'] = 'field_event_author_info';
  $handler->display->display_options['fields']['field_event_author_info']['table'] = 'field_data_field_event_author_info';
  $handler->display->display_options['fields']['field_event_author_info']['field'] = 'field_event_author_info';
  /* Field: Content: Related Event Series */
  $handler->display->display_options['fields']['field_related_event_series']['id'] = 'field_related_event_series';
  $handler->display->display_options['fields']['field_related_event_series']['table'] = 'field_data_field_related_event_series';
  $handler->display->display_options['fields']['field_related_event_series']['field'] = 'field_related_event_series';
  $handler->display->display_options['fields']['field_related_event_series']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_related_event_series']['delta_offset'] = '0';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_event_type']['id'] = 'field_event_type';
  $handler->display->display_options['fields']['field_event_type']['table'] = 'field_data_field_event_type';
  $handler->display->display_options['fields']['field_event_type']['field'] = 'field_event_type';
  /* Field: Content: Legacy URL */
  $handler->display->display_options['fields']['field_event_legacy_url']['id'] = 'field_event_legacy_url';
  $handler->display->display_options['fields']['field_event_legacy_url']['table'] = 'field_data_field_event_legacy_url';
  $handler->display->display_options['fields']['field_event_legacy_url']['field'] = 'field_event_legacy_url';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'EXH';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-exhibition-late';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS Exhibition (L@TE)';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Film Notes */
  $handler = $view->new_display('page', 'FM - Film Notes', 'page_19');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Film Notes - Films';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'body' => 'body',
    'field_event_people_text' => 'field_event_people_text',
    'field_event_summary' => 'field_event_summary',
    'field_related_exhibitions' => 'field_related_exhibitions',
    'field_related_places' => 'field_related_places',
    'field_event_notes' => 'field_event_notes',
    'field_event_author_info' => 'field_event_author_info',
    'field_dates' => 'field_dates',
    'field_dates_year1' => 'field_dates_year1',
    'field_dates_note' => 'field_dates_note',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_people_text' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_summary' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_exhibitions' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_related_places' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_notes' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_author_info' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_year1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dates_note' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Dates */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  /* Field: Content: Start year */
  $handler->display->display_options['fields']['field_dates_year1']['id'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['table'] = 'field_data_field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['field'] = 'field_dates_year1';
  $handler->display->display_options['fields']['field_dates_year1']['label'] = 'Year';
  $handler->display->display_options['fields']['field_dates_year1']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_dates_year1']['delta_offset'] = '0';
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  /* Field: Content: Country of Origin */
  $handler->display->display_options['fields']['field_region_country']['id'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['table'] = 'field_data_field_region_country';
  $handler->display->display_options['fields']['field_region_country']['field'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['delta_offset'] = '0';
  /* Field: Content: Place of Origin */
  $handler->display->display_options['fields']['field_region_other']['id'] = 'field_region_other';
  $handler->display->display_options['fields']['field_region_other']['table'] = 'field_data_field_region_other';
  $handler->display->display_options['fields']['field_region_other']['field'] = 'field_region_other';
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'art_object' => 'art_object',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['value'] = 'FN';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['group'] = 1;
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['group'] = 1;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator_id'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['operator'] = 'field_orig_key_fm_value_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['identifier'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-film-notes-films';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS FilmNotes - Films';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - FilmSeries People */
  $handler = $view->new_display('page', 'FM - FilmSeries People', 'page_20');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - FilmSeries people';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_person_job_title' => 'field_person_job_title',
    'status' => 'status',
    'field_orig_key_cf' => 'field_orig_key_cf',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_job_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_person_job_title']['id'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['table'] = 'field_data_field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['field'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'FS';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-film-series-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS FilmSeries People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - FilmNotes People */
  $handler = $view->new_display('page', 'FM - FilmNotes People', 'page_21');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - FilmNotes people';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_person_job_title' => 'field_person_job_title',
    'status' => 'status',
    'field_orig_key_cf' => 'field_orig_key_cf',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_job_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_person_job_title']['id'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['table'] = 'field_data_field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['field'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'FN';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-film-notes-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS FilmNotes People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - Exhibition People */
  $handler = $view->new_display('page', 'FM - Exhibition People', 'page_22');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - Exhibition people';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_person_job_title' => 'field_person_job_title',
    'status' => 'status',
    'field_orig_key_cf' => 'field_orig_key_cf',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_job_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_person_job_title']['id'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['table'] = 'field_data_field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['field'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'EXH';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-exhibition-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS Exhibition People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: FM - ArtNotes People */
  $handler = $view->new_display('page', 'FM - ArtNotes People', 'page_23');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'FM - ArtNotes people';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_orig_key_fm' => 'field_orig_key_fm',
    'title' => 'title',
    'field_person_job_title' => 'field_person_job_title',
    'status' => 'status',
    'field_orig_key_cf' => 'field_orig_key_cf',
  );
  $handler->display->display_options['style_options']['default'] = 'field_orig_key_fm';
  $handler->display->display_options['style_options']['info'] = array(
    'field_orig_key_fm' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_person_job_title' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_orig_key_cf' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field: Original Primary Key - FileMaker */
  $handler->display->display_options['fields']['field_orig_key_fm']['id'] = 'field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['fields']['field_orig_key_fm']['field'] = 'field_orig_key_fm';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_person_job_title']['id'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['table'] = 'field_data_field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['field'] = 'field_person_job_title';
  $handler->display->display_options['fields']['field_person_job_title']['delta_offset'] = '0';
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Original Primary Key - Cinefiles */
  $handler->display->display_options['fields']['field_orig_key_cf']['id'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['table'] = 'field_data_field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['field'] = 'field_orig_key_cf';
  $handler->display->display_options['fields']['field_orig_key_cf']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'person' => 'person',
  );
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value']['id'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value']['value'] = 'ART';
  /* Filter criterion: Field: Original Primary Key - FileMaker (field_orig_key_fm) */
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['id'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['table'] = 'field_data_field_orig_key_fm';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['field'] = 'field_orig_key_fm_value';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['operator'] = 'contains';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator_id'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['label'] = 'Original Primary Key';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['operator'] = 'field_orig_key_fm_value_1_op';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['identifier'] = 'field_orig_key_fm_value_1';
  $handler->display->display_options['filters']['field_orig_key_fm_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['path'] = 'test-data/fm-art-notes-people';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'FM CMS ArtNotes People';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Oskicat Records */
  $handler = $view->new_display('page', 'Oskicat Records', 'page_24');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Oskicat Records';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_oskicat_author' => 'field_oskicat_author',
    'field_region_country' => 'field_region_country',
    'field_oskicat_date' => 'field_oskicat_date',
    'field_oskicat_item_type' => 'field_oskicat_item_type',
    'field_languages' => 'field_languages',
    'field_oskicat_publisher' => 'field_oskicat_publisher',
    'field_oskicat_subject_headings' => 'field_oskicat_subject_headings',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oskicat_author' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_region_country' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oskicat_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oskicat_item_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_languages' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oskicat_publisher' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_oskicat_subject_headings' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author */
  $handler->display->display_options['fields']['field_oskicat_author']['id'] = 'field_oskicat_author';
  $handler->display->display_options['fields']['field_oskicat_author']['table'] = 'field_data_field_oskicat_author';
  $handler->display->display_options['fields']['field_oskicat_author']['field'] = 'field_oskicat_author';
  $handler->display->display_options['fields']['field_oskicat_author']['delta_offset'] = '0';
  /* Field: Content: Country of Origin */
  $handler->display->display_options['fields']['field_region_country']['id'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['table'] = 'field_data_field_region_country';
  $handler->display->display_options['fields']['field_region_country']['field'] = 'field_region_country';
  $handler->display->display_options['fields']['field_region_country']['delta_offset'] = '0';
  /* Field: Content: Date text */
  $handler->display->display_options['fields']['field_oskicat_date']['id'] = 'field_oskicat_date';
  $handler->display->display_options['fields']['field_oskicat_date']['table'] = 'field_data_field_oskicat_date';
  $handler->display->display_options['fields']['field_oskicat_date']['field'] = 'field_oskicat_date';
  /* Field: Content: Item Type */
  $handler->display->display_options['fields']['field_oskicat_item_type']['id'] = 'field_oskicat_item_type';
  $handler->display->display_options['fields']['field_oskicat_item_type']['table'] = 'field_data_field_oskicat_item_type';
  $handler->display->display_options['fields']['field_oskicat_item_type']['field'] = 'field_oskicat_item_type';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_languages']['id'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['table'] = 'field_data_field_languages';
  $handler->display->display_options['fields']['field_languages']['field'] = 'field_languages';
  $handler->display->display_options['fields']['field_languages']['delta_offset'] = '0';
  /* Field: Content: Publisher */
  $handler->display->display_options['fields']['field_oskicat_publisher']['id'] = 'field_oskicat_publisher';
  $handler->display->display_options['fields']['field_oskicat_publisher']['table'] = 'field_data_field_oskicat_publisher';
  $handler->display->display_options['fields']['field_oskicat_publisher']['field'] = 'field_oskicat_publisher';
  $handler->display->display_options['fields']['field_oskicat_publisher']['delta_offset'] = '0';
  /* Field: Content: Subject headings */
  $handler->display->display_options['fields']['field_oskicat_subject_headings']['id'] = 'field_oskicat_subject_headings';
  $handler->display->display_options['fields']['field_oskicat_subject_headings']['table'] = 'field_data_field_oskicat_subject_headings';
  $handler->display->display_options['fields']['field_oskicat_subject_headings']['field'] = 'field_oskicat_subject_headings';
  $handler->display->display_options['fields']['field_oskicat_subject_headings']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'oskicat_record' => 'oskicat_record',
  );
  $handler->display->display_options['path'] = 'test-data/oskicat';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Oskicat';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['test_data'] = $view;

  return $export;
}
