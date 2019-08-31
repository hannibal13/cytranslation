<?php
/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
$image = _get_node_field($row, 'field_field_image');
$videos = _get_node_field($row, 'field_field_video');
$path = isset($image[0]) ? $image[0]['raw']['uri'] : '';
$node_path = _views_field($fields, 'path');
// Isotope filter
global $projects_categories;
$categories = array();  
if(isset($row->field_field_services) && !empty($row->field_field_services)) {
  foreach($row->field_field_services as $taxonomy) {
    $category = $taxonomy['raw']['taxonomy_term'];
    $category_id = $view->vid . '-' . $taxonomy['raw']['taxonomy_term']->tid;
    $projects_categories[$category_id] = $category;
    $categories[] = $category_id;
  }
}
// Match Column numbers to Bootsrap class
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
// Render Video background
if(!empty($videos)) {
  $video_urls = '';
  foreach($videos as $video) {
    $extension = substr($video['raw']['filename'], strrpos($video['raw']['filename'], '.') + 1);
    $video_path = file_create_url($video['raw']['uri']);
    $video_path = substr($video_path, 0, strrpos($video_path, '.'));
    $video_urls .= $extension . ': ' . $video_path . ', ';
  }
}
$bootsrap_class .= !empty($videos) ? ' video' : '';
?>
<li class = "portfolio-item col-sm-6 col-xs-12 col-md-<?php print $bootsrap_class; ?> <?php print implode(' ', $categories); ?> ">
  <?php if(!empty($videos)): ?>
    <div class="video-work">
      <div class="video-background" data-vide-bg="<?php print $video_urls . 'poster: ' . base_path() . drupal_get_path('theme', 'volar') . '/img/work02'; ?>" data-vide-options="position: 50% 90%"></div>
    </div>
  <?php endif; ?>
  <div class="portfolio-item-img">
    <?php if(!empty($videos)): ?>
      <?php print theme('image', array('path' => drupal_get_path('theme', 'volar') . '/img/video-work-real-gapped.png')); ?>
    <?php else: ?>
      <?php print _views_field($fields, 'field_image'); ?>
    <?php endif; ?>
  </div>
  <div class="portfolio-item-info font-second">
    <h3 class="portfolio-item-title"><?php print _views_field($fields, 'title'); ?></h3>
    <div class="portfolio-item-detail">
      <p><?php print _views_field($fields, 'field_short_description'); ?></p>
      <?php _print_views_fields($fields); ?>
      <!-- LightBox Button -->
      <a href="<?php print file_create_url($path); ?>" class="icon-magnifying-glass lightbox" data-lightbox-gallery="gallery<?php print $view->vid; ?>" data-lightbox-hidpi="<?php print file_create_url($path); ?>"></a>
      <!--/ End LightBox Button -->
      <a href="<?php print $node_path; ?>" class="animsition-link icon-attachment"></a>
    </div>
  </div>
</li>