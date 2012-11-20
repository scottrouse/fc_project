<?php
/**
 * @file
 * fc_project.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function fc_project_taxonomy_default_vocabularies() {
  return array(
    'project_category' => array(
      'name' => 'Project Category',
      'machine_name' => 'project_category',
      'description' => 'Defines Categories for Project nodes.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
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
