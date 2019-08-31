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
$columns = isset($view->style_plugin->options['columns']) ? $view->style_plugin->options['columns'] : 2;
?>
<div id = "team-section" class="team-items">
  <!-- Team Carousel -->
  <div data-columns = "<?php print $columns; ?>" class="team-carousel owl-carousel carousel dots-under">
    <?php foreach ($rows as $row_number => $columns): ?>
      <?php foreach ($columns as $column_number => $item): ?>
        <?php print $item; ?>
      <?php endforeach; ?>
    <?php endforeach; ?>
  </div>
</div>