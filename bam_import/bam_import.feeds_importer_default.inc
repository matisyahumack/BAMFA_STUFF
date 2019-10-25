<?php
/**
 * @file
 * bam_import.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function bam_import_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'art_object';
  $feeds_importer->config = array(
    'name' => 'Art Object',
    'description' => 'Import Records from ArtCollection FM database',
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
          'filemakerfield:1' => array(
            'mapping' => 'AccessionNumber',
            'is_multi_value' => 0,
          ),
          'filemakerfield:2' => array(
            'mapping' => 'Dimensions',
            'is_multi_value' => 0,
          ),
          'filemakerfield:3' => array(
            'mapping' => 'Materials',
            'is_multi_value' => 0,
          ),
          'filemakerfield:4' => array(
            'mapping' => 'OriginPlace',
            'is_multi_value' => 0,
          ),
          'filemakerfield:5' => array(
            'mapping' => 'ObjectDate',
            'is_multi_value' => 0,
          ),
          'filemakerfield:6' => array(
            'mapping' => 'ItemClass',
            'is_multi_value' => 0,
          ),
          'filemakerfield:7' => array(
            'mapping' => 'CreditLine',
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
          1 => array(
            'source' => 'filemakerfield:1',
            'target' => 'field_accession_number',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'filemakerfield:2',
            'target' => 'field_ao_dimensions',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'filemakerfield:3',
            'target' => 'field_materials',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'filemakerfield:4',
            'target' => 'field_ao_country_of_origin',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'filemakerfield:5',
            'target' => 'field_earliest_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'filemakerfield:6',
            'target' => 'field_item_class',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'filemakerfield:7',
            'target' => 'field_ao_credit_line',
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

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'cms';
  $feeds_importer->config = array(
    'name' => 'cms',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '2',
            'target' => 'field_director',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '3',
            'target' => 'field_country_and_date',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '4',
            'target' => 'field_nickname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '5',
            'target' => 'field_play_date',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => '6',
            'target' => 'field_show_time',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => '7',
            'target' => 'body',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => '8',
            'target' => 'field_author',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => '9',
            'target' => 'field_credits',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => '10',
            'target' => 'field_current_state',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => '11',
            'target' => 'field_kp_film_notes_id',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => '12',
            'target' => 'field_record_metadata',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'full_html',
        'skip_hash_check' => 0,
        'bundle' => 'cms',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['cms'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'filemaker_test';
  $feeds_importer->config = array(
    'name' => 'filemaker test',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileMakerFetcher',
      'config' => array(
        'database' => 'CMS',
        'hostspec' => '192.168.1.73',
        'username' => 'admin',
        'password' => 'bampfa',
        'layout' => 'FilmNote',
        'criteria' => array(),
        'num_criteria' => 1,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsFileMakerParser',
      'config' => array(
        'mappings' => array(),
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'exhibition',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['filemaker_test'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'test_import';
  $feeds_importer->config = array(
    'name' => 'test import',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => '1',
            'target' => 'title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => '2',
            'target' => 'field_artist',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => '3',
            'target' => 'field_item_class_test',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => '4',
            'target' => 'field_origin_or_place',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => '5',
            'target' => 'field_artist_nationality',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => '6',
            'target' => 'field_part_of',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => '7',
            'target' => 'body',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'test_import',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['test_import'] = $feeds_importer;

  return $export;
}
