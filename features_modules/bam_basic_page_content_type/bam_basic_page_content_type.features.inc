<?php
/**
 * @file
 * bam_basic_page_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bam_basic_page_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
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
function bam_basic_page_content_type_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_fe_nodequeue_export_fields().
 */
function bam_basic_page_content_type_fe_nodequeue_export_fields() {
  $nodequeues = array();

  // Exported nodequeues: cal_students_promos
  $nodequeues['cal_students_promos'] = array(
    'name' => 'cal_students_promos',
    'title' => 'Cal Students Promos 1',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'add to %subqueue',
    'link_remove' => 'remove from cal student promos',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'promo',
    ),
    'roles' => array(),
    'count' => 0,
  );

  // Exported nodequeues: cal_students_promos_2
  $nodequeues['cal_students_promos_2'] = array(
    'name' => 'cal_students_promos_2',
    'title' => 'Cal Students Promos 2',
    'subqueue_title' => '',
    'size' => 0,
    'link' => 'add to %subqueue',
    'link_remove' => 'remove from %subqueue',
    'owner' => 'nodequeue',
    'show_in_ui' => 1,
    'show_in_tab' => 1,
    'show_in_links' => 1,
    'reference' => 0,
    'reverse' => 0,
    'i18n' => 0,
    'subqueues' => 1,
    'types' => array(
      0 => 'promo',
    ),
    'roles' => array(),
    'count' => 0,
  );

  return $nodequeues;
}

/**
 * Implements hook_image_default_styles().
 */
function bam_basic_page_content_type_image_default_styles() {
  $styles = array();

  // Exported image style: basic_page_slide.
  $styles['basic_page_slide'] = array(
    'name' => 'basic_page_slide',
    'label' => 'Basic Page Slide',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 730,
          'height' => 420,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function bam_basic_page_content_type_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
