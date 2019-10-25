<?php

/**
* @file implements Drush commands for bam_import
*
**/

/**
 * Implements hook_drush_help().
 */
function bam_import_drush_help($command) {
  switch ($command) {
    case 'drush:list_fm_dbs':
      return dt('List FileMaker databases in the current connection.');
      break;
    case 'drush:list_fm_layouts':
      return dt("List Filemaker layouts in the current database");
      break;
    case 'drush:list_fm_fields':
      return dt("List filemaker fields in the specified layout. Database and layout are required.");
      break;
    case 'drush:import_art_object':
      return dt("Import into the art object content type");
      break;
    case 'drush:import_poster':
      return dt("Import items from Posters database");
      return;
  }
}

/**
 * Implements hook_drush_command().
 */
function bam_import_drush_command() {
  $items = array();
  $items['list_fm_dbs'] = array(
    'description' => dt('List FileMaker databases in the current connection..'),
    'arguments'   => array(
      'arg1'    => dt('An optional example argument'),
    ),
  );
  $items['list_fm_layouts'] = array(
    'description' => dt("List layouts in the specified database."),
    'arguments' => array(
      'db' => dt('Optional name of a database'),
    ),
  );
  $items['list_fm_fields'] = array(
    'description' => 'List fields in the specified layout.',
    'arguments' => array(
      'db' => dt('Database Name'),
      'layout_name' => dt('Layout Name'),
    ),
  );
  $items['import_art_object'] = array(
    'description' => 'Import an art object from a named database',
    'arguments' => array(
      'start' => 'Which Filemaker reccord to start at',
      'num' => 'Number of records to import',
     ),
    );
  $items['import_poster'] = array(
    'description' => 'Import objects from Posters Filemaker database',
    'arguments' => array(
      'start' => 'which record to start with',
      'num' => 'how many records to import',
    ),
  );
  $items['import_audio'] = array(
    'description' => 'Import audio objects from Posters Filemaker database',
    'arguments' => array(
      'start' => 'which record to start with',
      'num' => 'how many records to import',
    ),
  );
  return $items;
}

function drush_bam_import_import_audio($start=1, $num = 10){
  bam_import_audio($start, $num);
}

function drush_bam_import_import_poster($start=1, $num = 10){
  bam_import_poster($start, $num);
}

function drush_bam_import_import_art_object($start=1, $num = 10){
  bam_import_import_art_object($start, $num);
}

function drush_bam_import_list_fm_fields($db, $layout_name){
  $fields = bam_import_list_fields($db, $layout_name);
  print_r( $fields);
}

function drush_bam_import_list_fm_layouts($db = ''){
  print "db is:" . $db;
  $layouts = bam_import_list_layouts($db);
  print_r($layouts);
}

/**
 * Callback function for drush my-command. 
 * Callback is called by using drush_hook_command() where
 * hook is the name of the module (MYMODULE) and command is the name of
 * the Drush command with all "-" characters converted to "_" characters (my_command)
 *
 * @param $arg1
 *   An optional argument
 */
function drush_bam_import_list_fm_dbs($arg1 = NULL) {
  //check if the argument was passed in and just print it out
//   if (isset($arg1)) {
//    drush_print($arg1);
//   }
  $dbs = bam_import_list_dbs();
  print_r($dbs);
  //log to the command line with an OK status
  //drush_log('Running my-command', 'ok');
}