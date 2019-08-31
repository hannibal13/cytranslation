<?php
/**
 * Implements hook_form_FORM_ID_alter().
 *
 * @param $form
 *   The form.
 * @param $form_state
 *   The form state.
 */
function volar_form_system_theme_settings_alter(&$form, &$form_state) {
  drupal_add_css(drupal_get_path('theme', 'Volar') . '/css/theme-settings.css');
  $form['options'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'main',
    '#weight' => '-10',
    '#title' => t('Volar Theme settings'),
  );

  if(module_exists('nikadevs_cms')) {
    $form['options']['nd_layout_builder'] = nikadevs_cms_layout_builder();
  }
  else {
    drupal_set_message('Enable NikaDevs CMS module to use layout builder.');
  }

  $form['options']['main'] = array(
    '#type' => 'fieldset',
    '#title' => t('Main settings'),
  );
  $skins = array('scuba-blue', 'light-green', 'black-white', 'red', 'gold', 'orange', 'light-purple', 'purple', 'olive', 'dark-blue', 'brown', 'pink', 'fluorescent-blue', 'leaf-green', 'yellow');
  $form['options']['main']['skin'] = array(
    '#type' => 'radios',
    '#title' => t('Skin'),
    '#options' => array_combine($skins, $skins),
    '#default_value' => theme_get_setting('skin'),
    '#attributes' => array('class' => array('color-radios')),
  );
  $form['options']['main']['retina'] = array(
    '#type' => 'checkbox',
    '#title' => t('Enable Retina Script'),
    '#default_value' => theme_get_setting('retina'),
    '#description'   => t("Only for retina displays and for manually added images. The script will check if the same image with suffix @2x exists and will show it."),
  );
  $form['options']['main']['loader_image'] = array(
    '#type' => 'checkbox',
    '#title' => t('Page loading GIF image'),
    '#default_value' => theme_get_setting('loader_image'),
  );

  $form['options']['css'] = array(
    '#type' => 'fieldset',
    '#title' => t('Customizations'),
  );
  $form['options']['css']['custom_css'] = array(
    '#type' => 'textarea',
    '#title' => t('Custom CSS'),
    '#default_value' => theme_get_setting('custom_css'),
    '#attributes' => array('class' => array('form-control')),
  );
}
