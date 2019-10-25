<?php
/**
 * @file
 * bam_documentation_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bam_documentation_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "custom_formatters" && $api == "custom_formatters") {
    return array("version" => "2");
  }
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function bam_documentation_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function bam_documentation_content_type_node_info() {
  $items = array(
    'documentation' => array(
      'name' => t('Documentation'),
      'base' => 'node_content',
      'description' => t('Documentation/Materials Object'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
