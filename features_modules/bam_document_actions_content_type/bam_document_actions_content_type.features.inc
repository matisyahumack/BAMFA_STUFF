<?php
/**
 * @file
 * bam_document_actions_content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function bam_document_actions_content_type_node_info() {
  $items = array(
    'document_action' => array(
      'name' => t('Document Action'),
      'base' => 'node_content',
      'description' => t('Document action/Materials Object'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
