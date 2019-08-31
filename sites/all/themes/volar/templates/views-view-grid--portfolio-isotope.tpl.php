<?php

/**
 * @file
 * Default simple view template to display a rows in a grid.
 *
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 *
 * @ingroup views_templates
 */
// Match Column numbers to Bootsrap class
$columns_classes = array(1 => 12, 2 => 6, 3 => 4, 4 => 3, 6 => 2, 12 => 1);
$bootsrap_class = isset($columns_classes[$view->style_plugin->options['columns']]) ? $columns_classes[$view->style_plugin->options['columns']] : 3;
$delay_attr = '';
global $projects_categories;
?>
<div class="text-center">
  <?php if(!empty($projects_categories)): ?>
    <div id="portfolio-filters" class="portfolio-filters margin-top-20 ripple-group-parent wow fadeIn" data-wow-offset="100" data-wow-delay=".1s">
      <a class="btn btn-animated btn-split ripple-group" data-text="<?php print t('all works'); ?>" data-filter="*">
          <span class="btn-icon icon-tools"></span>
      </a>
      <?php  foreach($projects_categories as $id => $category): $icon = _get_node_field($category, 'field_icon'); ?>
        <span class="btn-seperator">|</span>
        <a class="btn btn-animated btn-split ripple-group" data-text="<?php print t($category->name); ?>" data-filter=".<?php print $id; ?>">
          <span class="btn-icon <?php print $icon[0]['value']; ?>"></span>
        </a>
      <?php endforeach; ?>
    </div>
  <?php endif; ?>

  <ul id = "portfolio-container" class="portfolio-container real-gapped colored-mask masonry clearlist row portfolio-hover-effect<?php if ($row_classes[0]) { print ' ' . $row_classes[0];  } ?>">
    <?php foreach ($rows as $row_number => $columns): ?>
        <?php foreach ($columns as $column_number => $item): ?>
          <?php print $item; ?>
        <?php endforeach; ?>
    <?php endforeach; ?>
  </ul>

</div>