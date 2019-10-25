<?php

/**
* @file a script meant to be run by drush
*
**/
// require_once('sites/all//libraries/filemaker/Filemaker.php');

$database = 'BAMCollection';
$layout = 'Collection Items Detail';

$fm = connect($database);

//print_r($fm->listLayouts());

//print_r(fieldNames($fm, $layout));

$id = 'COL000013';
//print_r(getRecord($fm, $layout, $id));

importRecords($fm, $layout);

// id is not the filemaker id, but BAM's ID 
function getRecord($fm, $layout, $id){
  $filter_field = '__kp_CollectionItem_ID';
  $query = $fm->newFindCommand($layout);
  $query->AddFindCriterion($filter_field,'=='.$id);
  $res = $query->execute();
  $records = $res->getRecords();
  $record = $records[0]->_impl->_fields;
  return $record;
}

function FieldNames($fm, $layout_name){
  $output = array();
  $unique_fields = array();
  
  $layout_info = $fm->getLayout($layout_name);
  $fields = $layout_info->_impl->_fields;
   
  foreach($fields as $field_name => $info) {
    $output[] = $field_name;
  }
  return $output;
}

function importRecords($fm, $layout){
  $start = 1500; // set at different value to play with different slices of the database
  $num_batches = 5; 
  $batch_size = 50; //how many records to grab
  $logfile = './bamcollection_logfile.txt';
  
  //some intializaton so we don't have to do it in the loop
  $materials_vocab = 18; // this should not be hard coded
  $itemclass_vocab = 19;
  
  for ($x = 1; $x <= $num_batches; $x++) { // x is number of batches
    print "batch: " . $x . "\n";
    $query = $fm->newFindCommand($layout);
    $start_range = ($x * $batch_size) + $start; // ugh
    $query->setRange($start_range, $batch_size); 
    //$query->AddFindCriterion($filter_field,'=='.$filter_value);
    $result = $query->execute();
    if (count($result)< 1){
      break;
    }
    foreach($result->getRecords() as $res) {
      print_r($res->_impl->_fields);
      $orig_title = $res->_impl->_fields['Title'][0];
      $original_primary_key = $res->_impl->_fields['__kp_CollectionItem_ID'][0];
      // print $original_primary_key . "\n";
      if (strlen($orig_title > 254)) {
        $title = truncate_utf8($title, 254, TRUE);
        file_put_contents ($logfile ,$original_primary_key, $orig_title, FILE_APPEND );
      }
      $title = substr($res->_impl->_fields['Title'][0], 0,254);
      // print $title . "\n";
        
      $values = array(
        'title' => $title,
         'type' => 'art_object',
         'uid' => 1, // admin,
         'status' => 1,
         'comment' => 0,
         'promote' => 0,
      );
      $node = entity_create('node', $values);
      $node_wrapper = entity_metadata_wrapper('node', $node);
      $node_wrapper->save();


@TODO: change subdescription handling
      $node_wrapper->field_original_primary_key->set($original_primary_key);
      if ($res->_impl->_fields['Description'][0]) {
        $node_wrapper->body->set(array(
          'value' => $res->_impl->_fields['Description'][0],
          'summary' => $res->_impl->_fields['subdescription'][0],
        ));
      }
      // straightforward mappings at th etop
      // $node_wrapper->field_ao_country_of_origin->set($res->_impl->_fields['OriginOrPlace'][0]);
      $node_wrapper->field_ao_credit_line->set($res->_impl->_fields['CreditLine'][0]);
      $node_wrapper->field_accession_number->set($res->_impl->_fields['ID Number'][0]);
      $node_wrapper->field_materials->set($res->_impl->_fields['Materials'][0]);

      // date mappings
      // just have a 4-character year, so turn it into a date
      // following the example of other items already in the database
      $earliest_date_year = $res->_impl->_fields['EarliestDate'][0];
      $earliest_date_value = "$earliest_date_year-04-01 17:40:33";
      // note that set() didn't work for me here
      $node_wrapper->field_earliest_date->value = $earliest_date_value;
      
      $latest_date_year = $res->_impl->_fields['LatestDate'][0];
      $latest_date_value = "$latest_date_year-04-01 17:40:33";
      $node_wrapper->field_latest_date->value = $latest_date_value;
  
      // Country of Origin
      //$term_name = $res->_impl->_fields['OriginOrPlace'][0];
      // vocab name must be lower case!!
      $term_name = $res->_impl->_fields['OriginOrPlace'][0];
      print "origin:  \n";
      print_r($term_name);
      //foreach($terms as $i => $term_name){
     //if (!empty($term_name)) {
          $tid = _bam_import_get_term_tid($term_name, "nations");
          $node_wrapper->field_ao_country_of_origin->set($tid);
    //}
      //}
      
      //$classes = taxonomy_get_term_by_name($term_name, "itemclass");
      $term_name = $res->_impl->_fields['ItemClass'][0];
       print "itemclass: \n";
      print_r($term_name);
      // vocab name must 
     // foreach($terms as $i => $term_name){
     //   if (!empty($term_name)) {
          $tid = _bam_import_get_term_tid($term_name, "itemclass");
          $node_wrapper->field_ao_itemclass_term->set( $tid);   
     //   }
     // }

      // Periods
      $terms = $res->_impl->_fields['PeriodOrStyle'];
      print "period\n";
      print_r($terms);
       foreach($terms as $i => $term_name){
        if (!empty($term_name)) {
          $tid = _bam_import_get_term_tid($term_name, "periods");
          $node_wrapper->field_ao_period->tid[$i] = $tid;   
        }
      }
      
      $node_wrapper->save();

      // saved, so let's keep a record of it in our mapping table
      $nid = db_insert('eck_bam_mapping') // Table name no longer needs {}
        ->fields(array(
          'type' => 'node',
          'created' => REQUEST_TIME,
          'changed' => REQUEST_TIME,
          'entity_type' => 'node',
          'bundle' => 'art_object',
          'entity_id' => $node_wrapper->getIdentifier(),
          'source_id' => $original_primary_key,
        ))
        ->execute();
    }
  }
}




