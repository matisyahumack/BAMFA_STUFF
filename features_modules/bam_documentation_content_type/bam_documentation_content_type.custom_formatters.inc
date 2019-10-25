<?php
/**
 * @file
 * bam_documentation_content_type.custom_formatters.inc
 */

/**
 * Implements hook_custom_formatters_defaults().
 */
function bam_documentation_content_type_custom_formatters_defaults() {
  $export = array();

  $formatter = new stdClass();
  $formatter->disabled = FALSE; /* Edit this to true to make a default formatter disabled initially */
  $formatter->api_version = 2;
  $formatter->name = 'doc_alt_titles';
  $formatter->label = 'Document Alt Titles';
  $formatter->description = '';
  $formatter->mode = 'token';
  $formatter->field_types = 'text';
  $formatter->code = '<div class="forza italic">([node:field_doc_alternate_titles], [node:field_doc_foreign_title])</div>';
  $formatter->fapi = '';
  $export['doc_alt_titles'] = $formatter;

  return $export;
}
