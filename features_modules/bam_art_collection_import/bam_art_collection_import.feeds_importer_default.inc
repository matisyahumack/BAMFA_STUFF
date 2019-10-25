<?php
/**
 * @file
 * bam_art_collection_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function bam_art_collection_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'art_object';
  $feeds_importer->config = array(
    'name' => 'Art Object',
    'description' => 'Import Records from ArtColletion FM database',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileMakerFetcher',
      'config' => array(
        'database' => 'ArtCollection',
        'hostspec' => '192.168.1.73',
        'username' => 'admin',
        'password' => 'bampfa',
        'layout' => 'ArtCollection',
        'criteria' => array(
          1 => array(
            'field_id' => 'ItemClass',
            'field_value' => 'Photograph',
          ),
        ),
        'num_criteria' => 2,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsFileMakerParser',
      'config' => array(
        'mappings' => array(
          'filemakerfield:0' => array(
            'mapping' => 'Title',
            'is_multi_value' => 0,
          ),
        ),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'filemakerfield:0',
            'target' => 'title',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'art_object',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['art_object'] = $feeds_importer;

  return $export;
}
