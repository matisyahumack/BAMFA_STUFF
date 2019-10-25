<?php 

/**
 * Callback function to create a form.
 */
function bam_helper_advanced_search_query_doc($form, &$form_state, $account = NULL) {

	$form['title'] = array(
	  '#type' => 'item',
	  '#title' => t('Search Documentation'),
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

  $vocabulary2 = taxonomy_vocabulary_machine_name_load('object_type');
  $terms2 = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary2->vid));
  $object_types = array();
  $object_types['all'] = 'All';
  foreach ($terms2 as $key => $value) {
    $term_name2 = $value->name;
    $object_types[$key] = $term_name2;
  }
  $form['object_type'] = array(
   '#type' => 'select',
   '#title' => t('Object Type'),
   '#options' => $object_types,
   '#default_value' => '',
   );

  $bool = array();
  $bool['all'] = 'None';
  $bool['field_doc_illustrations:1'] = 'Illustrations';
  $bool['field_doc_production_costs:1'] = 'Production costs';
  $bool['field_doc_filmography:1'] = 'Filmography';
  $bool['field_doc_cast_credits:1'] = 'Cast credits';
  $bool['field_doc_tech_credits:1'] = 'Tech credits';
  $bool['field_doc_distribution_co:1'] = 'Distribution co.';
  $bool['field_doc_production_co:1'] = 'Production co.';
  $bool['field_doc_box_office:1'] = 'Box office revenue';
  $bool['field_doc_bibliography:1'] = 'Bibliography';

  
  $form['bool'] = array(
		'#type' => 'select',
		'#title' => t('Options'),
		'#options' => $bool,
		'#default_value' => '',
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

	$form['#prefix'] = '<div class="search-query-other bam-helper-advanced-search-query bam-helper-advanced-search-query-doc">';
	$form['#suffix'] = '</div>'; 

  $form['layout'] = array(
		'#type' => 'checkbox', 
		'#title' => t('Show results as list.'),
	);

  $form['submit'] = array(
    '#type'          => 'submit',
    '#value'         => t("Search"),
    '#attributes'    => array('class' => array('btn')),
  );

  return $form;

  // dsm($form);

}

/**
 * Validate function bam_helper_advanced_search_query_doc_validate.
 */
function bam_helper_advanced_search_query_doc_validate($form, &$form_state) {
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
 * Submit function bam_helper_advanced_search_query_doc_submit.
 */
function bam_helper_advanced_search_query_doc_submit($form, &$form_state) {

	$v = $form_state['values'];

	$start_year = '';
	$end_year = '';
	$v['field_dates_year1'] ? $start_year = $v['field_dates_year1'] : '';
	$v['field_dates_year2'] ? $end_year = $v['field_dates_year2'] : '';
  $field_dates = !$start_year && !$end_year ? '' : 'field_dates_year1:[' . $start_year . ' TO ' . $end_year . ']';

	$country = strtolower($v['field_region_country']) == 'all' ? '' : 'field_region_country:' . $v['field_region_country'] ;
	$field_doc_object_type = strtolower($v['object_type']) == 'all' ? '' : 'field_doc_object_type:' . $v['object_type'] ;
	$options = strtolower($v['bool']) == 'all' ? '' : $v['bool'];

	$layout = $v['layout'] == 0 ? 'grid' : 'list';

	$form_state['redirect'] = array('advanced-search',
    array(
      'query' => array(
      	'keyword' => $v['keyword'], 
      	'f[0]'		=> 'type:documentation',
      	'f[1]' 		=> $country, 
      	'f[2]'		=> $field_doc_object_type,
      	'f[3]' 		=> $field_dates,
      	'f[4]'		=> $options,
      	'layout' 	=> $layout,
      )
     )
  );
}