<?php
/**
 * @file
 * bam_import.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function bam_import_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_eck_bundle_info().
 */
function bam_import_eck_bundle_info() {
  $items = array(
  'bam_mapping_keeps_track_of_' => array(
  'machine_name' => 'bam_mapping_keeps_track_of_',
  'entity_type' => 'bam_mapping',
  'name' => 'keeps_track_of_',
  'label' => 'Keeps track of source and destination ids of imported items',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function bam_import_eck_entity_type_info() {
$items = array(
       'bam_mapping' => array(
  'name' => 'bam_mapping',
  'label' => 'bam mapping',
  'properties' => array(
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'changed' => array(
      'label' => 'Changed',
      'type' => 'integer',
      'behavior' => 'changed',
    ),
    'entity_type' => array(
      'label' => 'Entity Type',
      'type' => 'text',
      'behavior' => '',
    ),
    'bundle' => array(
      'label' => 'bundle',
      'type' => 'text',
      'behavior' => '',
    ),
    'entity_id' => array(
      'label' => 'entity_id',
      'type' => 'integer',
      'behavior' => '',
    ),
  ),
),
  );
  return $items;
}
