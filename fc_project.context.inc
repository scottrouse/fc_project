<?php
/**
 * @file
 * fc_project.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function fc_project_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'projects';
  $context->description = 'Defines block layout on Projects page.';
  $context->tag = 'Projects';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'node/4' => 'node/4',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'views-projects-block_1' => array(
          'module' => 'views',
          'delta' => 'projects-block_1',
          'region' => 'content',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Defines block layout on Projects page.');
  t('Projects');
  $export['projects'] = $context;

  return $export;
}
