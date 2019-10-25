<?php

$poster_tid = 20438;


$query = db_select('field_data_field_doc_object_type', 'obj')
  ->fields('obj', array('entity_id'))
  ->condition('field_doc_object_type_tid', $poster_tid, '=');
$result = $query->execute();
print "Num records: " . $result->rowCount() . "\n";
foreach ($result as $res) {
  // print_r($res);
  node_delete($res->entity_id);
}