<?php 

/**
 * Callback function to create a form.
 */
function bam_helper_advanced_search_query_all($form, &$form_state, $account = NULL) {

  $form['title'] = array(
    '#type' => 'item',
    '#title' => t('Search all objects and people'),
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

  $form['#prefix'] = '<div class="bam-helper-advanced-search-query bam-helper-advanced-search-query-all">';
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

  $form['#attached']['js'][] = drupal_get_path('module', 'bam_helper') . '/bamselectother.js';

  $options = array(
    'none' => 'Select a category',
    'bam-helper-advanced-search-query-art-object' => 'Art Objects', 
    'bam-helper-advanced-search-query-doc' => 'Documentation', 
    'bam-helper-advanced-search-query-event' => 'Events', 
    'bam-helper-advanced-search-query-exh' => 'Exhibition/Film Series', 
    'bam-helper-advanced-search-query-person' => 'People',
  );
  $form['other_search'] = array(
   '#type' => 'select',
   '#title' => t('Or search by:'),
   '#options' => $options,
   '#default_value' => '',
  );
  $form['other_search']['#prefix'] = '<div class="other_search">';
  $form['other_search']['#suffix'] = '</div>';

  return $form;

  // dsm($form);

}

/**
 * Validate function bam_helper_advanced_search_query_all_validate.
 */
function bam_helper_advanced_search_query_all_validate($form, &$form_state) {
	$v = $form_state['values'];

	// Make sure the date values are numerical
	if (!empty($v['field_dates_year1']) && !is_numeric($v['field_dates_year1'])) {
		form_set_error("field_dates_year1", t('Please enter a valid date.'));
	}
	if (!empty($v['field_dates_year2']) && !is_numeric($v['field_dates_year2'])) {
		form_set_error("field_dates_year2", t('Please enter a valid date.'));
	}
}
/**
 * Submit function bam_helper_advanced_search_query_all_submit.
 */
function bam_helper_advanced_search_query_all_submit($form, &$form_state) {

	$v = $form_state['values'];

	$start_year = '';
	$end_year = '';
	$v['field_dates_year1'] ? $start_year = $v['field_dates_year1'] : '';
	$v['field_dates_year2'] ? $end_year = $v['field_dates_year2'] : '';
  $field_dates = !$start_year && !$end_year ? '' : 'field_dates_year1:[' . $start_year . ' TO ' . $end_year . ']';

	$country = strtolower($v['field_region_country']) == 'all' ? '' : 'field_region_country:' . $v['field_region_country'] ;

	$layout = $v['layout'] == 0 ? 'grid' : 'list';

	$form_state['redirect'] = array('advanced-search',
    array(
      'query' => array(
      	'keyword' => $v['keyword'], 
      	'f[0]' 		=> $country, 
      	'f[1]' 		=> $field_dates,
      	'layout' 	=> $layout,
      )
     )
  );
}