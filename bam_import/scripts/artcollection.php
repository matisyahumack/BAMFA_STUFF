<?php

/**
* @file a script meant to be run by drush
*
**/
//require_once('sites/all//libraries/filemaker/Filemaker.php');


// if (($library == libraries_load('filemaker')) && !empty($library['loaded'])) {
//   // Do something with the library here.
//   //print_r($library);
// }

$database = 'ArtCollection';
$fm = connect($database);
//print_r($fm);
$filter_field = 'ItemClass';
$filter_value = 'Photograph';

$num_batches = 3;
$batch_size = 3;
$layout = 'artcollection';

for ($x = 1; $x <= $num_batches; $x++) {
  print "batch: " . $x . "\n";
  $query = $fm->newFindCommand($layout);
  $start = $x * $batch_size;
  $query->setRange($start,$start + $batch_size); 
  $query->AddFindCriterion($filter_field,'=='.$filter_value);
  $result = $query->execute();
  // No such film note error check.
  if (FileMaker::isError($detailed_result)) {
    require('errortag.php');
    exit(0);
  }

  foreach($result->getRecords() as $res) {
    $fm_id = $res->_impl->_recordId;
    $values = array(
      'title' => $res->_impl->_fields['Title'][0],
      'type' => 'art_object',
      'uid' => 1, // admin,
      'status' => 1,
      'comment' => 0,
      'promote' => 0,
    );
    $entity = entity_create('node', $values);
    $node_wrapper = entity_metadata_wrapper('node', $entity);
    $node_wrapper->save();
  
    $node_wrapper->field_accession_number->set($res->_impl->_fields['AccessionNumber'][0]);
    $node_wrapper->field_ao_dimensions->set($res->_impl->_fields['Dimensions'][0]);
     $node_wrapper->field_materials->set($res->_impl->_fields['Materials'][0]);
     // @todo itemclass
     // @todo handle peole
   //  $node_wrapper->field_ao_country_of_origin->set($res->_impl->_fields['OriginPlace'][0]);
  //   $node_wrapper->field_makers_people->set($res->_impl->_fields['Artist'][0]);
  //   $node_wrapper->field_earliest_date->set($res->_impl->_fields['ObjectDate'][0]);
     $node_wrapper->field_ao_credit_line->set($res->_impl->_fields['CreditLine'][0]);
  
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
      ))
      ->execute();
    $count++;
    if ($count > $max) {
      break;
    }
  }
}

function connect($database, $fmpro="macbook"){
  switch ($fmpro) {
    case "macbook":
      $host = "192.168.1.73";
      break;
    default:
      $host = $fmrpo;
      break;
  }
  $user = "admin";
  $pass = "bampfa";
  $fm = new FileMaker($database, $host, $user, $pass);

  return $fm;
}

print "hello\n";

