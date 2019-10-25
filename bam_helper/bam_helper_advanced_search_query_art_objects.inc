<?php 

/**
 * Callback function to create a form.
 */
function bam_helper_advanced_search_query_art_objects($form, &$form_state, $account = NULL) {

	$form['title'] = array(
	  '#type' => 'item',
	  '#title' => t('Search Art Objects'),
	);
	$form['title']['#prefix'] = '<h2>';
	$form['title']['#suffix'] = '</h2>';

  $form['keyword'] = array(
    '#type'          => 'textfield',
    '#title'         => t("Keyword(s)"),
    '#default_value' => '',
    '#size'          => 20,
    '#required'      => FALSE,
    '#description'   => t(''),
    '#attributes'    => array(
      'placeholder' => t('Title, name, etc.'),
    ),
  );

  $vocabulary = taxonomy_vocabulary_machine_name_load('nations');
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  $nations = array();
  $nations['all'] = 'All';
  foreach ($terms as $key => $value) {
    $term_name = $value->name;
    $nations[$key] = $term_name;
  }
  $form['field_region_country'] = array(
   '#type' => 'select',
   '#title' => t('Country'),
   '#options' => $nations,
   '#default_value' => '',
   );

  $vocabulary2 = taxonomy_vocabulary_machine_name_load('itemclass');
  $terms2 = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary2->vid));
  $itemclass = array();
  $itemclass['all'] = 'All';
  foreach ($terms2 as $key2 => $value2) {
    $term_name2 = $value2->name;
    $itemclass[$key2] = $term_name2;
  }
  $form['itemclass'] = array(
   '#type' => 'select',
   '#title' => t('Type'),
   '#options' => $itemclass,
   '#default_value' => '',
   );

  $vocabulary4 = taxonomy_vocabulary_machine_name_load('genre');
  $terms4 = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary4->vid));
  $genre = array();
  $genre['all'] = 'All';
  foreach ($terms4 as $key4 => $value4) {
    $term_name4 = $value4->name;
    $genre[$key4] = $term_name4;
  }
  $form['field_ao_genre'] = array(
   '#type' => 'select',
   '#title' => t('Genre'),
   '#options' => $genre,
   '#default_value' => '',
   );

  $vocabulary3 = taxonomy_vocabulary_machine_name_load('film_object_properties');
  $terms3 = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary3->vid));
  $film_object_properties = array();
  $film_object_properties['all'] = 'All';
  foreach ($terms3 as $key3 => $value3) {
    $term_name3 = $value3->name;
    $film_object_properties[$key3] = $term_name3;
  }
  $form['film_object_properties'] = array(
   '#type' => 'select',
   '#title' => t('Format'),
   '#options' => $film_object_properties,
   '#default_value' => '',
   );

  $info = field_info_field('field_ao_color');
	$field_ao_color_options = $info['settings']['allowed_values'];
	array_unshift($field_ao_color_options, 'All');
	$form['field_ao_color'] = array(
	  '#title' => t('Color Info'),
	  '#type' => 'select',
	  '#options' => $field_ao_color_options,
	);

	$form['field_ao_silent'] = array(
		'#type' => 'checkbox', 
		'#title' => t('Show only silent Films'),
	);

  $form['field_dates_year1'] = array(
    '#type'          => 'textfield',
    '#title'         => t("From"),
    '#default_value' => '',
    '#size'          => 20,
    '#required'      => FALSE,
    '#description'   => t(''),
    '#attributes'    => array(
      'placeholder' => t('Enter a year, eg !year', array('!year' => date('Y') - 70)),
    ),
  );

  $form['field_dates_year2'] = array(
    '#type'          => 'textfield',
    '#title'         => t("To"),
    '#default_value' => '',
    '#size'          => 20,
    '#required'      => FALSE,
    '#description'   => t(''),
    '#attributes'    => array(
      'placeholder' => t('Enter a year, eg !year', array('!year' => date('Y') - 5)),
    ),
  );


  $form['layout'] = array(
		'#type' => 'checkbox', 
		'#title' => t('Show results as list.'),
	);

  $form['submit'] = array(
    '#type'          => 'submit',
    '#value'         => t("Search"),
    '#attributes'    => array('class' => array('btn')),
  );

  $form['#prefix'] = '<div class="search-query-other bam-helper-advanced-search-query bam-helper-advanced-search-query-art-object">';
	$form['#suffix'] = '</div>'; 

  return $form;

  // dsm($form);

}

/**
 * Validate function bam_helper_advanced_search_query_art_objects_validate.
 */
function bam_helper_advanced_search_query_art_objects_validate($form, &$form_state) {
	$v = $form_state['values'];
	// dsm($v);
	// form_set_error("field_dates_year1", t('oops'));

	// Make sure the date values are numerical
	if (!empty($v['field_dates_year1']) && !is_numeric($v['field_dates_year1'])) {
		form_set_error("field_dates_year1", t('Please enter a valid date.'));
	}
	if (!empty($v['field_dates_year2']) && !is_numeric($v['field_dates_year2'])) {
		form_set_error("field_dates_year2", t('Please enter a valid date.'));
	}
}
/**
 * Submit function bam_helper_advanced_search_query_art_objects_submit.
 */
function bam_helper_advanced_search_query_art_objects_submit($form, &$form_state) {

	$v = $form_state['values'];

	$start_year = '';
	$end_year = '';
	$v['field_dates_year1'] ? $start_year = $v['field_dates_year1'] : '';
	$v['field_dates_year2'] ? $end_year = $v['field_dates_year2'] : '';
	$field_dates = !$start_year && !$end_year ? '' : 'field_dates_year1:[' . $start_year . ' TO ' . $end_year . ']';

	$country = strtolower($v['field_region_country']) == 'all' ? '' : 'field_region_country:' . $v['field_region_country'] ;
	$field_ao_itemclass_term = strtolower($v['itemclass']) == 'all' ? '' : 'field_ao_itemclass_term:' . $v['itemclass'] ;
	$field_ao_format = strtolower($v['film_object_properties']) == 'all' ? '' : 'field_ao_format:' . $v['film_object_properties'] ;
	$field_ao_color = strtolower($v['field_ao_color']) == '0' ? '' : 'field_ao_color:' . $v['field_ao_color'] ;
	$field_ao_genre = strtolower($v['field_ao_genre']) == 'all' ? '' : 'field_ao_genre:' . $v['field_ao_genre'] ;

	$field_ao_silent = $v['field_ao_silent'] == 0 ? '' : 'field_ao_silent:1';

	$layout = $v['layout'] == 0 ? 'grid' : 'list';

	$form_state['redirect'] = array('advanced-search',
    array(
      'query' => array(
      	'keyword' => $v['keyword'], 
      	'f[0]'		=> 'type:art_object',
      	'f[1]' 		=> $country, 
      	'f[2]'		=> $field_ao_itemclass_term,
      	'f[3]'		=> $field_ao_genre,
      	'f[4]'		=> $field_ao_format,
      	'f[5]'		=> $field_ao_color,
      	'f[6]'		=> $field_ao_silent,
      	'f[7]' 		=> $field_dates,
      	'layout' 	=> $layout,
      )
     )
  );
}