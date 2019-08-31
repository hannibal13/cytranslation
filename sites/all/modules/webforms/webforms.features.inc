<?php
/**
 * @file
 * webforms.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function webforms_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function webforms_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Веб-форма'),
      'base' => 'node_content',
      'description' => t('Создайте новую форму или опросник. Результаты отправления и статистика будут записаны и переданы для просмотра пользователям с соответствующими правами доступа.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
