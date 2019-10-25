<?php
/**
 * @file
 * bam_documentation_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bam_documentation_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'access_restriction_blurb';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Access Restriction Blurb';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'This document can only be accessed by BAM/PFA staff. You may request a copy via email at <a href="mailto:cinefiles@berkeley.edu">cinefiles@berkeley.edu</a>.';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
    'documentation' => 'documentation',
  );
  /* Filter criterion: Content: Access code (field_doc_access_code) */
  $handler->display->display_options['filters']['field_doc_access_code_value']['id'] = 'field_doc_access_code_value';
  $handler->display->display_options['filters']['field_doc_access_code_value']['table'] = 'field_data_field_doc_access_code';
  $handler->display->display_options['filters']['field_doc_access_code_value']['field'] = 'field_doc_access_code_value';
  $handler->display->display_options['filters']['field_doc_access_code_value']['value'] = array(
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['access_restriction_blurb'] = $view;

  $view = new view();
  $view->name = 'doc_download_media';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Doc Download Media';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a class="button medium" style="width:100%;" href="#" data-reveal-id="docModal">
VIEW</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Field: Content: Attached Files */
  $handler->display->display_options['fields']['field_doc_attached_files']['id'] = 'field_doc_attached_files';
  $handler->display->display_options['fields']['field_doc_attached_files']['table'] = 'field_data_field_doc_attached_files';
  $handler->display->display_options['fields']['field_doc_attached_files']['field'] = 'field_doc_attached_files';
  $handler->display->display_options['fields']['field_doc_attached_files']['label'] = '';
  $handler->display->display_options['fields']['field_doc_attached_files']['alter']['text'] = '<div class="button large">DOWNLOAD</div>';
  $handler->display->display_options['fields']['field_doc_attached_files']['element_class'] = 'button medium';
  $handler->display->display_options['fields']['field_doc_attached_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_attached_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_attached_files']['type'] = 'file_download_link';
  $handler->display->display_options['fields']['field_doc_attached_files']['settings'] = array(
    'text' => 'DOWNLOAD',
  );
  $handler->display->display_options['fields']['field_doc_attached_files']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
    'documentation' => 'documentation',
  );
  /* Filter criterion: Content: Access code (field_doc_access_code) */
  $handler->display->display_options['filters']['field_doc_access_code_value']['id'] = 'field_doc_access_code_value';
  $handler->display->display_options['filters']['field_doc_access_code_value']['table'] = 'field_data_field_doc_access_code';
  $handler->display->display_options['filters']['field_doc_access_code_value']['field'] = 'field_doc_access_code_value';
  $handler->display->display_options['filters']['field_doc_access_code_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_doc_access_code_value']['value'] = array(
    0 => '0',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['doc_download_media'] = $view;

  $view = new view();
  $view->name = 'document_author';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Document Author';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['id'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['field'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['delta'] = '-1';
  /* Field: Field collection item: Person */
  $handler->display->display_options['fields']['field_related_people_person']['id'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['table'] = 'field_data_field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['field'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_person']['label'] = 'AUTHOR';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Role */
  $handler->display->display_options['fields']['field_related_people_role']['id'] = 'field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['field'] = 'field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_role']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_people_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_role']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
    'documentation' => 'documentation',
  );
  /* Filter criterion: Field collection item: Role (field_related_people_role) */
  $handler->display->display_options['filters']['field_related_people_role_tid']['id'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['filters']['field_related_people_role_tid']['field'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['filters']['field_related_people_role_tid']['value'] = array(
    0 => '20702',
  );
  $handler->display->display_options['filters']['field_related_people_role_tid']['vocabulary'] = 'roles';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');

  /* Display: Block 2 */
  $handler = $view->new_display('block', 'Block 2', 'block_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Field collection item: Person */
  $handler->display->display_options['fields']['field_related_people_person']['id'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['table'] = 'field_data_field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['field'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_person']['label'] = 'SOURCE';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_person']['settings'] = array(
    'link' => 0,
  );
  /* Field: Field collection item: Role */
  $handler->display->display_options['fields']['field_related_people_role']['id'] = 'field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['field'] = 'field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_role']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_role']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_related_people_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_role']['delta_offset'] = '0';
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
  /* Filter criterion: Field collection item: Role (field_related_people_role) */
  $handler->display->display_options['filters']['field_related_people_role_tid']['id'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['filters']['field_related_people_role_tid']['field'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['filters']['field_related_people_role_tid']['value'] = array(
    0 => '20701',
  );
  $handler->display->display_options['filters']['field_related_people_role_tid']['vocabulary'] = 'roles';
  $handler->display->display_options['block_description'] = 'Document Source';
  $export['document_author'] = $view;

  $view = new view();
  $view->name = 'document_modal';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Document Modal';
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
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Attached Files */
  $handler->display->display_options['fields']['field_doc_attached_files']['id'] = 'field_doc_attached_files';
  $handler->display->display_options['fields']['field_doc_attached_files']['table'] = 'field_data_field_doc_attached_files';
  $handler->display->display_options['fields']['field_doc_attached_files']['field'] = 'field_doc_attached_files';
  $handler->display->display_options['fields']['field_doc_attached_files']['label'] = '';
  $handler->display->display_options['fields']['field_doc_attached_files']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_doc_attached_files']['alter']['text'] = '<li>
<img src="[field_doc_attached_files]" />
</li>';
  $handler->display->display_options['fields']['field_doc_attached_files']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_doc_attached_files']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_doc_attached_files']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_doc_attached_files']['settings'] = array(
    'file_view_mode' => 'default',
  );
  $handler->display->display_options['fields']['field_doc_attached_files']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
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
    'documentation' => 'documentation',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['document_modal'] = $view;

  return $export;
}
