<?php
/**
 * @file
 * bam_basic_page_content_type.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bam_basic_page_content_type_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'cal_student_promo_blocks';
  $view->description = 'Nodequeue blocks for promos on audience pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Audience Faux Blocks';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Cal Student Promo Blocks';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Nodequeue: Position */
  $handler->display->display_options['sorts']['position']['id'] = 'position';
  $handler->display->display_options['sorts']['position']['table'] = 'nodequeue_nodes';
  $handler->display->display_options['sorts']['position']['field'] = 'position';
  $handler->display->display_options['sorts']['position']['relationship'] = 'nodequeue_rel';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Cal Students 1 */
  $handler = $view->new_display('block', 'Cal Students 1', 'block');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['display_description'] = 'one of our nodeview faux blocks for cal students audience pages';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'block default-bg-1 [field_hero_background_color] [field_text_color] [field_css_classes]';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Nodequeue: Queue */
  $handler->display->display_options['relationships']['nodequeue_rel']['id'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['nodequeue_rel']['field'] = 'nodequeue_rel';
  $handler->display->display_options['relationships']['nodequeue_rel']['required'] = TRUE;
  $handler->display->display_options['relationships']['nodequeue_rel']['limit'] = 1;
  $handler->display->display_options['relationships']['nodequeue_rel']['names'] = array(
    'cal_students_promos' => 'cal_students_promos',
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Text Color */
  $handler->display->display_options['fields']['field_text_color']['id'] = 'field_text_color';
  $handler->display->display_options['fields']['field_text_color']['table'] = 'field_data_field_text_color';
  $handler->display->display_options['fields']['field_text_color']['field'] = 'field_text_color';
  $handler->display->display_options['fields']['field_text_color']['label'] = '';
  $handler->display->display_options['fields']['field_text_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_text_color']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_text_color']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Link To */
  $handler->display->display_options['fields']['field_link_to']['id'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to']['table'] = 'field_data_field_link_to';
  $handler->display->display_options['fields']['field_link_to']['field'] = 'field_link_to';
  $handler->display->display_options['fields']['field_link_to']['label'] = '';
  $handler->display->display_options['fields']['field_link_to']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_to']['element_label_colon'] = FALSE;
  /* Field: Field: Hero Background Color */
  $handler->display->display_options['fields']['field_hero_background_color']['id'] = 'field_hero_background_color';
  $handler->display->display_options['fields']['field_hero_background_color']['table'] = 'field_data_field_hero_background_color';
  $handler->display->display_options['fields']['field_hero_background_color']['field'] = 'field_hero_background_color';
  $handler->display->display_options['fields']['field_hero_background_color']['label'] = '';
  $handler->display->display_options['fields']['field_hero_background_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_hero_background_color']['element_label_colon'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2 class="title [field_text_color]"><a href="[field_link_to]">[title]</a></h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_class'] = 'body [field_text_color]';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Background Image */
  $handler->display->display_options['fields']['field_promo_background_image']['id'] = 'field_promo_background_image';
  $handler->display->display_options['fields']['field_promo_background_image']['table'] = 'field_data_field_promo_background_image';
  $handler->display->display_options['fields']['field_promo_background_image']['field'] = 'field_promo_background_image';
  $handler->display->display_options['fields']['field_promo_background_image']['label'] = '';
  $handler->display->display_options['fields']['field_promo_background_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_promo_background_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_promo_background_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_promo_background_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Promo Image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: CSS Classes */
  $handler->display->display_options['fields']['field_css_classes']['id'] = 'field_css_classes';
  $handler->display->display_options['fields']['field_css_classes']['table'] = 'field_data_field_css_classes';
  $handler->display->display_options['fields']['field_css_classes']['field'] = 'field_css_classes';
  $handler->display->display_options['fields']['field_css_classes']['label'] = '';
  $handler->display->display_options['fields']['field_css_classes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_css_classes']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_css_classes']['type'] = 'ds_taxonomy_separator';
  $handler->display->display_options['fields']['field_css_classes']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_css_classes']['separator'] = '';
  $export['cal_student_promo_blocks'] = $view;

  return $export;
}
