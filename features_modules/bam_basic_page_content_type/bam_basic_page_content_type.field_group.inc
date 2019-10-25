<?php
/**
 * @file
 * bam_basic_page_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bam_basic_page_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content_relationships|node|page|form';
  $field_group->group_name = 'group_content_relationships';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content Relationships',
    'weight' => '5',
    'children' => array(
      0 => 'field_page_related_pages_heading',
      1 => 'field_page_related_pages',
      2 => 'field_page_override_title',
      3 => 'field_page_override_summary',
      4 => 'field_page_override_thumbnail',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content-relationships field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content_relationships|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_group|node|page|full';
  $field_group->group_name = 'group_image_group';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Group',
    'weight' => '12',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Group',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-image-group field-group-div large-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_group|node|page|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_content|node|page|form';
  $field_group->group_name = 'group_page_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Content',
    'weight' => '4',
    'children' => array(
      0 => 'body',
      1 => 'field_page_thumbnail_image',
      2 => 'field_page_featured_images',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-page-content field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_page_content|node|page|form'] = $field_group;

  return $export;
}
