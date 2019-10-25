<?php 

/**
 * Callback function to create a form.
 */
function bam_helper_advanced_search_query_event($form, &$form_state, $account = NULL) {

	$form['title'] = array(
	  '#type' => 'item',
	  '#title' => t('Search Events'),
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

  $vocabulary = taxonomy_vocabulary_machine_name_load('calendar_filter');
  $terms = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary->vid));
  $event_type = array();
  $event_type['all'] = 'All';
  foreach ($terms as $key => $value) {
    $term_name = $value->name;
    $event_type[$key] = $term_name;
  }
  $form['event_type'] = array(
   '#type' => 'select',
   '#title' => t('Type'),
   '#options' => $event_type,
   '#default_value' => '',
   );

  $vocabulary2 = taxonomy_vocabulary_machine_name_load('audiences');
  $terms2 = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary2->vid));
  $audiences = array();
  $audiences['all'] = 'All';
  foreach ($terms2 as $key2 => $value2) {
    $term_name2 = $value2->name;
    $audiences[$key2] = $term_name2;
  }
  $form['audiences'] = array(
   '#type' => 'select',
   '#title' => t('Audience'),
   '#options' => $audiences,
   '#default_value' => '',
   );

  $vocabulary4 = taxonomy_vocabulary_machine_name_load('recommended_ages');
  $terms4 = entity_load('taxonomy_term', FALSE, array('vid' => $vocabulary4->vid));
  $recommended_ages = array();
  $recommended_ages['all'] = 'All';
  foreach ($terms4 as $key4 => $value4) {
    $term_name4 = $value4->name;
    $recommended_ages[$key4] = $term_name4;
  }
  $form['recommended_ages'] = array(
   '#type' => 'select',
   '#title' => t('Recommended ages'),
   '#options' => $recommended_ages,
   '#default_value' => '',
   );

  $info = field_info_field('field_film_event_type');
	$field_film_event_type = $info['settings']['allowed_values'];
	array_unshift($field_film_event_type, 'All');
	$form['field_film_event_type'] = array(
	  '#title' => t('Film event type'),
	  '#type' => 'select',
	  '#options' => $field_film_event_type,
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

  $form['#prefix'] = '<div class="search-query-other bam-helper-advanced-search-query bam-helper-advanced-search-query-event">';
	$form['#suffix'] = '</div>'; 

  return $form;

  // dsm($form);

}

/**
 * Validate function bam_helper_advanced_search_query_event_validate.
 */
function bam_helper_advanced_search_query_event_validate($form, &$form_state) {
	$v = $form_state['values'];
	// dsm($v);
	// form_set_error("field_dates_year1", t('oops'));
}
/**
 * Submit function bam_helper_advanced_search_query_event_submit.
 */
function bam_helper_advanced_search_query_event_submit($form, &$form_state) {

	$v = $form_state['values'];
	$q_event_type = strtolower($v['event_type']) == 'all' ? '' : 'field_calendar_filter:' . $v['event_type'] ;
	$q_audiences = strtolower($v['audiences']) == 'all' ? '' : 'field_event_audiences:' . $v['audiences'] ;
	$q_recommended_ages = strtolower($v['recommended_ages']) == 'all' ? '' : 'field_event_recommended_ages:' . $v['recommended_ages'] ;
	$q_field_film_event_type = strtolower($v['field_film_event_type']) == '0' ? '' : 'field_film_event_type:' . $v['field_film_event_type'] ;
	
	$layout = $v['layout'] == 0 ? 'grid' : 'list';

	$form_state['redirect'] = array('advanced-search',
    array(
      'query' => array(
      	'keyword' => $v['keyword'], 
      	'f[0]'		=> 'type:event',
      	'f[1]' 		=> $q_audiences, 
      	'f[2]'		=> $q_recommended_ages,
      	'f[3]'		=> $q_field_film_event_type,
      	'f[4]'		=> $q_event_type,
      	'layout' 	=> $layout,
      )
     )
  );
}