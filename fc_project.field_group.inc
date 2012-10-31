<?php
/**
 * @file
 * fc_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fc_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_staff|node|project|form';
  $field_group->group_name = 'group_staff';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Staff and Partners',
    'weight' => '4',
    'children' => array(
      0 => 'field_principal_investigator',
      1 => 'field_project_staff',
      2 => 'field_partner_notes',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Staff and Partners',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_staff|node|project|form'] = $field_group;

  return $export;
}
