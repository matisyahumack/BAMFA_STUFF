<?php

// Load search filters for ALL indexed content.
module_load_include('inc', 'bam_helper', 'bam_helper_advanced_search_query_all');

// Load search filters for ART OBJECTS indexed content.
module_load_include('inc', 'bam_helper', 'bam_helper_advanced_search_query_art_objects');

// Load search filters for DOCUMENTATION indexed content.
module_load_include('inc', 'bam_helper', 'bam_helper_advanced_search_query_doc');

// Load search filters for EVENT indexed content.
module_load_include('inc', 'bam_helper', 'bam_helper_advanced_search_query_event');

// Load search filters for EXHIBITIONS indexed content.
module_load_include('inc', 'bam_helper', 'bam_helper_advanced_search_query_exhibition');

// Load search filters for PERSON indexed content.
module_load_include('inc', 'bam_helper', 'bam_helper_advanced_search_query_person');

/**
 * Page callback that builds the forms
 */
function bam_helper_advanced_search_query($elements) {
  // dsm($elements);
  global $user;
  $build = array();

  // Render other forms here.
  $build['bam_helper_advanced_search_query_all'] = drupal_get_form('bam_helper_advanced_search_query_all', $elements);
  $build['bam_helper_advanced_search_query_art_objects'] = drupal_get_form('bam_helper_advanced_search_query_art_objects', $elements);
  $build['bam_helper_advanced_search_query_doc'] = drupal_get_form('bam_helper_advanced_search_query_doc', $elements);
  $build['bam_helper_advanced_search_query_event'] = drupal_get_form('bam_helper_advanced_search_query_event', $elements);
  $build['bam_helper_advanced_search_query_exhibition'] = drupal_get_form('bam_helper_advanced_search_query_exhibition', $elements);
  $build['bam_helper_advanced_search_query_person'] = drupal_get_form('bam_helper_advanced_search_query_person', $elements);
  return $build;
}

