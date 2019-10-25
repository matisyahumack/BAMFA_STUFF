<?php
/**
 * @file
 * bam_art_object_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bam_art_object_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'ao_film_director';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AO Film Director';
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
  /* Relationship: Field collection item: Entity with the Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['id'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['field'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['relationship'] = 'field_related_people_by_role_value';
  /* Relationship: Field collection item: Role (field_related_people_role) */
  $handler->display->display_options['relationships']['field_related_people_role_tid']['id'] = 'field_related_people_role_tid';
  $handler->display->display_options['relationships']['field_related_people_role_tid']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['relationships']['field_related_people_role_tid']['field'] = 'field_related_people_role_tid';
  $handler->display->display_options['relationships']['field_related_people_role_tid']['relationship'] = 'field_related_people_by_role_value';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_related_people_person_target_id']['id'] = 'field_related_people_person_target_id';
  $handler->display->display_options['relationships']['field_related_people_person_target_id']['table'] = 'field_data_field_related_people_person';
  $handler->display->display_options['relationships']['field_related_people_person_target_id']['field'] = 'field_related_people_person_target_id';
  $handler->display->display_options['relationships']['field_related_people_person_target_id']['relationship'] = 'field_related_people_by_role_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Person */
  $handler->display->display_options['fields']['field_related_people_person']['id'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['table'] = 'field_data_field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['field'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_person']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_person']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Nationality - Text */
  $handler->display->display_options['fields']['field_person_nationality_text']['id'] = 'field_person_nationality_text';
  $handler->display->display_options['fields']['field_person_nationality_text']['table'] = 'field_data_field_person_nationality_text';
  $handler->display->display_options['fields']['field_person_nationality_text']['field'] = 'field_person_nationality_text';
  $handler->display->display_options['fields']['field_person_nationality_text']['relationship'] = 'field_related_people_person_target_id';
  $handler->display->display_options['fields']['field_person_nationality_text']['label'] = '';
  $handler->display->display_options['fields']['field_person_nationality_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_nationality_text']['element_label_colon'] = FALSE;
  /* Field: Content: Country of Birth - Text */
  $handler->display->display_options['fields']['field_person_birthplace_text']['id'] = 'field_person_birthplace_text';
  $handler->display->display_options['fields']['field_person_birthplace_text']['table'] = 'field_data_field_person_birthplace_text';
  $handler->display->display_options['fields']['field_person_birthplace_text']['field'] = 'field_person_birthplace_text';
  $handler->display->display_options['fields']['field_person_birthplace_text']['relationship'] = 'field_related_people_person_target_id';
  $handler->display->display_options['fields']['field_person_birthplace_text']['label'] = '';
  $handler->display->display_options['fields']['field_person_birthplace_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_person_birthplace_text']['element_label_colon'] = FALSE;
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['relationship'] = 'field_related_people_person_target_id';
  $handler->display->display_options['fields']['field_dates_note']['label'] = '';
  $handler->display->display_options['fields']['field_dates_note']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_dates_note']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="forza">[field_person_nationality_text], born [field_person_birthplace_text] [field_dates_note]</div>';
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
    'art_object' => 'art_object',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['relationship'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['name']['value'] = 'director';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['ao_film_director'] = $view;

  $view = new view();
  $view->name = 'ao_film_people';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AO Film People';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['id'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['field'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['id'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['field'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['relationship'] = 'field_related_people_by_role_value';
  /* Relationship: Field collection item: Entity with the Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_node_1']['id'] = 'field_related_people_by_role_node_1';
  $handler->display->display_options['relationships']['field_related_people_by_role_node_1']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_related_people_by_role_node_1']['field'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node_1']['relationship'] = 'field_related_people_by_role_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_by_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'film_object',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '1';
  $handler->display->display_options['fields']['field_related_people_by_role']['separator'] = '';
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
    'art_object' => 'art_object',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['ao_film_people'] = $view;

  $view = new view();
  $view->name = 'ao_film_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AO Film Stats';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'font-14 grey-text';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Languages */
  $handler->display->display_options['fields']['field_ao_languages']['id'] = 'field_ao_languages';
  $handler->display->display_options['fields']['field_ao_languages']['table'] = 'field_data_field_ao_languages';
  $handler->display->display_options['fields']['field_ao_languages']['field'] = 'field_ao_languages';
  $handler->display->display_options['fields']['field_ao_languages']['label'] = '';
  $handler->display->display_options['fields']['field_ao_languages']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_languages']['alter']['text'] = '<strong class="font-14">LANGUAGE</strong><br/>
[field_ao_languages] [field_ao_subtitles]<br/>';
  $handler->display->display_options['fields']['field_ao_languages']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_languages']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ao_languages']['delta_offset'] = '0';
  /* Field: Content: Subtitles */
  $handler->display->display_options['fields']['field_ao_subtitles']['id'] = 'field_ao_subtitles';
  $handler->display->display_options['fields']['field_ao_subtitles']['table'] = 'field_data_field_ao_subtitles';
  $handler->display->display_options['fields']['field_ao_subtitles']['field'] = 'field_ao_subtitles';
  $handler->display->display_options['fields']['field_ao_subtitles']['label'] = '';
  $handler->display->display_options['fields']['field_ao_subtitles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_subtitles']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_subtitles']['alter']['text'] = 'with [field_ao_subtitles] subtitles';
  $handler->display->display_options['fields']['field_ao_subtitles']['element_label_colon'] = FALSE;
  /* Field: Content: Color Info */
  $handler->display->display_options['fields']['field_ao_color']['id'] = 'field_ao_color';
  $handler->display->display_options['fields']['field_ao_color']['table'] = 'field_data_field_ao_color';
  $handler->display->display_options['fields']['field_ao_color']['field'] = 'field_ao_color';
  $handler->display->display_options['fields']['field_ao_color']['label'] = '';
  $handler->display->display_options['fields']['field_ao_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_color']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_color']['alter']['text'] = '[field_ao_color],';
  $handler->display->display_options['fields']['field_ao_color']['element_label_colon'] = FALSE;
  /* Field: Content: Silent film */
  $handler->display->display_options['fields']['field_ao_silent']['id'] = 'field_ao_silent';
  $handler->display->display_options['fields']['field_ao_silent']['table'] = 'field_data_field_ao_silent';
  $handler->display->display_options['fields']['field_ao_silent']['field'] = 'field_ao_silent';
  $handler->display->display_options['fields']['field_ao_silent']['label'] = '';
  $handler->display->display_options['fields']['field_ao_silent']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_silent']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_silent']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_ao_silent']['hide_alter_empty'] = FALSE;
  /* Field: Content: Running time */
  $handler->display->display_options['fields']['field_ao_running_time']['id'] = 'field_ao_running_time';
  $handler->display->display_options['fields']['field_ao_running_time']['table'] = 'field_data_field_ao_running_time';
  $handler->display->display_options['fields']['field_ao_running_time']['field'] = 'field_ao_running_time';
  $handler->display->display_options['fields']['field_ao_running_time']['label'] = '';
  $handler->display->display_options['fields']['field_ao_running_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_running_time']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_running_time']['alter']['text'] = '[field_ao_running_time],';
  $handler->display->display_options['fields']['field_ao_running_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_running_time']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_ao_format']['id'] = 'field_ao_format';
  $handler->display->display_options['fields']['field_ao_format']['table'] = 'field_data_field_ao_format';
  $handler->display->display_options['fields']['field_ao_format']['field'] = 'field_ao_format';
  $handler->display->display_options['fields']['field_ao_format']['label'] = '';
  $handler->display->display_options['fields']['field_ao_format']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_format']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_format']['alter']['text'] = '[field_ao_format],';
  $handler->display->display_options['fields']['field_ao_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_format']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_ao_format']['delta_offset'] = '0';
  /* Field: Content: Frames per Second */
  $handler->display->display_options['fields']['field_ao_frames_per_second']['id'] = 'field_ao_frames_per_second';
  $handler->display->display_options['fields']['field_ao_frames_per_second']['table'] = 'field_data_field_ao_frames_per_second';
  $handler->display->display_options['fields']['field_ao_frames_per_second']['field'] = 'field_ao_frames_per_second';
  $handler->display->display_options['fields']['field_ao_frames_per_second']['label'] = '';
  $handler->display->display_options['fields']['field_ao_frames_per_second']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_frames_per_second']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_frames_per_second']['alter']['text'] = '[field_ao_frames_per_second] fps,';
  $handler->display->display_options['fields']['field_ao_frames_per_second']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_frames_per_second']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<strong class="font-14 forza">LANGUAGE</strong><br/>
[field_ao_languages] [field_ao_subtitles]<br/><br/>
<strong class="font-14 forza">PRINT INFO</strong><br/>
[field_ao_color] [field_ao_running_time] [field_ao_format] [field_ao_frames_per_second]';
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
    'art_object' => 'art_object',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['ao_film_stats'] = $view;

  $view = new view();
  $view->name = 'ao_more_curator_notes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AO More Curator Notes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'views_accordion';
  $handler->display->display_options['style_options']['collapsible'] = 1;
  $handler->display->display_options['style_options']['row-start-open'] = 'none';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Curator Notes (field_field_ao_curator_notes) */
  $handler->display->display_options['relationships']['field_field_ao_curator_notes_value']['id'] = 'field_field_ao_curator_notes_value';
  $handler->display->display_options['relationships']['field_field_ao_curator_notes_value']['table'] = 'field_data_field_field_ao_curator_notes';
  $handler->display->display_options['relationships']['field_field_ao_curator_notes_value']['field'] = 'field_field_ao_curator_notes_value';
  $handler->display->display_options['relationships']['field_field_ao_curator_notes_value']['delta'] = '-1';
  /* Relationship: Field collection item: Authors/Roles (field_ao_curator_authors_roles) */
  $handler->display->display_options['relationships']['field_ao_curator_authors_roles_value']['id'] = 'field_ao_curator_authors_roles_value';
  $handler->display->display_options['relationships']['field_ao_curator_authors_roles_value']['table'] = 'field_data_field_ao_curator_authors_roles';
  $handler->display->display_options['relationships']['field_ao_curator_authors_roles_value']['field'] = 'field_ao_curator_authors_roles_value';
  $handler->display->display_options['relationships']['field_ao_curator_authors_roles_value']['relationship'] = 'field_field_ao_curator_notes_value';
  $handler->display->display_options['relationships']['field_ao_curator_authors_roles_value']['delta'] = '-1';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_ao_film_series_exhibition_target_id']['id'] = 'field_ao_film_series_exhibition_target_id';
  $handler->display->display_options['relationships']['field_ao_film_series_exhibition_target_id']['table'] = 'field_data_field_ao_film_series_exhibition';
  $handler->display->display_options['relationships']['field_ao_film_series_exhibition_target_id']['field'] = 'field_ao_film_series_exhibition_target_id';
  $handler->display->display_options['relationships']['field_ao_film_series_exhibition_target_id']['relationship'] = 'field_field_ao_curator_notes_value';
  /* Relationship: Field collection item: Entity with the Event Date &amp; Time (field_multiple_show_times) */
  $handler->display->display_options['relationships']['field_multiple_show_times_node']['id'] = 'field_multiple_show_times_node';
  $handler->display->display_options['relationships']['field_multiple_show_times_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_multiple_show_times_node']['field'] = 'field_multiple_show_times_node';
  $handler->display->display_options['relationships']['field_multiple_show_times_node']['relationship'] = 'field_field_ao_curator_notes_value';
  /* Field: Field collection item: Film Series/Exhibition Title */
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['id'] = 'field_ao_film_series_exhibition';
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['table'] = 'field_data_field_ao_film_series_exhibition';
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['field'] = 'field_ao_film_series_exhibition';
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['relationship'] = 'field_field_ao_curator_notes_value';
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['label'] = '';
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['alter']['text'] = '[field_ao_film_series_exhibition]';
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_film_series_exhibition']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Event Date & Time */
  $handler->display->display_options['fields']['field_multiple_show_times']['id'] = 'field_multiple_show_times';
  $handler->display->display_options['fields']['field_multiple_show_times']['table'] = 'field_data_field_multiple_show_times';
  $handler->display->display_options['fields']['field_multiple_show_times']['field'] = 'field_multiple_show_times';
  $handler->display->display_options['fields']['field_multiple_show_times']['relationship'] = 'field_ao_film_series_exhibition_target_id';
  $handler->display->display_options['fields']['field_multiple_show_times']['label'] = '';
  $handler->display->display_options['fields']['field_multiple_show_times']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_multiple_show_times']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'ao_curator_notes',
  );
  $handler->display->display_options['fields']['field_multiple_show_times']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_multiple_show_times']['delta_offset'] = '0';
  /* Field: Field collection item: Description */
  $handler->display->display_options['fields']['field_ao_curator_description']['id'] = 'field_ao_curator_description';
  $handler->display->display_options['fields']['field_ao_curator_description']['table'] = 'field_data_field_ao_curator_description';
  $handler->display->display_options['fields']['field_ao_curator_description']['field'] = 'field_ao_curator_description';
  $handler->display->display_options['fields']['field_ao_curator_description']['relationship'] = 'field_field_ao_curator_notes_value';
  $handler->display->display_options['fields']['field_ao_curator_description']['label'] = '';
  $handler->display->display_options['fields']['field_ao_curator_description']['element_label_colon'] = FALSE;
  /* Field: Field collection item: Authors/Roles */
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['id'] = 'field_ao_curator_authors_roles';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['table'] = 'field_data_field_ao_curator_authors_roles';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['field'] = 'field_ao_curator_authors_roles';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['relationship'] = 'field_field_ao_curator_notes_value';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['label'] = '';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['element_class'] = 'font-14';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ao_curator_authors_roles']['separator'] = '';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['ao_more_curator_notes'] = $view;

  $view = new view();
  $view->name = 'art_object_stats';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Art Object Stats';
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
  /* Field: Content: Dates note */
  $handler->display->display_options['fields']['field_dates_note']['id'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['table'] = 'field_data_field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['field'] = 'field_dates_note';
  $handler->display->display_options['fields']['field_dates_note']['label'] = '';
  $handler->display->display_options['fields']['field_dates_note']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_dates_note']['alter']['text'] = 'c. [field_dates_note]';
  $handler->display->display_options['fields']['field_dates_note']['element_label_colon'] = FALSE;
  /* Field: Content: Materials */
  $handler->display->display_options['fields']['field_ao_materials']['id'] = 'field_ao_materials';
  $handler->display->display_options['fields']['field_ao_materials']['table'] = 'field_data_field_ao_materials';
  $handler->display->display_options['fields']['field_ao_materials']['field'] = 'field_ao_materials';
  $handler->display->display_options['fields']['field_ao_materials']['label'] = '';
  $handler->display->display_options['fields']['field_ao_materials']['element_label_colon'] = FALSE;
  /* Field: Content: Edition */
  $handler->display->display_options['fields']['field_ao_edition']['id'] = 'field_ao_edition';
  $handler->display->display_options['fields']['field_ao_edition']['table'] = 'field_data_field_ao_edition';
  $handler->display->display_options['fields']['field_ao_edition']['field'] = 'field_ao_edition';
  $handler->display->display_options['fields']['field_ao_edition']['label'] = '';
  $handler->display->display_options['fields']['field_ao_edition']['element_label_colon'] = FALSE;
  /* Field: Content: Dimensions */
  $handler->display->display_options['fields']['field_ao_dimensions']['id'] = 'field_ao_dimensions';
  $handler->display->display_options['fields']['field_ao_dimensions']['table'] = 'field_data_field_ao_dimensions';
  $handler->display->display_options['fields']['field_ao_dimensions']['field'] = 'field_ao_dimensions';
  $handler->display->display_options['fields']['field_ao_dimensions']['label'] = '';
  $handler->display->display_options['fields']['field_ao_dimensions']['element_label_colon'] = FALSE;
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
    'art_object' => 'art_object',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['art_object_stats'] = $view;

  $view = new view();
  $view->name = 'art_objects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Art Objects';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Alternate Titles */
  $handler->display->display_options['fields']['field_ao_alternate_titles']['id'] = 'field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['table'] = 'field_data_field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['field'] = 'field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['label'] = '';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_alternate_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_alternate_titles']['delta_offset'] = '0';
  /* Field: Content: Foreign Title */
  $handler->display->display_options['fields']['field_ao_foreign_title']['id'] = 'field_ao_foreign_title';
  $handler->display->display_options['fields']['field_ao_foreign_title']['table'] = 'field_data_field_ao_foreign_title';
  $handler->display->display_options['fields']['field_ao_foreign_title']['field'] = 'field_ao_foreign_title';
  $handler->display->display_options['fields']['field_ao_foreign_title']['label'] = '';
  $handler->display->display_options['fields']['field_ao_foreign_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_foreign_title']['alter']['text'] = '<div class="forza italic">([field_ao_alternate_titles]}, [field_ao_foreign_title]</div>';
  $handler->display->display_options['fields']['field_ao_foreign_title']['element_label_colon'] = FALSE;
  /* Field: Content: Related People */
  $handler->display->display_options['fields']['field_related_people_by_role']['id'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['field'] = 'field_related_people_by_role';
  $handler->display->display_options['fields']['field_related_people_by_role']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_by_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_by_role']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'ao_person',
  );
  $handler->display->display_options['fields']['field_related_people_by_role']['delta_offset'] = '0';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_type'] = 'div';
  $handler->display->display_options['fields']['view']['element_class'] = 'large-12 clear-both';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'art_object_stats';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Content: Pull quote */
  $handler->display->display_options['fields']['field_pull_quote']['id'] = 'field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['table'] = 'field_data_field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['field'] = 'field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['label'] = '';
  $handler->display->display_options['fields']['field_pull_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pull_quote']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_pull_quote']['delta_offset'] = '0';
  /* Field: Content: Curator Notes */
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['id'] = 'field_field_ao_curator_notes';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['table'] = 'field_data_field_field_ao_curator_notes';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['field'] = 'field_field_ao_curator_notes';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['label'] = '';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['settings'] = array(
    'view_mode' => 'ao_curator_notes',
  );
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['separator'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'ao_more_curator_notes';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
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
    'art_object' => 'art_object',
  );
  /* Filter criterion: Content: ItemClass Term (field_ao_itemclass_term) */
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['id'] = 'field_ao_itemclass_term_tid';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['table'] = 'field_data_field_ao_itemclass_term';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['field'] = 'field_ao_itemclass_term_tid';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['value'] = array(
    0 => '19997',
  );
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['vocabulary'] = 'itemclass';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['art_objects'] = $view;

  $view = new view();
  $view->name = 'film_actors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Film Actors';
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
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Content: Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['id'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['field'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['id'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['field'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['relationship'] = 'field_related_people_by_role_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Person */
  $handler->display->display_options['fields']['field_related_people_person']['id'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['table'] = 'field_data_field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['field'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_person']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_person']['element_class'] = 'font-14';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_person']['settings'] = array(
    'link' => 0,
  );
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
    'art_object' => 'art_object',
  );
  /* Filter criterion: Field collection item: Role (field_related_people_role) */
  $handler->display->display_options['filters']['field_related_people_role_tid']['id'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['filters']['field_related_people_role_tid']['field'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['filters']['field_related_people_role_tid']['value'] = array(
    0 => '21010',
  );
  $handler->display->display_options['filters']['field_related_people_role_tid']['vocabulary'] = 'roles';
  $export['film_actors'] = $view;

  $view = new view();
  $view->name = 'film_non_actors';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Film Non Actors';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Relationship: Content: Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['id'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['table'] = 'field_data_field_related_people_by_role';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['field'] = 'field_related_people_by_role_value';
  $handler->display->display_options['relationships']['field_related_people_by_role_value']['delta'] = '-1';
  /* Relationship: Field collection item: Entity with the Related People (field_related_people_by_role) */
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['id'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['table'] = 'field_collection_item';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['field'] = 'field_related_people_by_role_node';
  $handler->display->display_options['relationships']['field_related_people_by_role_node']['relationship'] = 'field_related_people_by_role_value';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Field collection item: Role */
  $handler->display->display_options['fields']['field_related_people_role']['id'] = 'field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['field'] = 'field_related_people_role';
  $handler->display->display_options['fields']['field_related_people_role']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_role']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_role']['element_type'] = 'strong';
  $handler->display->display_options['fields']['field_related_people_role']['element_class'] = 'font-14 capitalize forza';
  $handler->display->display_options['fields']['field_related_people_role']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_role']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_related_people_role']['delta_offset'] = '0';
  /* Field: Field collection item: Person */
  $handler->display->display_options['fields']['field_related_people_person']['id'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['table'] = 'field_data_field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['field'] = 'field_related_people_person';
  $handler->display->display_options['fields']['field_related_people_person']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['fields']['field_related_people_person']['label'] = '';
  $handler->display->display_options['fields']['field_related_people_person']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_related_people_person']['settings'] = array(
    'link' => 0,
  );
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
    'art_object' => 'art_object',
  );
  /* Filter criterion: Field collection item: Role (field_related_people_role) */
  $handler->display->display_options['filters']['field_related_people_role_tid']['id'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['table'] = 'field_data_field_related_people_role';
  $handler->display->display_options['filters']['field_related_people_role_tid']['field'] = 'field_related_people_role_tid';
  $handler->display->display_options['filters']['field_related_people_role_tid']['relationship'] = 'field_related_people_by_role_value';
  $handler->display->display_options['filters']['field_related_people_role_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_related_people_role_tid']['value'] = array(
    0 => '21010',
  );
  $handler->display->display_options['filters']['field_related_people_role_tid']['vocabulary'] = 'roles';
  $export['film_non_actors'] = $view;

  $view = new view();
  $view->name = 'film_objects';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Film Objects';
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
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Alternate Titles */
  $handler->display->display_options['fields']['field_ao_alternate_titles']['id'] = 'field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['table'] = 'field_data_field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['field'] = 'field_ao_alternate_titles';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['label'] = '';
  $handler->display->display_options['fields']['field_ao_alternate_titles']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ao_alternate_titles']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ao_alternate_titles']['delta_offset'] = '0';
  /* Field: Content: Foreign Title */
  $handler->display->display_options['fields']['field_ao_foreign_title']['id'] = 'field_ao_foreign_title';
  $handler->display->display_options['fields']['field_ao_foreign_title']['table'] = 'field_data_field_ao_foreign_title';
  $handler->display->display_options['fields']['field_ao_foreign_title']['field'] = 'field_ao_foreign_title';
  $handler->display->display_options['fields']['field_ao_foreign_title']['label'] = '';
  $handler->display->display_options['fields']['field_ao_foreign_title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_foreign_title']['alter']['text'] = '<div class="forza italic">[field_ao_alternate_titles]  [field_ao_foreign_title]</div>';
  $handler->display->display_options['fields']['field_ao_foreign_title']['element_label_colon'] = FALSE;
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = '';
  $handler->display->display_options['fields']['view']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view']['view'] = 'ao_film_director';
  $handler->display->display_options['fields']['view']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_4']['id'] = 'view_4';
  $handler->display->display_options['fields']['view_4']['table'] = 'views';
  $handler->display->display_options['fields']['view_4']['field'] = 'view';
  $handler->display->display_options['fields']['view_4']['label'] = 'FEATURING';
  $handler->display->display_options['fields']['view_4']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_4']['view'] = 'film_actors';
  $handler->display->display_options['fields']['view_4']['arguments'] = '[!nid]';
  /* Field: Content: Pull quote */
  $handler->display->display_options['fields']['field_pull_quote']['id'] = 'field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['table'] = 'field_data_field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['field'] = 'field_pull_quote';
  $handler->display->display_options['fields']['field_pull_quote']['label'] = '';
  $handler->display->display_options['fields']['field_pull_quote']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_pull_quote']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_pull_quote']['delta_offset'] = '0';
  /* Field: Content: Awards */
  $handler->display->display_options['fields']['field_ao_awards']['id'] = 'field_ao_awards';
  $handler->display->display_options['fields']['field_ao_awards']['table'] = 'field_data_field_ao_awards';
  $handler->display->display_options['fields']['field_ao_awards']['field'] = 'field_ao_awards';
  $handler->display->display_options['fields']['field_ao_awards']['label'] = '';
  $handler->display->display_options['fields']['field_ao_awards']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ao_awards']['alter']['text'] = '<strong class="font-14 forza">AWARDS</strong><br/>
[field_ao_awards]';
  $handler->display->display_options['fields']['field_ao_awards']['element_class'] = 'font-14';
  $handler->display->display_options['fields']['field_ao_awards']['element_label_colon'] = FALSE;
  /* Field: Content: Curator Notes */
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['id'] = 'field_field_ao_curator_notes';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['table'] = 'field_data_field_field_ao_curator_notes';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['field'] = 'field_field_ao_curator_notes';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['label'] = '';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['settings'] = array(
    'edit' => '',
    'delete' => '',
    'add' => '',
    'description' => 0,
    'view_mode' => 'ao_curator_notes',
  );
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_field_ao_curator_notes']['separator'] = '';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_3']['id'] = 'view_3';
  $handler->display->display_options['fields']['view_3']['table'] = 'views';
  $handler->display->display_options['fields']['view_3']['field'] = 'view';
  $handler->display->display_options['fields']['view_3']['label'] = '';
  $handler->display->display_options['fields']['view_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_3']['view'] = 'ao_more_curator_notes';
  $handler->display->display_options['fields']['view_3']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_2']['id'] = 'view_2';
  $handler->display->display_options['fields']['view_2']['table'] = 'views';
  $handler->display->display_options['fields']['view_2']['field'] = 'view';
  $handler->display->display_options['fields']['view_2']['label'] = '';
  $handler->display->display_options['fields']['view_2']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_2']['element_class'] = 'font-14';
  $handler->display->display_options['fields']['view_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_2']['view'] = 'film_non_actors';
  $handler->display->display_options['fields']['view_2']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_5']['id'] = 'view_5';
  $handler->display->display_options['fields']['view_5']['table'] = 'views';
  $handler->display->display_options['fields']['view_5']['field'] = 'view';
  $handler->display->display_options['fields']['view_5']['label'] = '';
  $handler->display->display_options['fields']['view_5']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_5']['view'] = 'ao_based_on';
  $handler->display->display_options['fields']['view_5']['arguments'] = '[!nid]';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view_1']['id'] = 'view_1';
  $handler->display->display_options['fields']['view_1']['table'] = 'views';
  $handler->display->display_options['fields']['view_1']['field'] = 'view';
  $handler->display->display_options['fields']['view_1']['label'] = '';
  $handler->display->display_options['fields']['view_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_1']['view'] = 'ao_film_stats';
  $handler->display->display_options['fields']['view_1']['arguments'] = '[!nid]';
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
    'art_object' => 'art_object',
  );
  /* Filter criterion: Content: ItemClass Term (field_ao_itemclass_term) */
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['id'] = 'field_ao_itemclass_term_tid';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['table'] = 'field_data_field_ao_itemclass_term';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['field'] = 'field_ao_itemclass_term_tid';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['operator'] = 'and';
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['value'] = array(
    0 => '19997',
  );
  $handler->display->display_options['filters']['field_ao_itemclass_term_tid']['vocabulary'] = 'itemclass';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $export['film_objects'] = $view;

  return $export;
}
