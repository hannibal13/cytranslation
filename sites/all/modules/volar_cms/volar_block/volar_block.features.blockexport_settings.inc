<?php
/**
 * @file
 * volar_block.features.blockexport_settings.inc
 */

/**
 * Implements hook_default_blockexport_settings().
 */
function volar_block_default_blockexport_settings() {
  $export = array();
  $export['block'][] = array(
  'bid' => 1,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 2,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 3,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 4,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 1,
  'region' => 'sidebar_first',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 5,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'bartik',
  'status' => 1,
  'weight' => 0,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 6,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 7,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 8,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 9,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 10,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 11,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 12,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 13,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 14,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 15,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 16,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 17,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 18,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 19,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 20,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'bartik',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 21,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -31,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 22,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -28,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 23,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -3,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 24,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -12,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 25,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -2,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 26,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => 1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 27,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -29,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 28,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -18,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 29,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -29,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 30,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -17,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 31,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -1,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 32,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -20,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 33,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -26,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 34,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -24,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 35,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -23,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 36,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -22,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 37,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -21,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 38,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -19,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 39,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -16,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 40,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 41,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -27,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 1,
);
  $export['block'][] = array(
  'bid' => 43,
  'module' => 'views',
  'delta' => 'related_projects-block',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -4,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 44,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => 0,
  'region' => 'bottom',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 45,
  'module' => 'views',
  'delta' => 'portfolio_isotope-block',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -5,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 46,
  'module' => 'views',
  'delta' => 'people-block',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -6,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 47,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -13,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 48,
  'module' => 'views',
  'delta' => 'blog_preview-block',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -11,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 49,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -33,
  'region' => 'footer',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 50,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -25,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 51,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -28,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog/*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 52,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -26,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/2*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 53,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -30,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/3',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 54,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -24,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/3*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 56,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/4*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 57,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/5*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 58,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/6*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 59,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/7*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 60,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/8*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 61,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -18,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/9*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 62,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -23,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*right-sidebar',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 63,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -22,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*right-sidebar',
  'title' => 'Quote Of The Day',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 64,
  'module' => 'views',
  'delta' => 'recent_posts-block',
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -21,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*right-sidebar',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 65,
  'module' => 'views',
  'delta' => 'categories-block',
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -20,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*right-sidebar',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 66,
  'module' => 'views',
  'delta' => 'tags-block',
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -19,
  'region' => 'sidebar',
  'custom' => 0,
  'visibility' => 1,
  'pages' => '*right-sidebar',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 67,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -17,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'blog-right-sidebar',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 68,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -16,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/18/right-sidebar',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 69,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -29,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'portfolio/*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 70,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -30,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'content/demo',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 71,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -15,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 72,
  'module' => 'tb_megamenu',
  'delta' => 'features',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -25,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 73,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -15,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/10*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 74,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -14,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/11*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 75,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -13,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/12*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 76,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -12,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/13*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 77,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -11,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/14*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 78,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -10,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/15*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 79,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -8,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/16*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 80,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -9,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/17*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 81,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'volar_sub',
  'status' => 1,
  'weight' => -7,
  'region' => 'top',
  'custom' => 0,
  'visibility' => 1,
  'pages' => 'node/1/18*',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 82,
  'module' => 'locale',
  'delta' => 'language',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -14,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 83,
  'module' => 'block',
  'delta' => 4,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 84,
  'module' => 'block',
  'delta' => 24,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 85,
  'module' => 'block',
  'delta' => 30,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 86,
  'module' => 'block',
  'delta' => 6,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 87,
  'module' => 'block',
  'delta' => 19,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 88,
  'module' => 'block',
  'delta' => 18,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 89,
  'module' => 'block',
  'delta' => 23,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 90,
  'module' => 'block',
  'delta' => 21,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 91,
  'module' => 'block',
  'delta' => 7,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 92,
  'module' => 'block',
  'delta' => 13,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 93,
  'module' => 'block',
  'delta' => 26,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 94,
  'module' => 'block',
  'delta' => 15,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 95,
  'module' => 'block',
  'delta' => 14,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 96,
  'module' => 'block',
  'delta' => 11,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 97,
  'module' => 'block',
  'delta' => 20,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 98,
  'module' => 'block',
  'delta' => 1,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 1,
  'pages' => '<front>',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 1,
);
  $export['block'][] = array(
  'bid' => 99,
  'module' => 'block',
  'delta' => 16,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 100,
  'module' => 'block',
  'delta' => 5,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 101,
  'module' => 'block',
  'delta' => 8,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 102,
  'module' => 'block',
  'delta' => 9,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 103,
  'module' => 'block',
  'delta' => 12,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 104,
  'module' => 'block',
  'delta' => 22,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 105,
  'module' => 'block',
  'delta' => 27,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 106,
  'module' => 'block',
  'delta' => 29,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 107,
  'module' => 'block',
  'delta' => 28,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 108,
  'module' => 'block',
  'delta' => 25,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 109,
  'module' => 'block',
  'delta' => 17,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 110,
  'module' => 'block',
  'delta' => 3,
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 111,
  'module' => 'comment',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 112,
  'module' => 'locale',
  'delta' => 'language',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 113,
  'module' => 'menu',
  'delta' => 'features',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 114,
  'module' => 'menu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 115,
  'module' => 'node',
  'delta' => 'syndicate',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 116,
  'module' => 'node',
  'delta' => 'recent',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 117,
  'module' => 'search',
  'delta' => 'form',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 118,
  'module' => 'system',
  'delta' => 'main',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 0,
  'region' => 'content',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 119,
  'module' => 'system',
  'delta' => 'powered-by',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 120,
  'module' => 'system',
  'delta' => 'help',
  'theme' => 'seven',
  'status' => 1,
  'weight' => 5,
  'region' => 'help',
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 121,
  'module' => 'system',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 122,
  'module' => 'system',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 123,
  'module' => 'system',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 124,
  'module' => 'system',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 125,
  'module' => 'tb_megamenu',
  'delta' => 'devel',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 126,
  'module' => 'tb_megamenu',
  'delta' => 'features',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 127,
  'module' => 'tb_megamenu',
  'delta' => 'main-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 128,
  'module' => 'tb_megamenu',
  'delta' => 'management',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 129,
  'module' => 'tb_megamenu',
  'delta' => 'navigation',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 130,
  'module' => 'tb_megamenu',
  'delta' => 'user-menu',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 131,
  'module' => 'user',
  'delta' => 'login',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 132,
  'module' => 'user',
  'delta' => 'new',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => 1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 133,
  'module' => 'user',
  'delta' => 'online',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 134,
  'module' => 'views',
  'delta' => 'related_projects-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 135,
  'module' => 'views',
  'delta' => 'portfolio_isotope-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 136,
  'module' => 'views',
  'delta' => 'people-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 137,
  'module' => 'views',
  'delta' => 'blog_preview-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 138,
  'module' => 'views',
  'delta' => 'recent_posts-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 139,
  'module' => 'views',
  'delta' => 'categories-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 140,
  'module' => 'views',
  'delta' => 'tags-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 141,
  'module' => 'views',
  'delta' => 'calculator-block',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 142,
  'module' => 'devel',
  'delta' => 'execute_php',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 143,
  'module' => 'devel',
  'delta' => 'switch_user',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 144,
  'module' => 'quicktabs',
  'delta' => 'calculator_quick',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -32,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '<none>',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 145,
  'module' => 'views',
  'delta' => 'calculator-block',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -8,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 146,
  'module' => 'quicktabs',
  'delta' => 'calculator_quick',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 147,
  'module' => 'dvc',
  'delta' => 'symbol',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -27,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 148,
  'module' => 'dvc',
  'delta' => 'symbol',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 149,
  'module' => 'views',
  'delta' => 'calculator-block_1',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -10,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 150,
  'module' => 'views',
  'delta' => 'calculator-block_1',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 151,
  'module' => 'views',
  'delta' => 'calculator-block_2',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 152,
  'module' => 'views',
  'delta' => 'calculator-block_3',
  'theme' => 'seven',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 153,
  'module' => 'views',
  'delta' => 'calculator-block_2',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -7,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 154,
  'module' => 'views',
  'delta' => 'calculator-block_3',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => -9,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 155,
  'module' => 'locale',
  'delta' => 'language_content',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 156,
  'module' => 'views',
  'delta' => 'blog_preview-block_1',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block'][] = array(
  'bid' => 157,
  'module' => 'views',
  'delta' => 'blog-block_1',
  'theme' => 'volar_sub',
  'status' => 0,
  'weight' => 0,
  'region' => -1,
  'custom' => 0,
  'visibility' => 0,
  'pages' => '',
  'title' => '',
  'cache' => -1,
  'i18n_mode' => 0,
);
  $export['block_custom'][] = array(
  'bid' => 1,
  'body' => '[nd_menu menu="main-menu" different_values="0" type="sticky" language="1"]
[/nd_menu]
[nd_parallax fid="98" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home" bg_effect=" - None - " overlay="overlay" bg_animation="0"]
[nd_title tag="h1" title_style="hs-text-2 font-second" different_values="0" align="text-center" text_mask="0"]
[nd_text_rotator text_line_1="passionate" text_line_2="minimalist" text_line_3="impeccable" text_line_4="adventurer" op="Add new row" different_values="0" type="letters rotate-2"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="VOLAR, A TEMPLATE AT THE HEART OF THE BEAUTY" tag="h2" title_style="hs-text-6" different_values="0" align="text-center" text_mask="0"]
[/nd_title]
[nd_button button_type="btn-white-transparent" centered="1" link="popup/nojs" text="Contact Us" inline="0" different_values="1" text_hover="Contact Us" style_margin_top="50px" animation="shake" extra_classes="ctools-use-modal"]
[/nd_button]
[/nd_parallax]
 ',
  'info' => 'Header: Parallax Image - Text Rotator',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 3,
  'body' => '[nd_container different_values="0" style_padding_top="70"]
[nd_title_section title_small="BETTER CHECK OUT THESE" title_left="Related" title_right="Projects" bold_left="1" bold_right="0" different_values="0"]
[/nd_title_section]
[nd_view admin_url="admin/structure/views/view/related_projects/edit/block" different_values="0"]
[/nd_view]
[/nd_container]
 ',
  'info' => 'Related Projects',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 4,
  'body' => '[nd_bg bg_color="footer-section" different_values="0" style_padding_top="120" go_top="0"]
[html format="raw_html" different_values="0"]<svg version="1.1" id="logo-svg" x="0px" y="0px" width="640px" height="320px" viewBox="0 0 640 320"> <g> <path class="logo-svg-path" d="M254.163,190.984v-15.797l14.744-25.53c0.311-0.539,1.003-0.722,1.538-0.411l9.574,5.524 c0.537,0.311,0.723,1.005,0.413,1.538l-17.308,29.98C261.245,189.555,257.692,191.268,254.163,190.984L254.163,190.984 L254.163,190.984z M254.163,149.908l6.542-6.542c0.223-0.219,0.332-0.486,0.332-0.796c0-0.309-0.106-0.58-0.329-0.797l-6.545-6.546 V149.908z M222.886,68.404c4.443,0.763,7.842,4.647,7.842,9.303v2.737c0,0.311-0.111,0.583-0.33,0.8 c-0.22,0.216-0.487,0.328-0.796,0.328h-6.716V68.404L222.886,68.404L222.886,68.404z M254.163,135.226v14.682l-31.277,31.284 v-18.83l28.41-28.412c0.219-0.217,0.485-0.329,0.795-0.334c0.314,0,0.577,0.117,0.8,0.334L254.163,135.226L254.163,135.226 L254.163,135.226z M254.163,175.188l-6.728,11.658c-0.308,0.535-0.125,1.225,0.412,1.537l2.375,1.369 c1.246,0.723,2.595,1.125,3.94,1.236V175.188L254.163,175.188L254.163,175.188z M222.886,138.524l22.118-12.77 c0.54-0.312,0.726-1.006,0.415-1.542l-5.53-9.575c-0.312-0.536-1.004-0.722-1.538-0.413l-15.465,8.927V138.524L222.886,138.524 L222.886,138.524z M222.886,107.763V93.981l8.065-2.16c0.3-0.077,0.586-0.044,0.856,0.111c0.267,0.159,0.445,0.388,0.525,0.689 l2.863,10.682c0.08,0.298,0.043,0.589-0.114,0.853c-0.156,0.271-0.383,0.447-0.685,0.525L222.886,107.763L222.886,107.763z M29.038,72.133V69.39c0-0.619,0.506-1.124,1.126-1.124h191.121c0.545,0,1.081,0.046,1.601,0.138v13.168H38.483 C33.283,81.572,29.038,77.331,29.038,72.133L29.038,72.133L29.038,72.133z M222.886,93.981v13.782l-105.524,28.271 c-5.022,1.346-10.218-1.652-11.565-6.677l-0.711-2.646c-0.082-0.297-0.044-0.585,0.111-0.858c0.157-0.266,0.387-0.438,0.686-0.522 L222.886,93.981L222.886,93.981z M222.886,123.155l-71.688,41.388c-0.534,0.311-0.72,1.002-0.409,1.539l1.367,2.377 c2.602,4.502,8.401,6.057,12.903,3.455l57.827-33.387V123.155L222.886,123.155z M222.886,162.361v18.83l-7.053,7.051 c-3.679,3.684-9.68,3.684-13.358,0l-1.941-1.939c-0.438-0.438-0.438-1.154,0-1.59L222.886,162.361L222.886,162.361z"></path> <path class="logo-svg-path" d="M447.068,155.821v-15.369l41.733,24.091c0.266,0.16,0.446,0.389,0.527,0.689 c0.078,0.299,0.042,0.588-0.111,0.855l-1.368,2.371c-2.605,4.502-8.401,6.061-12.904,3.457L447.068,155.821L447.068,155.821z M447.068,115.79v-13.779l87.052,23.326c0.298,0.078,0.528,0.25,0.681,0.521c0.162,0.273,0.195,0.556,0.114,0.859l-0.711,2.646 c-1.349,5.025-6.541,8.023-11.563,6.677L447.068,115.79L447.068,115.79L447.068,115.79z M447.068,81.572V68.266h162.769 c0.622,0,1.125,0.505,1.125,1.124v2.743c0,5.203-4.242,9.442-9.442,9.442H447.068V81.572z M447.068,68.266v13.306h-24.789V68.266 H447.068L447.068,68.266z M447.068,102.011v13.779l-24.789-6.641V95.365L447.068,102.011L447.068,102.011z M447.068,140.449v15.369 l-24.789-14.309v-15.367L447.068,140.449L447.068,140.449z M422.282,186.359v-18.83l17.186,17.184 c0.216,0.221,0.327,0.486,0.327,0.797c0,0.309-0.109,0.578-0.327,0.793l-1.941,1.939c-3.679,3.684-9.675,3.684-13.358,0 L422.282,186.359L422.282,186.359z M389.777,189.752l2.374-1.369c0.539-0.311,0.726-1.002,0.416-1.537l-6.729-11.652v15.795 C387.185,190.877,388.53,190.469,389.777,189.752L389.777,189.752L389.777,189.752z M422.282,68.266v13.306H410.4 c-0.622,0-1.125-0.505-1.125-1.127v-2.737c0-5.203,4.239-9.441,9.442-9.441H422.282L422.282,68.266z M422.282,95.365v13.784 l-16.675-4.47c-0.6-0.159-0.958-0.781-0.796-1.381l2.859-10.676c0.081-0.304,0.258-0.533,0.527-0.689 c0.269-0.156,0.553-0.191,0.857-0.117L422.282,95.365L422.282,95.365z M422.282,126.143v15.367l-27.288-15.755 c-0.532-0.312-0.722-1.006-0.413-1.542l5.526-9.575c0.309-0.536,1.006-0.722,1.539-0.413L422.282,126.143L422.282,126.143 L422.282,126.143z M422.282,167.533v18.828l-36.444-36.448v-14.688l1.271-1.271c0.22-0.217,0.491-0.328,0.798-0.334 c0.31,0,0.577,0.117,0.799,0.334L422.282,167.533z M385.835,175.188l-14.745-25.53c-0.308-0.539-1.002-0.722-1.54-0.416 l-9.574,5.53c-0.536,0.311-0.72,1.005-0.415,1.538l17.313,29.98c1.882,3.262,5.433,4.977,8.958,4.693v-15.795H385.835z M385.835,135.223v14.688l-6.544-6.545c-0.438-0.438-0.441-1.157-0.003-1.594L385.835,135.223L385.835,135.223z"></path> <path class="logo-svg-path" d="M320.852,17.279c5.857,42.344,5.539,64.56,5.539,114.385c0,0.619-0.505,1.125-1.127,1.125h-11.047 c-0.619,0-1.126-0.505-1.126-1.125c-0.003-49.848-0.323-72.039,5.534-114.385c0.075-0.561,0.547-0.968,1.113-0.974 C320.302,16.305,320.776,16.713,320.852,17.279L320.852,17.279z"></path> <path class="logo-svg-path" d="M320.86,302.674c5.866-66.078,5.53-59.584,5.53-137.598c0-0.311-0.111-0.58-0.328-0.799 c-0.222-0.223-0.488-0.334-0.799-0.334h-11.047c-0.31,0-0.576,0.117-0.799,0.334c-0.219,0.219-0.33,0.488-0.33,0.799 c0,78.041-0.34,71.512,5.526,137.598c0.053,0.576,0.533,1.016,1.116,1.021C320.313,303.699,320.811,303.26,320.86,302.674 L320.86,302.674z"></path> </g> </svg>[/html]
[nd_bg bg_color="footer-bottom" go_top="1" different_values="0"]
[html format="html" different_values="0"]<p><span style="color:#F0FFF0">Volar © 2015. All Right Reserved.</span></p>[/html]
[/nd_bg]
[/nd_bg]
 ',
  'info' => 'Footer',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 5,
  'body' => '[nd_menu menu="main-menu" different_values="0" type="sticky"]
[/nd_menu]
[nd_parallax fid="31" full_height="1" vertical_align="1" overlay="overlay" scroll_icon="0" different_values="0" bg_effect=" - None - " bg_animation="0"]
[nd_container different_values="0"]
[row different_values="0" font="font-second"]
[col tablet="8" different_values="0"]
[nd_title title="Our " title_bold_after="Blog" tag="h1" title_style="hs-text-12" different_values="0" align="text-left" font_color="f-white" text_mask="0" animation="fadeInLeft"]
[/nd_title]
[nd_title title="HEAR AWESOME STORIES HERE" tag="h4" title_style="hs-text-6" different_values="0" align="text-left" font_color="f-white" text_mask="0" animation="fadeInLeft"]
[/nd_title]
[/col]
[col tablet="4" different_values="0"]
[nd_breadcrumb align="text-right" different_values="0" bg="bg-transparent-breadcrumb" style_margin_top="30" animation="fadeInRight"]
[/nd_breadcrumb]
[/col]
[/row]
[/nd_container]
[/nd_parallax]
 ',
  'info' => 'Header: Parallax with Breadcrumb',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 6,
  'body' => '[nd_parallax fid="35" full_height="0" height_percent="78" vertical_align="1" overlay="light overlay" scroll_icon="0" different_values="0"]
[nd_container different_values="0"]
[row different_values="0" font="font-second"]
[col tablet="8" different_values="0"]
[nd_title title="Kurdish " title_bold_after="Breakfast" tag="h1" title_style="hs-text-12" different_values="0" align="text-left" title_bold_before="A " animation="fadeInLeft" animation_delay="100"]
[/nd_title]
[nd_title title="HEAR AWESOME STORIES HERE" tag="h4" title_style="hs-text-6" different_values="0" align="text-left" animation="fadeInLeft" animation_delay="600"]
[/nd_title]
[/col]
[col tablet="4" different_values="0"]
[nd_breadcrumb align="text-right" different_values="0" bg="bg-transparent-breadcrumb" style_margin_top="30" animation="fadeInRight" animation_delay="1500"]
[/nd_breadcrumb]
[/col]
[/row]
[/nd_container]
[/nd_parallax]
[nd_menu menu="main-menu" different_values="0" type="navbar-dark"]
[/nd_menu]
 ',
  'info' => 'Header: Blog page White',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 7,
  'body' => '[nd_parallax fid="36" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home" bg_effect="Flat Surface Shader"]
[nd_title tag="h2" title_style="hs-text-5" different_values="0" align="text-center" font_color="f-white" title="ULTIMATE ONE PAGE TEMPLATE"]
[/nd_title]
[nd_title title="Creative" tag="h2" title_style="hs-text-11" different_values="0" align="text-center" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-white-transparent" centered="1" link="#About" text="Continue the trip" text_hover="Come and See" style_width="177" different_values="0" style_margin_top="40"]
[/nd_button]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Flat Surface Shader - Parallax',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 8,
  'body' => '[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
[nd_parallax fid="37" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home" bg_effect="Flat Surface Shader"]
[nd_title tag="h2" title_style="hs-text-5" different_values="0" align="text-center" font_color="f-white" title="ULTIMATE ONE PAGE TEMPLATE"]
[/nd_title]
[nd_title title="Creative" tag="h2" title_style="hs-text-11" different_values="0" align="text-center" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-white-transparent" centered="1" link="#About" text="Continue the trip" text_hover="Come and See" style_width="177" different_values="0" style_margin_top="40"]
[/nd_button]
[/nd_parallax]
 ',
  'info' => 'Header: Particle ground ',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 9,
  'body' => '[nd_parallax fid="37" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home" bg_effect="Particle Ground" font="font-second" overlay="overlay"]
[nd_title tag="h1" title_style="hs-text-10" different_values="0" align="text-center" font_color="f-white" title="The Life"]
[/nd_title]
[nd_title title="What Makes You Alive Is Your Feelings" tag="h2" title_style="hs-text-8 transparent" different_values="0" align="text-center" font_color="f-white" style_padding_bottom="20"]
[/nd_title]
[html format="raw_html" different_values="0" text_align="center"]<a id="btn-play" class="btn-play lightbox" href="https://www.youtube.com/watch?v=3FaVQcEjHUc"></a>[/html]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Particle ground - parallax',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 11,
  'body' => '[nd_parallax fid="38" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home-section" bg_effect=" - None - "]
[nd_title tag="h1" title_style="hs-text-2 font-second" different_values="0" align="text-center" text_mask="1"]
[nd_text_rotator text_line_1="impossible" text_line_2="creative" text_line_3="ascending" text_line_4="fantastic" op="Add new row" different_values="0" type="letters rotate-2"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="VOLAR, A TEMPLATE AT THE HEART OF THE BEAUTY" tag="h2" title_style="hs-text-6" different_values="0" align="text-center" text_mask="0" style_padding_top="10" font_color="f-white"]
[/nd_title]
[/nd_parallax]
[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Mask text rotator - fixed background',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 12,
  'body' => '[nd_parallax fid="42" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home-section" bg_effect="Particle Ground - Parallax Video" overlay="overlay" bg_fid="41" font="font-second" bg_animation="1"]
[nd_div vertical_align="0" different_values="0" style_padding_top="100" style_padding_bottom="100"]
[nd_title tag="h1" title_style="hs-text-10" different_values="0" align="text-center" text_mask="0" title="Fly High"]
[/nd_title]
[nd_title title="feel the breeze, touch the sky " tag="h2" title_style="hs-text-6" different_values="0" align="text-center" text_mask="0" style_padding_top="20" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="|{front|}" text="see our works" text_hover="see our works" style_width="162" different_values="0" style_margin_top="60"]
[/nd_button]
[/nd_div]
[/nd_parallax]
[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Particle ground - parallax video',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 13,
  'body' => '[nd_parallax vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home-section" bg_effect="Flat Surface Shader - Special" font="font-second"]
[nd_div vertical_align="0" different_values="0" style_padding_top="100" style_padding_bottom="100"]
[nd_title tag="h1" title_style="hs-text-10" different_values="0" align="text-center" text_mask="0" title="Elegant Design" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="|{front|}" text="come with us .." text_hover="see our works" style_width="162" different_values="0" style_margin_top="60"]
[/nd_button]
[/nd_div]
[/nd_parallax]
[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Flat Surface Shader - Special',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 14,
  'body' => '[nd_parallax fid="44" vertical_align="1" full_height="1" scroll_icon="1" different_values="0" id="home" bg_effect=" - None - " overlay="light overlay"]
[nd_title tag="h1" title_style="hs-text-11" different_values="0" align="text-center" text_mask="0" font="font-second" style_margin_bottom="10"]
[nd_text_rotator text_line_1="passionate" text_line_2="minimalist" text_line_3="impeccable" text_line_4="adventurer" op="Add new row" different_values="0" type="letters scale"]
[/nd_text_rotator]
[/nd_title]
[nd_title title="DESIGN STUDIO" tag="h2" title_style="hs-text-14" different_values="0" align="text-center" text_mask="0" style_margin_bottom="60" style_margin_top="10"]
[/nd_title]
[nd_button button_type="btn-transparent-dark" centered="1" link="|{front|}" text="Our Story" text_hover="Learn more about us" style_width="201" different_values="0"]
[/nd_button]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Light Parallax Image - Text Rotator',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 15,
  'body' => '[nd_bg_slider full_height="0" height_percent="78" different_values="0" block_height="half-height"]
[nd_bg_slider_item overlay="overlay" different_values="0" bg_fid="45" fid="47"]
[nd_title title_bold_before="Fly " title="With The Surf" tag="h4" title_style="hs-text-12" align="text-center" text_mask="0" different_values="0" style_margin_bottom="40"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#about" text="See The Works" text_hover="Ready?" style_width="162" different_values="0" inline="0"]
[/nd_button]
[/nd_bg_slider_item]
[nd_bg_slider_item overlay="overlay" different_values="0" fid="46"]
[nd_title title="Elegant Design" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" different_values="0" font_color="f-white" font="font-second"]
[/nd_title]
[nd_title title="feel the breeze, discover your soul, touch the sky " tag="h4" title_style="hs-text-6" align="text-center" text_mask="0" different_values="0" font_color="f-white" font="font-second" style_margin_bottom="40" style_margin_top="30"]
[/nd_title]
[nd_button button_type="btn-default" centered="1" link="#about" text="Watch the show" text_hover="Open" style_width="162" different_values="0" inline="1" style_margin_right="20"]
[/nd_button]
[nd_button button_type="btn-default" centered="1" link="#about" text="See the works" text_hover="Ready?" style_width="162" different_values="0" inline="1"]
[/nd_button]
[/nd_bg_slider_item]
[nd_bg_slider_item overlay="overlay" different_values="0" fid="48"]
[nd_title title="try the beauty" tag="h2" title_style="hs-text-10" align="text-center" text_mask="0" different_values="0" font_color="f-white" font="font-second"]
[/nd_title]
[nd_title title="elegent, smooth, lightweight" tag="h5" title_style="hs-text-detail" align="text-center" text_mask="0" different_values="0" font_color="f-white" font="font-second" style_margin_bottom="50" style_margin_top="10"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#about" text="See our work" text_hover="Open" style_width="162" different_values="0" inline="0" style_margin_right="20"]
[/nd_button]
[/nd_bg_slider_item]
[/nd_bg_slider]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Half Height Slider- Parallax',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 16,
  'body' => '[nd_parallax fid="50" full_height="1" overlay="overlay" vertical_align="1" scroll_icon="0" bg_effect="Particle Ground - Parallax Video" bg_fid="49" different_values="0" bg_animation="0"]
[nd_title title="man is free at the moment he wishes to be." tag="h2" title_style="hs-text-6" align="text-center" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_title title="|{span|}BE|{/span|}" tag="h1" title_style="hs-text-11" align="text-center" text_mask="0" different_values="0" font="font-second" style_padding_top="15"]
[nd_text_rotator text_line_1="courageous" text_line_2="fearless" text_line_3="impeccable" text_line_4="adventurer" op="Add new row" type="is-full-width clip" different_values="0" extra_classes="uppercase"]
[/nd_text_rotator]
[/nd_title]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-dark f-white" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Parallax video - text rotator',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 17,
  'body' => '[html format="html" different_values="0" p_classes="widget-p"]<p>"Luasi commodi nemo dolores, aliquam, eius deleniti sapiente voluptatem reiciendis dolore error laudantium sequi non laborum alias. Consequuntur, distinctio ratione maiores voluptatem."</p>[/html]
 ',
  'info' => 'Quote Of The Day',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 18,
  'body' => '[nd_menu menu="main-menu" type="sticky" different_values="0" font_color="light"]
[/nd_menu]
[nd_parallax fid="51" full_height="1" vertical_align="1" overlay="light overlay" scroll_icon="0" different_values="0" bg_effect=" - None - " bg_animation="0"]
[nd_container different_values="0"]
[row different_values="0" font="font-second"]
[col tablet="8" different_values="0"]
[nd_title title="Our " title_bold_after="Blog" tag="h1" title_style="hs-text-12" different_values="0" align="text-left" font_color="f-black" text_mask="0" animation="fadeInLeft"]
[/nd_title]
[nd_title title="HEAR AWESOME STORIES HERE" tag="h4" title_style="hs-text-6" different_values="0" align="text-left" font_color="f-black" text_mask="0" animation="fadeInLeft"]
[/nd_title]
[/col]
[col tablet="4" different_values="0"]
[nd_breadcrumb align="text-right" different_values="0" bg="bg-transparent-breadcrumb" style_margin_top="30" animation="fadeInRight"]
[/nd_breadcrumb]
[/col]
[/row]
[/nd_container]
[/nd_parallax]
 ',
  'info' => 'Header: Blog Sidebar',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 19,
  'body' => '[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
[nd_parallax fid="52" full_height="1" vertical_align="1" overlay="overlay" scroll_icon="0" different_values="0" bg_effect=" - None - " bg_animation="0"]
[nd_container different_values="0"]
[row different_values="0" font="font-second"]
[col tablet="8" different_values="0"]
[nd_title title="Our " title_bold_after="Blog" tag="h1" title_style="hs-text-12" different_values="0" align="text-left" font_color="f-white" text_mask="0" animation="fadeInLeft"]
[/nd_title]
[nd_title title="HEAR AWESOME STORIES HERE" tag="h4" title_style="hs-text-6" different_values="0" align="text-left" font_color="f-white" text_mask="0" animation="fadeInLeft"]
[/nd_title]
[/col]
[col tablet="4" different_values="0"]
[nd_breadcrumb align="text-right" different_values="0" bg="bg-transparent-breadcrumb" style_margin_top="30" animation="fadeInRight"]
[/nd_breadcrumb]
[/col]
[/row]
[/nd_container]
[/nd_parallax]
 ',
  'info' => 'Header: Blog Post - Right Sidebar',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 20,
  'body' => '[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Menu',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 21,
  'body' => '[nd_parallax fid="56" full_height="0" height_percent="78" overlay="overlay" vertical_align="1" scroll_icon="0" bg_effect=" - None - " bg_animation="0" different_values="0"]
[nd_title title="MINIMAL / LIGHT WEIGHT / ELEGANT / PARALLAX / NEW TRENDS" tag="h2" title_style="hs-text-6" align="text-center" font_color="f-white" text_mask="0" font="font-second" different_values="0" animation="fadeInUp" animation_delay="1000"]
[/nd_title]
[nd_title title="VOLAR" tag="h1" title_style="hs-text-2 font-second" align="text-center" text_mask="0" style_padding_top="20" style_padding_bottom="30" extra_classes="letter-space" different_values="0" animation="fadeInUp" animation_delay="2000"]
[/nd_title]
[nd_button button_type="btn-white-transparent" centered="1" link="#page-2" text="see the demos!" text_hover="hi there!" style_width="162" inline="0" different_values="0" id="in-page-scroll" animation="fadeInUp" animation_delay="3000"]
[/nd_button]
[/nd_parallax]
 ',
  'info' => 'Header: Demo',
  'format' => 'shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 22,
  'body' => '[nd_parallax fid="57" full_height="0" height_percent="78" vertical_align="1" scroll_icon="0" bg_effect="Spooky jungle" bg_animation="0" different_values="0"]
[nd_title tag="h4" title_style="hs-text-10" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[nd_text_rotator text_line_1="wilderness," text_line_2="our planet," text_line_3="green trees," text_line_4="let\'s love\'em!" op="Add new row" type="letters rotate-3" different_values="0"]
[/nd_text_rotator]
[/nd_title]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-dark f-white" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Spooky jungle - parallax',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 23,
  'body' => '[nd_parallax fid="58" full_height="1" vertical_align="1" scroll_icon="0" bg_effect="Blur on Scroll" bg_animation="0" different_values="0"]
[nd_slider type="single" different_values="0"]
[nd_slider_item different_values="0"]
[nd_title title="creative" tag="h4" title_style="hs-text-2 font-second" align="text-center" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="Watch the show" text_hover="check it now" style_width="162" inline="1" different_values="0" style_margin_right="15"]
[/nd_button]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="See the work" text_hover="check it now" style_width="162" inline="1" different_values="0"]
[/nd_button]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_title title="rise and fly" tag="h4" title_style="hs-text-10" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[nd_title title="feel the breeze, discover your soul, touch the sky " tag="h4" title_style="hs-text-6" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_title title="try the beauty yourself" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="Words are not feelings" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="elegent, smooth, lightweight" tag="h4" title_style="hs-text-detail" align="text-center" text_mask="0" different_values="0" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-default" centered="1" link="#" text="See our work" text_hover="watch the show" style_width="162" inline="0" style_margin_top="30" different_values="0"]
[/nd_button]
[/nd_slider_item]
[/nd_slider]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-dark" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Blur on scroll - animate text slider',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 24,
  'body' => '[nd_parallax full_height="1" vertical_align="1" scroll_icon="0" bg_effect="Zoom out on scroll" bg_animation="0" different_values="0"]
[nd_bg_slider block_height="full-screen" different_values="0"]
[nd_bg_slider_item fid="59" different_values="0" overlay="overlay"]
[nd_title title="creative" tag="h4" title_style="hs-text-2 font-second" align="text-center" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="Watch the show" text_hover="check it now" style_width="162" inline="1" different_values="0" style_margin_right="15"]
[/nd_button]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="See the work" text_hover="check it now" style_width="162" inline="1" different_values="0"]
[/nd_button]
[/nd_bg_slider_item]
[nd_bg_slider_item fid="60" different_values="0" overlay="overlay"]
[nd_title title="rise and fly" tag="h4" title_style="hs-text-10" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[nd_title title="feel the breeze, discover your soul, touch the sky " tag="h4" title_style="hs-text-6" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[/nd_bg_slider_item]
[nd_bg_slider_item fid="61" different_values="0" overlay="overlay"]
[nd_title title="try the beauty yourself" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="Words are not feelings" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="elegent, smooth, lightweight" tag="h4" title_style="hs-text-detail" align="text-center" text_mask="0" different_values="0" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#" text="See our work" text_hover="watch the show" style_width="162" inline="0" style_margin_top="30" different_values="0"]
[/nd_button]
[/nd_bg_slider_item]
[/nd_bg_slider]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Animate slider - zoom out on scroll',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 25,
  'body' => '[nd_bg_slider block_height="full-screen" different_values="0" type="owl-hs-slider-zoom"]
[nd_bg_slider_item fid="63" different_values="0" bg_fid="62" overlay="overlay"]
[nd_title title="creative" tag="h4" title_style="hs-text-2 font-second" align="text-center" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="Watch the show" text_hover="check it now" style_width="162" inline="1" different_values="0" style_margin_right="15"]
[/nd_button]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="See the work" text_hover="check it now" style_width="162" inline="1" different_values="0"]
[/nd_button]
[/nd_bg_slider_item]
[nd_bg_slider_item fid="71" different_values="0" overlay="overlay"]
[nd_title title="try the beauty yourself" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="Words are not feelings" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="elegent, smooth, lightweight" tag="h4" title_style="hs-text-detail" align="text-center" text_mask="0" different_values="0" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-default" centered="1" link="#" text="See our work" text_hover="watch the show" style_width="162" inline="0" style_margin_top="30" different_values="0"]
[/nd_button]
[/nd_bg_slider_item]
[nd_bg_slider_item fid="70" different_values="0" overlay="overlay"]
[nd_title title="rise and fly" tag="h4" title_style="hs-text-10" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[nd_title title="feel the breeze, discover your soul, touch the sky " tag="h4" title_style="hs-text-6" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[/nd_bg_slider_item]
[/nd_bg_slider]
[nd_menu menu="main-menu" type="navbar-dark" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Zoom Slider - Parallax',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 26,
  'body' => '[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
[nd_parallax fid="64" full_height="1" overlay="overlay" vertical_align="1" scroll_icon="1" bg_effect="Fold up on scroll" bg_animation="0" different_values="0"]
[nd_container different_values="0"]
[nd_title title="A CREATIVE STUDIO WITH TALENTED MEMBERS" tag="h2" title_style="hs-text-6" align="text-left" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_title title_bold_before="Summit " title="Themes" tag="h4" title_style="hs-text-12" align="text-left" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="0" link="#" text="Begin the Journey" text_hover="Let\'s slide down.." style_width="182" inline="0" different_values="0" style_margin_top="15"]
[/nd_button]
[/nd_container]
[/nd_parallax]
 ',
  'info' => 'Header: Fold Up On Scroll',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 27,
  'body' => '[nd_menu menu="main-menu" type="sticky" different_values="0"]
[/nd_menu]
[nd_parallax fid="65" full_height="1" vertical_align="1" scroll_icon="0" bg_effect=" - None - " bg_animation="0" different_values="0" overlay="overlay"]
[nd_slider type="single" different_values="0"]
[nd_slider_item different_values="0"]
[nd_title title="VOLAR" tag="h1" title_style="hs-text-10" align="text-center" font_color="f-white" text_mask="0" different_values="0" font="font-second" style_margin_bottom="50" extra_classes="letter-space"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="Watch the show" text_hover="check it now" style_width="162" inline="1" different_values="0" style_margin_right="40"]
[/nd_button]
[nd_button button_type="btn-transparent-white" centered="1" link="#contact" text="See the work" text_hover="check it now" style_width="162" inline="1" different_values="0" style_margin_left="40"]
[/nd_button]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_title title="rise and fly" tag="h4" title_style="hs-text-10" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[nd_title title="feel the breeze, discover your soul, touch the sky " tag="h4" title_style="hs-text-6" align="text-center" text_mask="0" different_values="0" font="font-second" font_color="f-white"]
[/nd_title]
[/nd_slider_item]
[nd_slider_item different_values="0"]
[nd_title title="try the beauty yourself" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="Words are not feelings" tag="h4" title_style="hs-text-4" align="text-center" text_mask="0" font="font-second" different_values="0" font_color="f-white"]
[/nd_title]
[nd_title title="elegent, smooth, lightweight" tag="h4" title_style="hs-text-detail" align="text-center" text_mask="0" different_values="0" font_color="f-white"]
[/nd_title]
[nd_button button_type="btn-default" centered="1" link="#" text="See our work" text_hover="watch the show" style_width="162" inline="0" style_margin_top="30" different_values="0"]
[/nd_button]
[/nd_slider_item]
[/nd_slider]
[/nd_parallax]
 ',
  'info' => 'Header: Text Slider',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 28,
  'body' => '[nd_parallax fid="66" full_height="1" overlay="overlay" vertical_align="1" scroll_icon="1" bg_effect="Zoom out on scroll, Scaled" bg_animation="0" different_values="0"]
[nd_title title="VOLAR, AT THE HEART OF THE BEAUTY" tag="h4" title_style="hs-text-6" align="text-center" text_mask="0" different_values="0" font_color="f-white" style_margin_bottom="10"]
[/nd_title]
[nd_title title_bold_before="VOLAR " title="THEME" tag="h1" title_style="hs-text-10" align="text-center" text_mask="0" different_values="0" font_color="f-white" style_margin_bottom="30"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#" text="Learn more" text_hover="Are you ready?" style_width="162" inline="0" different_values="0"]
[/nd_button]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Zoom out on Scroll',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 29,
  'body' => '[nd_parallax full_height="1" overlay="overlay" vertical_align="1" scroll_icon="1" bg_effect="Youtube Background" bg_animation="0" youtube_url="https://www.youtube.com/watch?v=70QxE3zJM_8" different_values="0" fid="56"]
[nd_title title="WORDS ARE NOT FEELINGS" tag="h1" title_style="hs-text-4" align="text-center" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[nd_title title="FEEL THE FREEDOM YOURSELF" tag="h1" title_style="hs-text-4" align="text-center" font_color="f-white" text_mask="0" different_values="0" style_margin_top="10" style_margin_bottom="30"]
[/nd_title]
[nd_title title="Elegent, Smooth, Lightweight" tag="h4" title_style="hs-text-detail" align="text-center" font_color="f-white" text_mask="0" different_values="0" style_margin_bottom="40"]
[/nd_title]
[nd_button button_type="btn-transparent-white" centered="1" link="#" text="See our works" text_hover="are you ready?" style_width="162" inline="0" different_values="0" style_margin_top="40"]
[/nd_button]
[/nd_parallax]
[nd_menu menu="main-menu" type="navbar-default" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: Youtube Background',
  'format' => 'dynamic_shortcodes',
);
  $export['block_custom'][] = array(
  'bid' => 30,
  'body' => '[nd_bg_slider block_height="full-screen" type="bg-slideshow" different_values="0"]
[nd_bg_slider_item fid="68" different_values="0" overlay="overlay"]
[/nd_bg_slider_item]
[nd_bg_slider_item fid="67" overlay="overlay" different_values="0"]
[/nd_bg_slider_item]
[nd_bg_slider_item fid="69" overlay="overlay" different_values="0"]
[/nd_bg_slider_item]
[nd_title title="NEW AGE" tag="h1" title_style="hs-text-2 font-second" align="text-center" font_color="f-white" text_mask="0" different_values="0" style_margin_bottom="10"]
[/nd_title]
[nd_title title="IT IS A STUNNING MODERN PIECE OF ART" tag="h4" title_style="hs-text-6" align="text-center" font_color="f-white" text_mask="0" different_values="0"]
[/nd_title]
[/nd_bg_slider]
[nd_menu menu="main-menu" type="navbar-dark" different_values="0"]
[/nd_menu]
 ',
  'info' => 'Header: BG Text Slider',
  'format' => 'dynamic_shortcodes',
);
  $export['block_node_type'][] = array(
  'module' => 'block',
  'delta' => 3,
  'type' => 'nd_portfolio',
);
return $export;
}
