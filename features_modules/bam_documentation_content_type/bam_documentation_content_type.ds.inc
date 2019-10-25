<?php
/**
 * @file
 * bam_documentation_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bam_documentation_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|documentation|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'documentation';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'access_code_restriction' => array(
      'weight' => '128',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'attached_media_link' => array(
      'weight' => '126',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'document_author' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'document_source' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_doc_object_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'TYPE',
          'lb-el' => 'strong',
          'lb-cl' => 'large-12',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-dates-note',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'large-12 weight-100',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_doc_number_of_copies' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'lb-cl' => 'left',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'large-12 clear-both',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'left',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_doc_dimensions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'lb-cl' => 'left',
          'ow' => TRUE,
          'ow-el' => 'div ',
          'ow-cl' => 'large-12 clear-both',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'left',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_doc_accession_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Accession Number',
        ),
      ),
    ),
    'field_doc_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'ul',
          'ow-cl' => '',
          'ow-def-cl' => FALSE,
          'ow-at' => 'data-orbit',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_dates_note' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'DATE',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-dates-note',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'weight-100',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_doc_pages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'NUMBER OF PAGES',
          'lb-el' => 'strong',
          'lb-cl' => 'large-12',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field-name-field-dates-note',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'large-12 weight-100',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_doc_page_info' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'lb-cl' => 'left',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'large-12 clear-both',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'left',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_languages' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'lb-cl' => 'left',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'large-12',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'left',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_subjects' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lb-cl' => 'heading',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'genre block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_doc_public_notes' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Notes',
          'lb-el' => 'strong',
          'lb-cl' => 'left',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'large-12 clear-both',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_doc_access_code' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Use Restriction',
          'lb-el' => 'strong',
        ),
      ),
    ),
  );
  $export['node|documentation|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|documentation|discover_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'documentation';
  $ds_fieldsetting->view_mode = 'discover_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|documentation|discover_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|documentation|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'documentation';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|documentation|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function bam_documentation_content_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'attached_media_link';
  $ds_field->label = 'Attached Media Link';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|doc_download_media-block_1',
    'block_render' => '1',
  );
  $export['attached_media_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'docmodal';
  $ds_field->label = 'DocModal';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<a class="button medium" style="width:100%;" href="#" data-reveal-id="docModal">
VIEW</a>',
      'format' => 'full_html',
    ),
    'use_token' => 0,
  );
  $export['docmodal'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'document_author';
  $ds_field->label = 'Document Author';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|document_author-block_1',
    'block_render' => '1',
  );
  $export['document_author'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'document_source';
  $ds_field->label = 'Document Source';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|document_author-block_2',
    'block_render' => '1',
  );
  $export['document_source'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bam_documentation_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|documentation|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'documentation';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_doc_image_container',
        1 => 'group_doc_left_wrapper',
        2 => 'group_doc_page_right',
        3 => 'title',
        4 => 'field_doc_alternate_titles',
        5 => 'body',
        6 => 'group_doc_stats',
        7 => 'document_author',
        8 => 'document_source',
        9 => 'field_dates_note',
        10 => 'field_doc_object_type',
        11 => 'field_doc_pages',
        12 => 'group_doc_inline_stats',
        13 => 'field_doc_images',
        14 => 'field_doc_accession_number',
        15 => 'field_doc_languages',
        16 => 'field_languages',
        17 => 'field_doc_page_info',
        18 => 'field_doc_dimensions',
        19 => 'field_doc_number_of_copies',
        20 => 'field_doc_public_notes',
        21 => 'group_left_grey',
        22 => 'attached_media_link',
        23 => 'field_doc_access_code',
        24 => 'access_code_restriction',
        25 => 'field_subjects',
      ),
    ),
    'fields' => array(
      'group_doc_image_container' => 'ds_content',
      'group_doc_left_wrapper' => 'ds_content',
      'group_doc_page_right' => 'ds_content',
      'title' => 'ds_content',
      'field_doc_alternate_titles' => 'ds_content',
      'body' => 'ds_content',
      'group_doc_stats' => 'ds_content',
      'document_author' => 'ds_content',
      'document_source' => 'ds_content',
      'field_dates_note' => 'ds_content',
      'field_doc_object_type' => 'ds_content',
      'field_doc_pages' => 'ds_content',
      'group_doc_inline_stats' => 'ds_content',
      'field_doc_images' => 'ds_content',
      'field_doc_accession_number' => 'ds_content',
      'field_doc_languages' => 'ds_content',
      'field_languages' => 'ds_content',
      'field_doc_page_info' => 'ds_content',
      'field_doc_dimensions' => 'ds_content',
      'field_doc_number_of_copies' => 'ds_content',
      'field_doc_public_notes' => 'ds_content',
      'group_left_grey' => 'ds_content',
      'attached_media_link' => 'ds_content',
      'field_doc_access_code' => 'ds_content',
      'access_code_restriction' => 'ds_content',
      'field_subjects' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|documentation|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|documentation|discover_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'documentation';
  $ds_layout->view_mode = 'discover_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_doc_images',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_doc_images' => 'ds_content',
      'body' => 'ds_content',
    ),
    'limit' => array(
      'field_doc_images' => '1',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|documentation|discover_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|documentation|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'documentation';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_doc_images',
        1 => 'title',
      ),
    ),
    'fields' => array(
      'field_doc_images' => 'ds_content',
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '0',
    'page_option_title' => '',
  );
  $export['node|documentation|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function bam_documentation_content_type_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'discover_block';
  $ds_view_mode->label = 'Discover Block';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['discover_block'] = $ds_view_mode;

  return $export;
}
