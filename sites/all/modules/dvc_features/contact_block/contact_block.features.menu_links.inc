<?php
/**
 * @file
 * contact_block.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function contact_block_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_contact-info-in-header:admin/structure/block/manage/block/31/configure.
  $menu_links['management_contact-info-in-header:admin/structure/block/manage/block/31/configure'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/block/manage/block/31/configure',
    'router_path' => 'admin/structure/block/manage/%/%/configure',
    'link_title' => 'Contact info in header',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'management_contact-info-in-header:admin/structure/block/manage/block/31/configure',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'language' => 'und',
    'menu_links_customized' => 1,
    'parent_identifier' => 'management_administration:admin',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Contact info in header');

  return $menu_links;
}
