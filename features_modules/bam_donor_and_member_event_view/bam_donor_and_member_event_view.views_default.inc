<?php
/**
 * @file
 * bam_donor_and_member_event_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function bam_donor_and_member_event_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'donor_and_member_events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Donor and member events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Donor and member events';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h3>Upcoming Events</h3>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Field: Content: Slideshow Images */
  $handler->display->display_options['fields']['field_slideshow_images']['id'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['table'] = 'field_data_field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['field'] = 'field_slideshow_images';
  $handler->display->display_options['fields']['field_slideshow_images']['label'] = '';
  $handler->display->display_options['fields']['field_slideshow_images']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_slideshow_images']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_slideshow_images']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_slideshow_images']['settings'] = array(
    'view_mode' => 'mega_menu_feature_fc',
  );
  $handler->display->display_options['fields']['field_slideshow_images']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_slideshow_images']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Summary */
  $handler->display->display_options['fields']['field_event_summary']['id'] = 'field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['table'] = 'field_data_field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['field'] = 'field_event_summary';
  $handler->display->display_options['fields']['field_event_summary']['label'] = '';
  $handler->display->display_options['fields']['field_event_summary']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_summary']['element_label_colon'] = FALSE;
  /* Field: Content: Related Location (Venue) */
  $handler->display->display_options['fields']['field_event_related_places']['id'] = 'field_event_related_places';
  $handler->display->display_options['fields']['field_event_related_places']['table'] = 'field_data_field_event_related_places';
  $handler->display->display_options['fields']['field_event_related_places']['field'] = 'field_event_related_places';
  $handler->display->display_options['fields']['field_event_related_places']['label'] = '';
  $handler->display->display_options['fields']['field_event_related_places']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_related_places']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_related_places']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_event_related_places']['delta_offset'] = '0';
  /* Field: Content: Featured Hero Carousel: Dates */
  $handler->display->display_options['fields']['field_featured_hero_carousel_dat']['id'] = 'field_featured_hero_carousel_dat';
  $handler->display->display_options['fields']['field_featured_hero_carousel_dat']['table'] = 'field_data_field_featured_hero_carousel_dat';
  $handler->display->display_options['fields']['field_featured_hero_carousel_dat']['field'] = 'field_featured_hero_carousel_dat';
  $handler->display->display_options['fields']['field_featured_hero_carousel_dat']['label'] = '';
  $handler->display->display_options['fields']['field_featured_hero_carousel_dat']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_featured_hero_carousel_dat']['element_label_colon'] = FALSE;
  /* Field: Content: Admission Information */
  $handler->display->display_options['fields']['field_event_admission_info']['id'] = 'field_event_admission_info';
  $handler->display->display_options['fields']['field_event_admission_info']['table'] = 'field_data_field_event_admission_info';
  $handler->display->display_options['fields']['field_event_admission_info']['field'] = 'field_event_admission_info';
  $handler->display->display_options['fields']['field_event_admission_info']['label'] = '';
  $handler->display->display_options['fields']['field_event_admission_info']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_admission_info']['element_label_colon'] = FALSE;
  /* Field: Content: Ticket Purchase Link */
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['id'] = 'field_event_ticket_purchase_link';
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['table'] = 'field_data_field_event_ticket_purchase_link';
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['field'] = 'field_event_ticket_purchase_link';
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['label'] = '';
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['alter']['text'] = '<div class="member-events">
[field_slideshow_images]
<div class="member-events-content">
<h3>[title]</h3>
<p>[field_event_summary]</p>
<p>[field_event_related_places]</p>
<p>[field_featured_hero_carousel_dat]</p>
<p>[field_event_admission_info]</p>
<p><a href="[field_event_ticket_purchase_link-url]" class="button round">[field_event_ticket_purchase_link-title]</a></p>
</div>
</div>';
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_event_ticket_purchase_link']['type'] = 'link_separate';
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

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['donor_and_member_events'] = $view;

  return $export;
}
