<?php
/**
 * @file
 * bam_basic_page_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bam_basic_page_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_slideshow_images|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_slideshow_images';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_image_slide' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['field_collection_item|field_slideshow_images|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bam_basic_page_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_slideshow_images|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_slideshow_images';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_image_slide',
        1 => 'field_image_caption',
      ),
    ),
    'fields' => array(
      'field_image_slide' => 'ds_content',
      'field_image_caption' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_slideshow_images|default'] = $ds_layout;

  return $export;
}
