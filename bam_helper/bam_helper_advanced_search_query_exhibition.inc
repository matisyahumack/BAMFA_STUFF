<?php 

/**
 * Callback function to create a form.
 */
function bam_helper_advanced_search_query_exhibition($form, &$form_state, $account = NULL) {

	$form['title'] = array(
	  '#type' => 'item',
	  '#title' => t('Search Exhibitions/Film Series'),
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

	$form['#prefix'] = '<div class="search-query-other bam-helper-advanced-search-query bam-helper-advanced-search-query-exh">';
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
 * Validate function bam_helper_advanced_search_query_exhibition_validate.
 */
function bam_helper_advanced_search_query_exhibition_validate($form, &$form_state) {
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
 * Submit function bam_helper_advanced_search_query_exhibition_submit.
 */
function bam_helper_advanced_search_query_exhibition_submit($form, &$form_state) {

	$v = $form_state['values'];

	$start_year = '';
	$end_year = '';
	$v['field_dates_year1'] ? $start_year = $v['field_dates_year1'] : '';
	$v['field_dates_year2'] ? $end_year = $v['field_dates_year2'] : '';
  $field_dates = !$start_year && !$end_year ? '' : 'field_dates_year1:[' . $start_year . ' TO ' . $end_year . ']';

	$layout = $v['layout'] == 0 ? 'grid' : 'list';

	$form_state['redirect'] = array('advanced-search',
    array(
      'query' => array(
      	'keyword' => $v['keyword'], 
      	'f[0]'		=> 'type:exhibition',
      	'f[1]' 		=> $field_dates, 
      	'layout' 	=> $layout,
      )
     )
  );
}