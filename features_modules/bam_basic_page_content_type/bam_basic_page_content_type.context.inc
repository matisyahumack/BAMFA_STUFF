<?php
/**
 * @file
 * bam_basic_page_content_type.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bam_basic_page_content_type_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'cal_students_audiience';
  $context->description = 'contextual rules for the cal student audience page';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'cal-students' => 'cal-students',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cal_student_promo_blocks-block' => array(
          'module' => 'views',
          'delta' => 'cal_student_promo_blocks-block',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('contextual rules for the cal student audience page');
  $export['cal_students_audiience'] = $context;

  return $export;
}
