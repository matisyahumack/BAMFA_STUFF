<?php
/**
 * @file
 * bam_art_object_content_type.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function bam_art_object_content_type_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ao_fields|node|art_object|form';
  $field_group->group_name = 'group_ao_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '0',
    'children' => array(
      0 => 'field_ao_images',
      1 => 'field_ao_itemclass_term',
      2 => 'field_dates',
      3 => 'field_dates_note',
      4 => 'field_dates_circa',
      5 => 'field_region_country',
      6 => 'field_region_other',
      7 => 'field_ao_accession_number',
      8 => 'title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Basic Info',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ao_fields|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ao_legacy|node|art_object|form';
  $field_group->group_name = 'group_ao_legacy';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Legacy',
    'weight' => '6',
    'children' => array(
      0 => 'body',
      1 => 'field_ao_attached_files',
      2 => 'field_ao_links',
      3 => 'field_ao_rich_media_files',
      4 => 'field_ao_film_object_properties',
      5 => 'field_dates_year1',
      6 => 'field_dates_year2',
      7 => 'field_ao_additional_texts',
      8 => 'field_ao_performers_text',
      9 => 'field_audiences',
      10 => 'field_tags',
      11 => 'field_site_visitor_tags',
      12 => 'field_field_ao_creditline',
      13 => 'field_non_countries',
      14 => 'field_ao_credit_line',
      15 => 'field_credits_text',
      16 => 'locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Legacy',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ao-legacy field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ao_legacy|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ao_objectdetails|node|art_object|form';
  $field_group->group_name = 'group_ao_objectdetails';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Object Details',
    'weight' => '2',
    'children' => array(
      0 => 'field_ao_alternate_titles',
      1 => 'field_ao_dimensions',
      2 => 'field_ao_edition',
      3 => 'field_ao_foreign_title',
      4 => 'field_ao_original_title',
      5 => 'field_ao_materials',
      6 => 'field_owner',
      7 => 'field_ao_creditline',
      8 => 'field_attach_trailer',
      9 => 'field_ao_based_on',
      10 => 'group_artobj_film',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Object Details',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ao-objectdetails field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ao_objectdetails|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ao_related|node|art_object|form';
  $field_group->group_name = 'group_ao_related';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Related',
    'weight' => '4',
    'children' => array(
      0 => 'field_ao_related_links',
      1 => 'field_related_people_by_role',
      2 => 'field_related_art_objects',
      3 => 'field_related_exhibitions',
      4 => 'field_related_places',
      5 => 'field_related_documentation',
      6 => 'field_event_related_products',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Related',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-ao-related field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_ao_related|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_art_object_more|node|art_object|default';
  $field_group->group_name = 'group_art_object_more';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'More',
    'weight' => '23',
    'children' => array(
      0 => 'field_ao_attached_files',
      1 => 'field_ao_edition',
      2 => 'field_ao_hashtag',
      3 => 'field_ao_internal_notes',
      4 => 'field_ao_links',
      5 => 'field_ao_related_links',
      6 => 'field_ao_rich_media_files',
      7 => 'field_ao_sort_title',
      8 => 'field_ao_film_object_properties',
      9 => 'field_ao_format',
      10 => 'field_ao_original_title',
      11 => 'field_orig_key_fm',
      12 => 'field_dates',
      13 => 'field_dates_year1',
      14 => 'field_dates_year2',
      15 => 'field_dates_note',
      16 => 'field_dates_circa',
      17 => 'field_orig_key_cf',
      18 => 'field_ao_awards',
      19 => 'field_ao_frames_per_second',
      20 => 'field_languages',
      21 => 'field_ao_performers_text',
      22 => 'field_audiences',
      23 => 'field_related_art_objects',
      24 => 'field_related_exhibitions',
      25 => 'field_related_documentation',
      26 => 'field_tags',
      27 => 'field_site_visitor_tags',
      28 => 'field_ao_running_time',
      29 => 'field_ao_ages',
      30 => 'field_ao_subtitles',
      31 => 'field_non_countries',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'More',
      'instance_settings' => array(
        'classes' => 'group-art-object-more field-group-accordion large-12',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_art_object_more|node|art_object|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_desc|node|art_object|form';
  $field_group->group_name = 'group_artobj_desc';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '1',
    'children' => array(
      0 => 'field_ao_hashtag',
      1 => 'field_ao_period',
      2 => 'field_subjects',
      3 => 'field_pull_quote',
      4 => 'field_ao_genre',
      5 => 'field_ao_short_summary',
      6 => 'field_field_ao_curator_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-desc field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_desc|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_files|node|art_object|form';
  $field_group->group_name = 'group_artobj_files';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Attached Files',
    'weight' => '4',
    'children' => array(
      0 => 'field_ao_attached_files',
      1 => 'field_ao_rich_media_files',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Attached Files',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-files field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_files|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_film|node|art_object|form';
  $field_group->group_name = 'group_artobj_film';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_ao_objectdetails';
  $field_group->data = array(
    'label' => 'Film',
    'weight' => '76',
    'children' => array(
      0 => 'field_ao_format',
      1 => 'field_ao_awards',
      2 => 'field_ao_frames_per_second',
      3 => 'field_ao_credits_text',
      4 => 'field_languages',
      5 => 'field_ao_running_time',
      6 => 'field_ao_ages',
      7 => 'field_ao_subtitles',
      8 => 'field_ao_languages',
      9 => 'field_ao_color',
      10 => 'field_ao_silent',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Film',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-film field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_film|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_internal|node|art_object|form';
  $field_group->group_name = 'group_artobj_internal';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Internal',
    'weight' => '5',
    'children' => array(
      0 => 'field_ao_internal_notes',
      1 => 'field_orig_key_fm',
      2 => 'field_orig_key_cf',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Internal',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-internal field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_internal|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_meet|node|art_object|form';
  $field_group->group_name = 'group_artobj_meet';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Meet & Discover',
    'weight' => '6',
    'children' => array(
      0 => 'field_related_people_by_role',
      1 => 'field_related_documentation',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Meet & Discover',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-meet field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_meet|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_sidebar|node|art_object|form';
  $field_group->group_name = 'group_artobj_sidebar';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Sidebar',
    'weight' => '5',
    'children' => array(
      0 => 'field_ao_related_links',
      1 => 'field_related_art_objects',
      2 => 'field_related_exhibitions',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Sidebar',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-sidebar field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_sidebar|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_artobj_tags|node|art_object|form';
  $field_group->group_name = 'group_artobj_tags';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Tags',
    'weight' => '3',
    'children' => array(
      0 => 'field_ao_hashtag',
      1 => 'field_ao_ages',
      2 => 'field_audiences',
      3 => 'field_tags',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-artobj-tags field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_artobj_tags|node|art_object|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fo_image_container|node|art_object|film_object';
  $field_group->group_name = 'group_fo_image_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'film_object';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_ao_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Container',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-fo-image-container field-group-div large-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fo_image_container|node|art_object|film_object'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fo_page_left_2|node|art_object|film_object';
  $field_group->group_name = 'group_fo_page_left_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'film_object';
  $field_group->parent_name = 'group_fo_page_left';
  $field_group->data = array(
    'label' => 'Page Left',
    'weight' => '121',
    'children' => array(
      0 => 'field_ao_itemclass_term',
      1 => 'field_ao_accession_number',
      2 => 'field_owner',
      3 => 'field_related_places',
      4 => 'field_ao_creditline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Left',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-fo-page-left-2 field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fo_page_left_2|node|art_object|film_object'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fo_page_left|node|art_object|film_object';
  $field_group->group_name = 'group_fo_page_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'film_object';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Left Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_subjects',
      1 => 'field_ao_genre',
      2 => 'shop',
      3 => 'support_promo',
      4 => 'view_item_promo',
      5 => 'share_this',
      6 => 'group_fo_page_left_2',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Left Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-fo-page-left field-group-div large-4 left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fo_page_left|node|art_object|film_object'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_fo_page_right|node|art_object|film_object';
  $field_group->group_name = 'group_fo_page_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'film_object';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Right',
    'weight' => '6',
    'children' => array(
      0 => 'field_ao_alternate_titles',
      1 => 'field_ao_foreign_title',
      2 => 'field_region_other',
      3 => 'field_ao_awards',
      4 => 'field_ao_credits_text',
      5 => 'field_field_ao_curator_notes',
      6 => 'ao_stats',
      7 => 'film_director',
      8 => 'film_related_people',
      9 => 'film_stats',
      10 => 'more_descriptions',
      11 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Right',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-fo-page-right field-group-div large-8 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_fo_page_right|node|art_object|film_object'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image_container|node|art_object|default';
  $field_group->group_name = 'group_image_container';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Image Container',
    'weight' => '0',
    'children' => array(
      0 => 'field_ao_images',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Image Container',
      'instance_settings' => array(
        'classes' => 'group-image-container field-group-div large-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'id' => 'node_art_object_full_group_image_container',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_image_container|node|art_object|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_object_page_left|node|art_object|default';
  $field_group->group_name = 'group_object_page_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_page_left_2';
  $field_group->data = array(
    'label' => 'Page Left',
    'weight' => '6',
    'children' => array(
      0 => 'field_ao_itemclass_term',
      1 => 'field_ao_accession_number',
      2 => 'field_owner',
      3 => 'field_related_places',
      4 => 'field_ao_creditline',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Left',
      'instance_settings' => array(
        'id' => 'node_art_object_full_group_object_page_left',
        'classes' => 'group-object-page-left field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_object_page_left|node|art_object|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_object_page_right|node|art_object|default';
  $field_group->group_name = 'group_object_page_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Right',
    'weight' => '3',
    'children' => array(
      0 => 'art_object_content',
      1 => 'film_objects_content',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Right',
      'instance_settings' => array(
        'id' => 'node_art_object_full_group_object_page_right',
        'classes' => 'group-object-page-right field-group-div large-8 columns',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_object_page_right|node|art_object|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_page_left_2|node|art_object|default';
  $field_group->group_name = 'group_page_left_2';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'art_object';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Page Left Wrapper',
    'weight' => '1',
    'children' => array(
      0 => 'field_ao_period',
      1 => 'field_subjects',
      2 => 'field_ao_genre',
      3 => 'support_promo',
      4 => 'view_item_promo',
      5 => 'share_this',
      6 => 'group_object_page_left',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Page Left Wrapper',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-page-left-2 field-group-div large-4 left',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_page_left_2|node|art_object|default'] = $field_group;

  return $export;
}
