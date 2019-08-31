<?php
/**
 * @file
 * contact_block.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function contact_block_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Contact in header';
  $fe_block_boxes->format = 'html';
  $fe_block_boxes->machine_name = 'ccontact_in_header';
  $fe_block_boxes->body = '<p>Tel. 999999999</p>

<p>Tel. 88888888</p>

<p>info@info.info</p>
';

  $export['ccontact_in_header'] = $fe_block_boxes;

  return $export;
}
