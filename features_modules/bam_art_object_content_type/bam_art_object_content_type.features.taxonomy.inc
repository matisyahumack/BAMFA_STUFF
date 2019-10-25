<?php
/**
 * @file
 * bam_art_object_content_type.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bam_art_object_content_type_taxonomy_default_vocabularies() {
  return array(
    'itemclass' => array(
      'name' => 'ItemClass',
      'machine_name' => 'itemclass',
      'description' => 'ItemClass from FileMaker',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
