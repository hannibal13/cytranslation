<?php

function _count_comments($val) {
  return isset($val['#comment']);
}

function _views_field(&$fields, $field) {
  if(isset($fields[$field]->content)) {
    $output = $fields[$field]->content;
    unset($fields[$field]);
    return $output;
  }
}

function wrap_last_word($string, $tag = 'span') {
  $string = trim($string);
  $words = explode(' ', $string);
  if(count($words) > 1) {
    $last_word = array_pop($words);
    $string = implode(' ', $words) . ' <' . $tag . '>' . $last_word . '</' . $tag . '>';
  }
  return $string;
}

function _print_views_fields($fields, $exceptions = array()) {
  //global $one; if(!$one) { dpm($fields); $one = 1; }

  foreach ($fields as $field_name => $field) {
    if (!in_array($field_name, $exceptions)) {
      print $field->content;
    }
  }
}

function volar_image_style($variables) {
  $variables['alt'] = empty($variables['alt']) ? 'Alt' : '';
  $variables['attributes']['class'][] = 'img-responsive';
  return theme_image_style($variables);
}

function volar_image($variables) {
  $variables['alt'] = empty($variables['alt']) ? 'Alt' : '';
  $variables['attributes']['class'][] = 'img-responsive';
  return theme_image($variables);
}

/**
 * Implementation of hook_preprocess_html().
 */
function volar_preprocess_html(&$variables) {

  $get_value = isset($_GET['skin']) ? $_GET['skin'] : '';
  if(!$get_value) {
    $args = arg();
    $get_value = array_pop($args);
  }
  $skins = array('scuba-blue', 'light-green', 'black-white', 'red', 'gold', 'orange', 'light-purple', 'purple', 'olive', 'dark-blue', 'brown', 'pink', 'fluorescent-blue', 'leaf-green', 'yellow');
  // Allow to override the skin by argument
  $skin = in_array($get_value, $skins) ? $get_value : theme_get_setting('skin');
  if($skin && $skin != 'default') {
    drupal_add_css(drupal_get_path('theme', 'volar') . '/css/theme/' . $skin . '.css', array('group' => CSS_THEME));
  }

  drupal_add_css(drupal_get_path('theme', 'volar_sub') . '/css/custom.css', array('group' => CSS_THEME));
  if(theme_get_setting('retina')) {
    drupal_add_js(drupal_get_path('theme', 'volar') . '/js/retina.min.js');
  }
  if(theme_get_setting('custom_css')) {
    drupal_add_css(theme_get_setting('custom_css'), array('type' => 'inline', 'group' => CSS_THEME));
  }
  drupal_add_js(array(
    'theme_path' => drupal_get_path('theme', 'volar'),
    'base_path' => base_path(),
  ), 'setting');
}

/**
 * Implementation of hook_css_alter().
 */
function volar_css_alter(&$css) {
  // Disable standart css from ubercart
  unset($css[drupal_get_path('module', 'system') . '/system.menus.css']);
  //unset($css[drupal_get_path('module', 'system') . '/system.messages.css']);
  //unset($css[drupal_get_path('module', 'system') . '/system.base.css']);
  unset($css[drupal_get_path('module', 'system') . '/system.theme.css']);
  unset($css[drupal_get_path('module', 'search') . '/search.css']);
}

/**
 * Update breadcrumbs
*/
function volar_breadcrumb($variables) {
  $breadcrumb = $variables['breadcrumb'];
  if (!empty($breadcrumb)) {

    if (!drupal_is_front_page() && !empty($breadcrumb)) {
      $node_title = filter_xss(menu_get_active_title(), array());
      $breadcrumb[] = t($node_title);
    }
    if (count($breadcrumb) > 1) {
      $output = theme('item_list', array('items' => $breadcrumb, 'type' => 'ol', 'attributes' => array('class' => array('breadcrumb'))));
      return $output;
    }
  }
}

/**
 * Implements hook_element_info_alter().
 */
function volar_element_info_alter(&$elements) {
  foreach ($elements as &$element) {
    if (!empty($element['#input'])) {
      $element['#process'][] = '_volar_process_input';
    }
  }
}

function _volar_process_input(&$element, &$form_state) {
  $types = array(
    'textarea',
    'textfield',
    'webform_email',
    'webform_number',
    'select',
    'password',
    'password_confirm',
  );
  if (in_array($element['#type'], array('textfield', 'textarea', 'password')) && isset($element['#title'])) {
    $element['#title_display'] = 'none';
  }
  /*
  if($element['#type'] != 'textfield') {
    $element['#wrapper_attributes']['class'][] = 'form-group';
  }
  if (!empty($element['#type']) && (in_array($element['#type'], $types))) {
    if (isset($element['#title']) && $element['#title_display'] != 'none' && $element['#type'] != 'select') {
      $element['#attributes']['placeholder'] = $element['#title'];
      $element['#title_display'] = 'none';
    }
    if (!isset($element['#attributes']['class']) || !is_array($element['#attributes']['class']) || (!in_array('input-lg', $element['#attributes']['class'])) && !in_array('input-sm', $element['#attributes']['class'])) {
      $element['#attributes']['class'][] = 'input-md';
    }
    $element['#attributes']['class'][] = 'form-control';
  }*/

  return $element;
}

/**
 *  Implements theme_textfield().
 */
function volar_textfield($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = isset($element['#attributes']['type']) ? $element['#attributes']['type'] : 'text';
  $element['#attributes']['class'][] = 'input-field';

  $output = '';
  // Used in comments
  if (!isset($element['#attributes']['placeholder']) && isset($element['#title'])) {
    $output .= '<label class="input-label" for="' . $element['#id'] . '">
      <span class="input-label-content font-second" data-content="' . t($element['#title']) . '">' . t($element['#title']) . '</span>
    </label>';
    unset($element['#attributes']['placeholder']);
  }

  element_set_attributes($element, array(
    'id',
    'name',
    'value',
    'size',
    'maxlength',
  ));
  $output .= '<input' . drupal_attributes($element['#attributes']) . ' />';
  $extra = '';
  if ($element['#autocomplete_path'] && drupal_valid_path($element['#autocomplete_path'])) {
    drupal_add_library('system', 'drupal.autocomplete');
    $element['#attributes']['class'][] = 'form-autocomplete';
    $attributes = array();
    $attributes['type'] = 'hidden';
    $attributes['id'] = $element['#attributes']['id'] . '-autocomplete';
    $attributes['value'] = url($element['#autocomplete_path'], array('absolute' => TRUE));
    $attributes['disabled'] = 'disabled';
    $attributes['class'][] = 'autocomplete';
    $output = '<div class="input-group">' . $output . '<span class="input-group-addon"><i class = "fa fa-refresh"></i></span></div>';
    $extra = '<input' . drupal_attributes($attributes) . ' />';
  }
  $output .= $extra;

  $element['#input_prefix'] = isset($element['#input_prefix']) ? $element['#input_prefix'] : '';
  $output = '<div class = "input padding-bottom-xs-50 padding-bottom-40">' .  $element['#input_prefix'] . $output . '</div>';

  return $output;
}

/**
 * Theme function to render an email component.
 */
function volar_webform_email($variables) {
  $element = $variables['element'];

  // This IF statement is mostly in place to allow our tests to set type="text"
  // because SimpleTest does not support type="email".
  if (!isset($element['#attributes']['type'])) {
    $element['#attributes']['type'] = 'email';
  }

  // Convert properties to attributes on the element if set.
  foreach (array('id', 'name', 'value', 'size') as $property) {
    if (isset($element['#' . $property]) && $element['#' . $property] !== '') {
      $element['#attributes'][$property] = $element['#' . $property];
    }
  }
  _form_set_class($element, array('input-field'));


  $output = '';
  if (isset($element['#attributes']['placeholder'])) {
    $element['#title_display'] = 'none';
    $output .= '<label class="input-label" for="' . $element['#id'] . '">
      <span class="input-label-content font-second" data-content="' . t($element['#attributes']['placeholder']) . '">' . t($element['#attributes']['placeholder']) . '</span>
    </label>';
    unset($element['#attributes']['placeholder']);
  }
  $element['#input_prefix'] = isset($element['#input_prefix']) ? $element['#input_prefix'] : '';

  $output .= '<input' . drupal_attributes($element['#attributes']) . ' />';
  $output = '<div class = "input padding-bottom-xs-50 padding-bottom-40">' .  $element['#input_prefix'] . $output . '</div>';

  return $output;
}


/**
 *  Implements theme_password().
 */
function volar_password($variables) {
 $element = $variables['element'];
  $element['#attributes']['type'] = 'password';
  element_set_attributes($element, array('id', 'name', 'size', 'maxlength'));

  $element['#attributes']['class'][] = 'input-field';

  $output = '';
  // Used in comments
  if (!isset($element['#attributes']['placeholder'])) {
    $output .= '<label class="input-label" for="' . $element['#id'] . '">
      <span class="input-label-content font-second" data-content="' . t($element['#title']) . '">' . t($element['#title']) . '</span>
    </label>';
    unset($element['#attributes']['placeholder']);
  }

  $output .= '<input' . drupal_attributes($element['#attributes']) . ' />';

  $output = '<div class = "input padding-bottom-xs-50 padding-bottom-40">' . $output . '</div>';
  return $output;
}
/**
 *  Implements theme_textarea().
 */
function volar_textarea($variables) {
  $element = $variables['element'];
  element_set_attributes($element, array('id', 'name', 'cols', 'rows'));
  _form_set_class($element, array('input-field textarea'));

  $wrapper_attributes = array(
    'class' => array('message padding-bottom-xs-40 padding-bottom-30'),
  );

  // Add resizable behavior.
  if (!empty($element['#resizable'])) {
    drupal_add_library('system', 'drupal.textarea');
    $wrapper_attributes['class'][] = 'resizable';
  }

  $output = '<div' . drupal_attributes($wrapper_attributes) . '>';

  if (isset($element['#title'])) {
    $output .= '<label class="textarea-label font-second" for="' . $element['#id'] . '">' . t($element['#title']) . '</label>';
  }

  $output .= '<textarea' . drupal_attributes($element['#attributes']) . '>' . check_plain($element['#value']) . '</textarea>';
  $output .= '</div>';
  return $output;
}


/**
 * Implements hook_button().
 */
function volar_button($variables) {
  $element = $variables['element'];
  $element['#attributes']['type'] = 'submit';
  element_set_attributes($element, array('id', 'name', 'value'));

  $element['#attributes']['class'][] = 'form-' . $element['#button_type'];
  if (!empty($element['#attributes']['disabled'])) {
    $element['#attributes']['class'][] = 'form-button-disabled';
  }
  $element['#attributes']['class'][] = 'btn';

  $wrapper_classes = '';
  if ((!isset($element['#add_black']) && $element['#value'] == t('Send It')) || $element['#value'] == t('Upload') || $element['#value'] == t('Remove')) {
    _form_set_class($element, array('btn-animated', 'btn-contact', 'ripple-alone'));
    $wrapper_classes .= ' text-center';
  }
  else{
//    $element['#attributes']['class'][] = 'btn-color';
  }

  return '<span class = "' . $wrapper_classes . '"><input' . drupal_attributes($element['#attributes']) . ' /></span>';
}

function volar_url_outbound_alter(&$path, &$options, $original_path) {
  $alias = drupal_get_path_alias($original_path);
  $url = parse_url($alias);
  if (isset($url['fragment'])) {
    //set path without the fragment
    $path = isset($url['path']) ? $url['path'] : '';

    //prevent URL from re-aliasing
    $options['alias'] = TRUE;

    //set fragment
    $options['fragment'] = $url['fragment'];
  }
}

function volar_pager($variables) {
  $tags = $variables['tags'];
  $element = $variables['element'];
  $parameters = $variables['parameters'];
  $quantity = $variables['quantity'];
  global $pager_page_array, $pager_total;

  // Calculate various markers within this pager piece:
  // Middle is used to "center" pages around the current page.
  $pager_middle = ceil($quantity / 2);
  // current is the page we are currently paged to
  $pager_current = $pager_page_array[$element] + 1;
  // first is the first page listed by this pager piece (re quantity)
  $pager_first = $pager_current - $pager_middle + 1;
  // last is the last page listed by this pager piece (re quantity)
  $pager_last = $pager_current + $quantity - $pager_middle;
  // max is the maximum page number
  $pager_max = $pager_total[$element];
  // End of marker calculations.

  // Prepare for generation loop.
  $i = $pager_first;
  if ($pager_last > $pager_max) {
    // Adjust "center" if at end of query.
    $i = $i + ($pager_max - $pager_last);
    $pager_last = $pager_max;
  }
  if ($i <= 0) {
    // Adjust "center" if at start of query.
    $pager_last = $pager_last + (1 - $i);
    $i = 1;
  }
  // End of generation loop preparation.

  $li_first = theme('pager_first', array('text' => (isset($tags[0]) ? $tags[0] : t('« first')), 'element' => $element, 'parameters' => $parameters));
  $li_previous = theme('pager_previous', array('text' => (isset($tags[1]) ? $tags[1] : t('‹ previous')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_next = theme('pager_next', array('text' => (isset($tags[3]) ? $tags[3] : t('next ›')), 'element' => $element, 'interval' => 1, 'parameters' => $parameters));
  $li_last = theme('pager_last', array('text' => (isset($tags[4]) ? $tags[4] : t('last »')), 'element' => $element, 'parameters' => $parameters));

  if ($pager_total[$element] > 1) {
    if ($li_first) {
      $items[] = array(
        'class' => array('pager-first'),
        'data' => $li_first,
      );
    }
    if ($li_previous) {
      $items[] = array(
        'class' => array('pager-previous'),
        'data' => $li_previous,
      );
    }

    // When there is more than one page, create the pager list.
    if ($i != $pager_max) {
      if ($i > 1) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
      // Now generate the actual pager piece.
      for (; $i <= $pager_last && $i <= $pager_max; $i++) {
        if ($i < $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_previous', array('text' => $i, 'element' => $element, 'interval' => ($pager_current - $i), 'parameters' => $parameters)),
          );
        }
        if ($i == $pager_current) {
          $items[] = array(
            'class' => array('pager-current'),
            'data' => '<a href = "#" class = "active">' . $i . '</a>',
          );
        }
        if ($i > $pager_current) {
          $items[] = array(
            'class' => array('pager-item'),
            'data' => theme('pager_next', array('text' => $i, 'element' => $element, 'interval' => ($i - $pager_current), 'parameters' => $parameters)),
          );
        }
      }
      if ($i < $pager_max) {
        $items[] = array(
          'class' => array('pager-ellipsis'),
          'data' => '…',
        );
      }
    }
    // End generation.
    if ($li_next) {
      $items[] = array(
        'class' => array('pager-next'),
        'data' => $li_next,
      );
    }
    if ($li_last) {
      $items[] = array(
        'class' => array('pager-last'),
        'data' => $li_last,
      );
    }
    $output = '<div class = "text-center"><div class = "pagination pager">';
    foreach($items as $item) {
      $output .= $item['data'] . ' ';
    }
    $output .= '</div></div>';
    return $output;
  }
}

function volar_preprocess_node(&$variables, $hook) {
  ctools_include('modal');
  ctools_include('ajax');
  ctools_modal_add_js();
  if (isset($variables['node'])) {
    $variables['theme_hook_suggestions'][] = "node__" . $variables['node']->nid;
    $variables['link_to_popup'] = l(t('Order'), 'popup/nojs', array('attributes' => array('id' =>'popup-link', 'class' => 'ctools-use-modal')));
  }
}

function volar_process_html(&$vars) {
  $settings = variable_get('dvc_admin_common_variables', array());
  foreach ($settings['perezvoni'] as $var => $data) {
    $vars[$var] = $data;
  }
}
