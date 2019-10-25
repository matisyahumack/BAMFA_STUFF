<?php
/**
 * @file
 * bam_documentation_content_type.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bam_documentation_content_type_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_documentation';
  $strongarm->value = 0;
  $export['comment_anonymous_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_documentation';
  $strongarm->value = 1;
  $export['comment_default_mode_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_documentation';
  $strongarm->value = '50';
  $export['comment_default_per_page_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_documentation';
  $strongarm->value = '2';
  $export['comment_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_documentation';
  $strongarm->value = 1;
  $export['comment_form_location_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_documentation';
  $strongarm->value = '1';
  $export['comment_preview_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_documentation';
  $strongarm->value = 1;
  $export['comment_subject_field_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__documentation';
  $strongarm->value = array(
    'view_modes' => array(
      'teaser' => array(
        'custom_settings' => TRUE,
      ),
      'discover_block' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'rss' => array(
        'custom_settings' => FALSE,
      ),
      'search_index' => array(
        'custom_settings' => FALSE,
      ),
      'search_result' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
      'ao_person' => array(
        'custom_settings' => FALSE,
      ),
      'double_feature' => array(
        'custom_settings' => FALSE,
      ),
      'film_series' => array(
        'custom_settings' => FALSE,
      ),
      'film_object' => array(
        'custom_settings' => FALSE,
      ),
      'image_modal' => array(
        'custom_settings' => FALSE,
      ),
      'curator_notes' => array(
        'custom_settings' => FALSE,
      ),
      'revision' => array(
        'custom_settings' => FALSE,
      ),
      'field_readonly' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '17',
        ),
        'locations' => array(
          'weight' => '26',
        ),
        'path' => array(
          'weight' => '45',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_documentation';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_documentation';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_documentation';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );
  $export['node_options_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_documentation';
  $strongarm->value = '1';
  $export['node_preview_documentation'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_documentation';
  $strongarm->value = 1;
  $export['node_submitted_documentation'] = $strongarm;

  return $export;
}
