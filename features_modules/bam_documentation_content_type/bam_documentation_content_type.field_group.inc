<?php
/**
 * @file
 * bam_documentation_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bam_documentation_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_basic|node|documentation|form';
  $field_group->group_name = 'group_doc_basic';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic',
    'weight' => '0',
    'children' => array(
      0 => 'field_doc_object_type',
      1 => 'field_doc_id_number',
      2 => 'field_doc_images',
      3 => 'field_dates',
      4 => 'field_dates_year1',
      5 => 'field_region_other',
      6 => 'field_region_country',
      7 => 'field_doc_id_number_type',
      8 => 'field_dates_note',
      9 => 'field_dates_year2',
      10 => 'field_doc_access_code',
      11 => 'field_non_countries',
      12 => 'field_ao_itemclass_term',
      13 => 'locations',
      14 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-basic field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_doc_basic|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_description|node|documentation|form';
  $field_group->group_name = 'group_doc_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'field_doc_hashtag',
      2 => 'field_doc_name_subjects',
      3 => 'field_subjects',
      4 => 'field_doc_public_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-description field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_doc_description|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_image_container|node|documentation|default';
  $field_group->group_name = 'group_doc_image_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_doc_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-doc-image-container field-group-div large-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_image_container|node|documentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_includes|node|documentation|form';
  $field_group->group_name = 'group_doc_includes';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_object_details';
  $field_group->data = array(
    'label' => 'Document includes',
    'weight' => '36',
    'children' => array(
      0 => 'field_doc_filmography',
      1 => 'field_doc_illustrations',
      2 => 'field_doc_cast_credits',
      3 => 'field_doc_tech_credits',
      4 => 'field_doc_distribution_co',
      5 => 'field_doc_production_co',
      6 => 'field_doc_production_costs',
      7 => 'field_doc_box_office',
      8 => 'field_doc_bibliography',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Document includes',
      'instance_settings' => array(
        'required_fields' => 0,
        'classes' => 'group-doc-includes field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_doc_includes|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_inline_stats|node|documentation|default';
  $field_group->group_name = 'group_doc_inline_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_doc_stats';
  $field_group->data = array(
    'label' => 'Doc Inline Stats',
    'weight' => '13',
    'children' => array(
      0 => 'field_doc_number_of_copies',
      1 => 'field_doc_dimensions',
      2 => 'field_doc_accession_number',
      3 => 'field_doc_page_info',
      4 => 'field_languages',
      5 => 'field_doc_public_notes',
      6 => 'field_doc_languages',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Doc Inline Stats',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-doc-inline-stats field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_inline_stats|node|documentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_left_wrapper|node|documentation|default';
  $field_group->group_name = 'group_doc_left_wrapper';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Left Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_subjects',
      1 => 'group_left_grey',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Left Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-doc-left-wrapper field-group-div large-4 left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_left_wrapper|node|documentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_legacy|node|documentation|form';
  $field_group->group_name = 'group_doc_legacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legacy',
    'weight' => '5',
    'children' => array(
      0 => 'field_doc_attached_files',
      1 => 'field_doc_rich_media_files',
      2 => 'field_doc_people_text',
      3 => 'field_orig_key_fm',
      4 => 'field_orig_key_cf',
      5 => 'field_tags',
      6 => 'field_audiences',
      7 => 'field_doc_audiences',
      8 => 'field_doc_languages',
      9 => 'field_doc_owner',
      10 => 'field_doc_related_events',
      11 => 'field_doc_related_exhibitions',
      12 => 'field_doc_related_places',
      13 => 'field_doc_subjects',
      14 => 'field_doc_tags',
      15 => 'field_orig_key_cf_doclist_did',
      16 => 'field_bce',
      17 => 'path',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Legacy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-legacy field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_doc_legacy|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_object_details|node|documentation|form';
  $field_group->group_name = 'group_doc_object_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Object Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_doc_sort_title',
      1 => 'field_doc_foreign_title',
      2 => 'field_doc_alternate_titles',
      3 => 'field_doc_number_of_copies',
      4 => 'field_doc_dimensions',
      5 => 'field_doc_pages',
      6 => 'field_doc_page_info',
      7 => 'field_languages',
      8 => 'field_owner',
      9 => 'group_doc_includes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Object Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-object-details field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_doc_object_details|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_page_right|node|documentation|default';
  $field_group->group_name = 'group_doc_page_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Right',
    'weight' => '2',
    'children' => array(
      0 => 'body',
      1 => 'field_doc_alternate_titles',
      2 => 'title',
      3 => 'group_doc_stats',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-doc-page-right field-group-div large-8 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_page_right|node|documentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_related|node|documentation|form';
  $field_group->group_name = 'group_doc_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '3',
    'children' => array(
      0 => 'field_doc_related_links',
      1 => 'field_related_people_by_role',
      2 => 'field_related_events',
      3 => 'field_related_exhibitions',
      4 => 'field_related_places',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-related field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_doc_related|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_stats|node|documentation|default';
  $field_group->group_name = 'group_doc_stats';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_doc_page_right';
  $field_group->data = array(
    'label' => 'Doc Stats',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_object_type',
      1 => 'field_dates_note',
      2 => 'field_doc_pages',
      3 => 'document_author',
      4 => 'document_source',
      5 => 'group_doc_inline_stats',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Doc Stats',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-doc-stats field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_doc_stats|node|documentation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_internal|node|documentation|form';
  $field_group->group_name = 'group_internal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internal',
    'weight' => '4',
    'children' => array(
      0 => 'field_doc_internal_notes',
      1 => 'field_doc_accession_number',
      2 => 'field_doc_credit_copyright',
      3 => 'field_doc_date_digitization',
      4 => 'field_doc_internal_bitrate',
      5 => 'field_doc_internal_description',
      6 => 'field_doc_digitization',
      7 => 'field_doc_internal_filesize',
      8 => 'field_doc_internal_filetype',
      9 => 'field_doc_sample_rate',
      10 => 'field_filename_of_maste',
      11 => 'field_doc_orig_format',
      12 => 'field_internal_format_bitrate',
      13 => 'field_internal_format_filesize',
      14 => 'field_internal_format_filetype',
      15 => 'field_doc_internal_samplerate',
      16 => 'field_recording_digitized',
      17 => 'field_doc_location_master',
      18 => 'field_doc_location_derivatives',
      19 => 'field_doc_permission_auth',
      20 => 'field_filenames_of_derivatives',
      21 => 'field_digitized_by',
      22 => 'field_doc_internal_bit_depth',
      23 => 'field_doc_format_bit_depth',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Internal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-internal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_internal|node|documentation|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_left_grey|node|documentation|default';
  $field_group->group_name = 'group_left_grey';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'documentation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_doc_left_wrapper';
  $field_group->data = array(
    'label' => 'Left Grey',
    'weight' => '124',
    'children' => array(
      0 => 'field_doc_access_code',
      1 => 'access_code_restriction',
      2 => 'attached_media_link',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Left Grey',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-left-grey field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_left_grey|node|documentation|default'] = $field_group;

  return $export;
}
