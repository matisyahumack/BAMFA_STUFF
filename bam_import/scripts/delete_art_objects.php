<?php

$values = array('art_object');

delete_all($values);

function delete_all($values) {
  $results = db_select('node', 'n')
              ->fields('n', array('nid'))
              ->condition('type', $values, 'IN')
              ->execute();
  foreach ($results as $result) {
    $nids[] = $result->nid;
  }

  if (!empty($nids)) {
    node_delete_multiple($nids);
    drupal_set_message(t('Deleted %count nodes.', array('%count' => count($nids))));
  }
}
