<?php
/**
 * @file
 * bam_art_object_content_type.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function bam_art_object_content_type_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_ao_curator_authors_roles|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_ao_curator_authors_roles';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_ao_curator_person' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'description-person',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_ao_curator_authors_roles|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_field_ao_curator_notes|ao_curator_notes';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_field_ao_curator_notes';
  $ds_fieldsetting->view_mode = 'ao_curator_notes';
  $ds_fieldsetting->settings = array(
    'field_ao_curator_description' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'forza',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_ao_curator_authors_roles' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'large-12 text-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_field_ao_curator_notes|ao_curator_notes'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_pull_quote|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_pull_quote';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_pull_quote_text' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'p',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_pull_quote_source' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'text-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_pull_quote_author' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'text-right',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_pull_quote|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_related_people_by_role|default';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_related_people_by_role';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_related_people_role' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
        ),
      ),
    ),
  );
  $export['field_collection_item|field_related_people_by_role|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'field_collection_item|field_related_people_by_role|film_object';
  $ds_fieldsetting->entity_type = 'field_collection_item';
  $ds_fieldsetting->bundle = 'field_related_people_by_role';
  $ds_fieldsetting->view_mode = 'film_object';
  $ds_fieldsetting->settings = array(
    'field_related_people_role' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'capitalize',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['field_collection_item|field_related_people_by_role|film_object'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art_object|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art_object';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'support_promo' => array(
      'weight' => '12',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'view_item_promo' => array(
      'weight' => '8',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'art_object_content' => array(
      'weight' => '23',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'film_objects_content' => array(
      'weight' => '24',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_this' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ao_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<a href="#" data-reveal-id="aoModal">',
          'suffix' => '</a>',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'orbit-slides-container orbit-padding',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => 'data-orbit',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_ao_period' => array(
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
    'field_ao_itemclass_term' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Object Type',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_accession_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_subjects' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Subject',
          'lb-el' => 'h4',
          'lb-cl' => 'heading',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'genre block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_owner' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Collection',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_related_places' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Location',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_creditline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Credit',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_genre' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lb-cl' => 'heading',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'genre block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|art_object|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art_object|film_object';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art_object';
  $ds_fieldsetting->view_mode = 'film_object';
  $ds_fieldsetting->settings = array(
    'ao_stats' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'curator_notes_additional' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'film_director' => array(
      'weight' => '34',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'clear-both',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'div',
          'fi-cl' => 'forza',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'film_related_people' => array(
      'weight' => '39',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'film_stats' => array(
      'weight' => '40',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'large-12 clear-both',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'shop' => array(
      'weight' => '127',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'support_promo' => array(
      'weight' => '126',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'view_item_promo' => array(
      'weight' => '123',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'more_descriptions' => array(
      'weight' => '44',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'awards' => array(
      'weight' => '41',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'share_this' => array(
      'weight' => '122',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '30',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_ao_alternate_titles' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'left',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_foreign_title' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'left',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'prefix' => '<a href="#" data-reveal-id="aoModal">',
          'suffix' => '</a>',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'orbit-slides-container orbit-padding',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => 'data-orbit',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
    'field_ao_itemclass_term' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Object Type',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_accession_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_subjects' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lb-cl' => 'heading',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'genre block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_owner' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Collection',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_related_places' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Location',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_creditline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Credit',
          'lb-el' => 'strong',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'psuedo-list',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_ao_genre' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h4',
          'lb-cl' => 'heading',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'genre block',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|art_object|film_object'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|art_object|image_modal';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'art_object';
  $ds_fieldsetting->view_mode = 'image_modal';
  $ds_fieldsetting->settings = array(
    'field_ao_images' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'fis' => TRUE,
          'fis-el' => 'ul',
          'fis-cl' => '',
          'fis-at' => 'data-orbit',
          'fis-def-at' => FALSE,
          'fi' => TRUE,
          'fi-el' => 'li',
          'fi-cl' => '',
          'fi-at' => '',
          'fi-def-at' => FALSE,
          'fi-odd-even' => FALSE,
        ),
      ),
    ),
  );
  $export['node|art_object|image_modal'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'taxonomy_term|itemclass|default';
  $ds_fieldsetting->entity_type = 'taxonomy_term';
  $ds_fieldsetting->bundle = 'itemclass';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['taxonomy_term|itemclass|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function bam_art_object_content_type_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'ao_stats';
  $ds_field->label = 'AO Stats';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|art_object_stats-block_1',
    'block_render' => '1',
  );
  $export['ao_stats'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'art_object_content';
  $ds_field->label = 'Art Object Content';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|art_objects-block_1',
    'block_render' => '1',
  );
  $export['art_object_content'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'film_director';
  $ds_field->label = 'Film Director';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|ao_film_director-block_1',
    'block_render' => '1',
  );
  $export['film_director'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'film_objects_content';
  $ds_field->label = 'Film Objects Content';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|film_objects-block_1',
    'block_render' => '1',
  );
  $export['film_objects_content'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'film_related_people';
  $ds_field->label = 'Film Related People';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|ao_film_people-block_1',
    'block_render' => '1',
  );
  $export['film_related_people'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'film_stats';
  $ds_field->label = 'Film Stats';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|ao_film_stats-block_1',
    'block_render' => '1',
  );
  $export['film_stats'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'more_descriptions';
  $ds_field->label = 'More Descriptions';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'views|ao_more_curator_notes-block_1',
    'block_render' => '1',
  );
  $export['more_descriptions'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'support_promo';
  $ds_field->label = 'Support Promo';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|21',
    'block_render' => '1',
  );
  $export['support_promo'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'view_item_promo';
  $ds_field->label = 'View Item Promo';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'block' => 'block|20',
    'block_render' => '1',
  );
  $export['view_item_promo'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function bam_art_object_content_type_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_ao_curator_authors_roles|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_ao_curator_authors_roles';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ao_curator_person',
      ),
    ),
    'fields' => array(
      'field_ao_curator_person' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'class="large-12 text-right"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_ao_curator_authors_roles|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_field_ao_curator_notes|ao_curator_notes';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_field_ao_curator_notes';
  $ds_layout->view_mode = 'ao_curator_notes';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ao_film_series_exhibition',
        1 => 'field_ao_curator_description',
        2 => 'field_ao_curator_authors_roles',
      ),
    ),
    'fields' => array(
      'field_ao_film_series_exhibition' => 'ds_content',
      'field_ao_curator_description' => 'ds_content',
      'field_ao_curator_authors_roles' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
      'ds_hidden' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => 'class="forza"',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['field_collection_item|field_field_ao_curator_notes|ao_curator_notes'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_pull_quote|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_pull_quote';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_pull_quote_text',
        1 => 'field_pull_quote_author',
        2 => 'field_pull_quote_source',
      ),
    ),
    'fields' => array(
      'field_pull_quote_text' => 'ds_content',
      'field_pull_quote_author' => 'ds_content',
      'field_pull_quote_source' => 'ds_content',
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
  );
  $export['field_collection_item|field_pull_quote|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_related_people_by_role|default';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_related_people_by_role';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_related_people_person',
        1 => 'field_related_people_role',
      ),
    ),
    'fields' => array(
      'field_related_people_person' => 'ds_content',
      'field_related_people_role' => 'ds_content',
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
  );
  $export['field_collection_item|field_related_people_by_role|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_related_people_by_role|film_object';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_related_people_by_role';
  $ds_layout->view_mode = 'film_object';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_related_people_role',
        1 => 'field_related_people_person',
      ),
    ),
    'fields' => array(
      'field_related_people_role' => 'ds_content',
      'field_related_people_person' => 'ds_content',
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
  );
  $export['field_collection_item|field_related_people_by_role|film_object'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_object|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_object';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_image_container',
        1 => 'group_page_left_2',
        2 => 'group_object_page_right',
        4 => 'group_object_page_left',
        5 => 'share_this',
        6 => 'view_item_promo',
        7 => 'field_ao_genre',
        8 => 'field_subjects',
        9 => 'field_ao_period',
        10 => 'support_promo',
        11 => 'field_ao_images',
        12 => 'art_object_content',
        13 => 'film_objects_content',
        14 => 'field_ao_itemclass_term',
        15 => 'field_related_places',
        16 => 'field_owner',
        17 => 'field_ao_creditline',
        18 => 'field_ao_accession_number',
      ),
      'ds_hidden' => array(
        3 => 'field_region_country',
      ),
    ),
    'fields' => array(
      'group_image_container' => 'ds_content',
      'group_page_left_2' => 'ds_content',
      'group_object_page_right' => 'ds_content',
      'field_region_country' => 'ds_hidden',
      'group_object_page_left' => 'ds_content',
      'share_this' => 'ds_content',
      'view_item_promo' => 'ds_content',
      'field_ao_genre' => 'ds_content',
      'field_subjects' => 'ds_content',
      'field_ao_period' => 'ds_content',
      'support_promo' => 'ds_content',
      'field_ao_images' => 'ds_content',
      'art_object_content' => 'ds_content',
      'film_objects_content' => 'ds_content',
      'field_ao_itemclass_term' => 'ds_content',
      'field_related_places' => 'ds_content',
      'field_owner' => 'ds_content',
      'field_ao_creditline' => 'ds_content',
      'field_ao_accession_number' => 'ds_content',
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
  $export['node|art_object|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_object|film_object';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_object';
  $ds_layout->view_mode = 'film_object';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_fo_image_container',
        1 => 'group_fo_page_left',
        2 => 'group_fo_page_right',
        5 => 'field_ao_images',
        8 => 'field_ao_itemclass_term',
        9 => 'field_related_places',
        10 => 'field_owner',
        11 => 'field_ao_creditline',
        12 => 'field_ao_accession_number',
        13 => 'title',
        14 => 'field_ao_alternate_titles',
        15 => 'field_ao_foreign_title',
        16 => 'film_director',
        17 => 'field_region_other',
        18 => 'ao_stats',
        19 => 'field_ao_credits_text',
        20 => 'film_related_people',
        21 => 'film_stats',
        24 => 'field_ao_awards',
        25 => 'field_field_ao_curator_notes',
        26 => 'more_descriptions',
        27 => 'group_fo_page_left_2',
        28 => 'share_this',
        29 => 'view_item_promo',
        30 => 'field_ao_genre',
        31 => 'field_subjects',
        32 => 'support_promo',
        33 => 'shop',
      ),
      'ds_hidden' => array(
        3 => 'curator_notes_additional',
        4 => 'field_pull_quote',
        6 => 'body',
        7 => 'field_region_country',
        22 => 'field_awards',
        23 => 'awards',
      ),
    ),
    'fields' => array(
      'group_fo_image_container' => 'ds_content',
      'group_fo_page_left' => 'ds_content',
      'group_fo_page_right' => 'ds_content',
      'curator_notes_additional' => 'ds_hidden',
      'field_pull_quote' => 'ds_hidden',
      'field_ao_images' => 'ds_content',
      'body' => 'ds_hidden',
      'field_region_country' => 'ds_hidden',
      'field_ao_itemclass_term' => 'ds_content',
      'field_related_places' => 'ds_content',
      'field_owner' => 'ds_content',
      'field_ao_creditline' => 'ds_content',
      'field_ao_accession_number' => 'ds_content',
      'title' => 'ds_content',
      'field_ao_alternate_titles' => 'ds_content',
      'field_ao_foreign_title' => 'ds_content',
      'film_director' => 'ds_content',
      'field_region_other' => 'ds_content',
      'ao_stats' => 'ds_content',
      'field_ao_credits_text' => 'ds_content',
      'film_related_people' => 'ds_content',
      'film_stats' => 'ds_content',
      'field_awards' => 'ds_hidden',
      'awards' => 'ds_hidden',
      'field_ao_awards' => 'ds_content',
      'field_field_ao_curator_notes' => 'ds_content',
      'more_descriptions' => 'ds_content',
      'group_fo_page_left_2' => 'ds_content',
      'share_this' => 'ds_content',
      'view_item_promo' => 'ds_content',
      'field_ao_genre' => 'ds_content',
      'field_subjects' => 'ds_content',
      'support_promo' => 'ds_content',
      'shop' => 'ds_content',
    ),
    'limit' => array(
      'field_field_ao_curator_notes' => '1',
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
  $export['node|art_object|film_object'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_object|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_object';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_ao_fields',
        1 => 'group_artobj_desc',
        2 => 'group_ao_objectdetails',
        3 => 'group_ao_related',
        4 => 'group_artobj_internal',
        5 => 'group_ao_legacy',
        18 => 'field_ao_itemclass_term',
        20 => 'title',
        22 => 'field_dates',
        25 => 'field_dates_note',
        27 => 'field_dates_circa',
        28 => 'field_region_country',
        30 => 'field_region_other',
        32 => 'field_ao_accession_number',
        34 => 'field_ao_related_links',
        35 => 'field_ao_images',
        36 => 'field_related_art_objects',
        37 => 'field_related_exhibitions',
        38 => 'field_related_people_by_role',
        39 => 'field_related_documentation',
        40 => 'field_related_places',
        41 => 'field_event_related_products',
        42 => 'field_ao_original_title',
        43 => 'field_ao_alternate_titles',
        44 => 'field_ao_foreign_title',
        45 => 'field_ao_materials',
        46 => 'field_ao_dimensions',
        47 => 'field_owner',
        48 => 'field_ao_edition',
        49 => 'field_ao_film_object_properties',
        50 => 'field_ao_based_on',
        51 => 'field_ao_format',
        52 => 'field_ao_creditline',
        53 => 'field_audiences',
        54 => 'field_ao_color',
        55 => 'field_ao_performers_text',
        56 => 'field_attach_trailer',
        57 => 'group_artobj_film',
        58 => 'field_ao_silent',
        59 => 'field_ao_attached_files',
        60 => 'field_ao_running_time',
        61 => 'field_ao_rich_media_files',
        62 => 'body',
        63 => 'field_ao_ages',
        64 => 'field_ao_additional_texts',
        65 => 'field_ao_frames_per_second',
        66 => 'field_tags',
        67 => 'field_ao_languages',
        68 => 'field_languages',
        69 => 'field_site_visitor_tags',
        70 => 'field_ao_links',
        71 => 'field_ao_subtitles',
        72 => 'field_ao_awards',
        73 => 'field_non_countries',
        74 => 'locations',
        75 => 'field_ao_credits_text',
        76 => 'field_dates_year1',
        77 => 'field_dates_year2',
        78 => 'field_ao_short_summary',
        79 => 'field_field_ao_curator_notes',
        80 => 'field_pull_quote',
        81 => 'field_ao_hashtag',
        82 => 'field_subjects',
        83 => 'field_ao_genre',
        84 => 'field_ao_period',
        85 => 'field_ao_internal_notes',
        86 => 'field_orig_key_cf',
        87 => 'field_orig_key_fm',
        88 => 'field_ao_credit_line',
        89 => 'field_field_ao_creditline',
        90 => 'field_credits_text',
      ),
      'hidden' => array(
        6 => 'field_accession_number',
        7 => 'field_additional_texts',
        8 => 'field_ao_audiences',
        9 => 'field_awards',
        10 => 'field_ao_people_text',
        11 => 'field_ao_sort_title',
        12 => 'field_frames_per_second',
        13 => 'field_item_class',
        14 => 'field_materials',
        15 => 'field_ao_owner',
        16 => 'field_performers_text',
        17 => 'field_ao_related_art_objects',
        19 => 'field_ao_related_exhibitions',
        21 => 'field_ao_related_places',
        23 => 'field_ao_site_visitor_tags',
        24 => 'field_ao_subjects',
        26 => 'field_ao_tags',
        29 => 'field_orig_key_cf_filmlist_fid',
        31 => 'field_ao_related_documentation',
        33 => 'path',
        91 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_ao_fields' => 'ds_content',
      'group_artobj_desc' => 'ds_content',
      'group_ao_objectdetails' => 'ds_content',
      'group_ao_related' => 'ds_content',
      'group_artobj_internal' => 'ds_content',
      'group_ao_legacy' => 'ds_content',
      'field_accession_number' => 'hidden',
      'field_additional_texts' => 'hidden',
      'field_ao_audiences' => 'hidden',
      'field_awards' => 'hidden',
      'field_ao_people_text' => 'hidden',
      'field_ao_sort_title' => 'hidden',
      'field_frames_per_second' => 'hidden',
      'field_item_class' => 'hidden',
      'field_materials' => 'hidden',
      'field_ao_owner' => 'hidden',
      'field_performers_text' => 'hidden',
      'field_ao_related_art_objects' => 'hidden',
      'field_ao_itemclass_term' => 'ds_content',
      'field_ao_related_exhibitions' => 'hidden',
      'title' => 'ds_content',
      'field_ao_related_places' => 'hidden',
      'field_dates' => 'ds_content',
      'field_ao_site_visitor_tags' => 'hidden',
      'field_ao_subjects' => 'hidden',
      'field_dates_note' => 'ds_content',
      'field_ao_tags' => 'hidden',
      'field_dates_circa' => 'ds_content',
      'field_region_country' => 'ds_content',
      'field_orig_key_cf_filmlist_fid' => 'hidden',
      'field_region_other' => 'ds_content',
      'field_ao_related_documentation' => 'hidden',
      'field_ao_accession_number' => 'ds_content',
      'path' => 'hidden',
      'field_ao_related_links' => 'ds_content',
      'field_ao_images' => 'ds_content',
      'field_related_art_objects' => 'ds_content',
      'field_related_exhibitions' => 'ds_content',
      'field_related_people_by_role' => 'ds_content',
      'field_related_documentation' => 'ds_content',
      'field_related_places' => 'ds_content',
      'field_event_related_products' => 'ds_content',
      'field_ao_original_title' => 'ds_content',
      'field_ao_alternate_titles' => 'ds_content',
      'field_ao_foreign_title' => 'ds_content',
      'field_ao_materials' => 'ds_content',
      'field_ao_dimensions' => 'ds_content',
      'field_owner' => 'ds_content',
      'field_ao_edition' => 'ds_content',
      'field_ao_film_object_properties' => 'ds_content',
      'field_ao_based_on' => 'ds_content',
      'field_ao_format' => 'ds_content',
      'field_ao_creditline' => 'ds_content',
      'field_audiences' => 'ds_content',
      'field_ao_color' => 'ds_content',
      'field_ao_performers_text' => 'ds_content',
      'field_attach_trailer' => 'ds_content',
      'group_artobj_film' => 'ds_content',
      'field_ao_silent' => 'ds_content',
      'field_ao_attached_files' => 'ds_content',
      'field_ao_running_time' => 'ds_content',
      'field_ao_rich_media_files' => 'ds_content',
      'body' => 'ds_content',
      'field_ao_ages' => 'ds_content',
      'field_ao_additional_texts' => 'ds_content',
      'field_ao_frames_per_second' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_ao_languages' => 'ds_content',
      'field_languages' => 'ds_content',
      'field_site_visitor_tags' => 'ds_content',
      'field_ao_links' => 'ds_content',
      'field_ao_subtitles' => 'ds_content',
      'field_ao_awards' => 'ds_content',
      'field_non_countries' => 'ds_content',
      'locations' => 'ds_content',
      'field_ao_credits_text' => 'ds_content',
      'field_dates_year1' => 'ds_content',
      'field_dates_year2' => 'ds_content',
      'field_ao_short_summary' => 'ds_content',
      'field_field_ao_curator_notes' => 'ds_content',
      'field_pull_quote' => 'ds_content',
      'field_ao_hashtag' => 'ds_content',
      'field_subjects' => 'ds_content',
      'field_ao_genre' => 'ds_content',
      'field_ao_period' => 'ds_content',
      'field_ao_internal_notes' => 'ds_content',
      'field_orig_key_cf' => 'ds_content',
      'field_orig_key_fm' => 'ds_content',
      'field_ao_credit_line' => 'ds_content',
      'field_field_ao_creditline' => 'ds_content',
      'field_credits_text' => 'ds_content',
      '_add_existing_field' => 'hidden',
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
  );
  $export['node|art_object|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_object|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_object';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_image_container',
        1 => 'group_page_left_2',
        2 => 'group_object_page_right',
        4 => 'group_object_page_left',
        5 => 'share_this',
        6 => 'view_item_promo',
        7 => 'field_ao_period',
        8 => 'title',
        9 => 'field_ao_alternate_titles',
        10 => 'field_ao_foreign_title',
        11 => 'support_promo',
        12 => 'field_ao_people_text',
        13 => 'shop',
        14 => 'field_ao_images',
        15 => 'field_related_people_by_role',
        16 => 'ao_stats',
        17 => 'field_pull_quote',
        18 => 'field_field_ao_curator_notes',
        19 => 'curator_notes_1st',
        20 => 'curator_notes_additional',
        21 => 'field_ao_additional_texts',
        22 => 'body',
        23 => 'more_descriptions',
        24 => 'field_ao_itemclass_term',
        25 => 'field_related_places',
        26 => 'field_owner',
        27 => 'field_ao_creditline',
        28 => 'field_ao_accession_number',
      ),
      'ds_hidden' => array(
        3 => 'field_region_country',
      ),
    ),
    'fields' => array(
      'group_image_container' => 'ds_content',
      'group_page_left_2' => 'ds_content',
      'group_object_page_right' => 'ds_content',
      'field_region_country' => 'ds_hidden',
      'group_object_page_left' => 'ds_content',
      'share_this' => 'ds_content',
      'view_item_promo' => 'ds_content',
      'field_ao_period' => 'ds_content',
      'title' => 'ds_content',
      'field_ao_alternate_titles' => 'ds_content',
      'field_ao_foreign_title' => 'ds_content',
      'support_promo' => 'ds_content',
      'field_ao_people_text' => 'ds_content',
      'shop' => 'ds_content',
      'field_ao_images' => 'ds_content',
      'field_related_people_by_role' => 'ds_content',
      'ao_stats' => 'ds_content',
      'field_pull_quote' => 'ds_content',
      'field_field_ao_curator_notes' => 'ds_content',
      'curator_notes_1st' => 'ds_content',
      'curator_notes_additional' => 'ds_content',
      'field_ao_additional_texts' => 'ds_content',
      'body' => 'ds_content',
      'more_descriptions' => 'ds_content',
      'field_ao_itemclass_term' => 'ds_content',
      'field_related_places' => 'ds_content',
      'field_owner' => 'ds_content',
      'field_ao_creditline' => 'ds_content',
      'field_ao_accession_number' => 'ds_content',
    ),
    'limit' => array(
      'field_field_ao_curator_notes' => '1',
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
  $export['node|art_object|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|art_object|image_modal';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'art_object';
  $ds_layout->view_mode = 'image_modal';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_ao_images',
      ),
    ),
    'fields' => array(
      'field_ao_images' => 'ds_content',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
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
  $export['node|art_object|image_modal'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|person|film_object';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'person';
  $ds_layout->view_mode = 'film_object';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_person_nationality_text',
        2 => 'field_person_birthplace_text',
        3 => 'field_dates',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_person_nationality_text' => 'ds_content',
      'field_person_birthplace_text' => 'ds_content',
      'field_dates' => 'ds_content',
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
  $export['node|person|film_object'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|itemclass|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'itemclass';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|itemclass|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'taxonomy_term|roles|default';
  $ds_layout->entity_type = 'taxonomy_term';
  $ds_layout->bundle = 'roles';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'description',
      ),
    ),
    'fields' => array(
      'description' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['taxonomy_term|roles|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function bam_art_object_content_type_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'ao_curator_notes';
  $ds_view_mode->label = 'AO Curator Notes';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
  );
  $export['ao_curator_notes'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'film_object';
  $ds_view_mode->label = 'Film Object';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['film_object'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'image_modal';
  $ds_view_mode->label = 'Image Modal';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['image_modal'] = $ds_view_mode;

  return $export;
}
