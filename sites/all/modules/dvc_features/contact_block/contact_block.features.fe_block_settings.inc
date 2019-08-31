<?php
/**
 * @file
 * contact_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function contact_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-ccontact_in_header'] = array(
    'cache' => -1,
    'custom' => 0,
    'i18n_block_language' => array(),
    'i18n_mode' => 0,
    'machine_name' => 'ccontact_in_header',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'volar_sub' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'volar_sub',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
