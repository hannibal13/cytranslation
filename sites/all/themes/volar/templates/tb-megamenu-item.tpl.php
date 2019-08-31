<?php
  $href = strpos($item['link']['href'], "_anchor_") !== false ? str_replace("http://_anchor_", '#', $item['link']['href']) : url($item['link']['href'], $item['link']['options']);
  $classes = $submenu ? 'has-dropdown' : '';
  //$classes .= $submenu && $item['link']['depth'] > 1 ? ' dropdown-submenu mul' : ($submenu ? ' has-dropdown' : '');
  $classes .= $item_config['alignsub'] ? ' align-menu-' . $item_config['alignsub'] : '';
  $title = (!empty($item_config['xicon']) ? '<i class="' . $item_config['xicon'] . '"></i> &nbsp; ' : '') . t($item['link']['link_title']);
  $title = str_replace(' ', '&nbsp;', $title);
  $title = $item['link']['depth'] == 1 ? '<span data-hover="' . $title . '">' . $title . '</span>' : $title; 
?>
<?php if(!empty($item_config['caption'])) : ?>
  <li><span class = "title"><?php print t($item_config['caption']);?></span></li>
<?php endif;?>
<li class="<?php print $classes;?>" <?php print $attributes;?>>
  <a href="<?php print in_array($item['link']['href'], array('<nolink>')) ? "#" : $href; ?>" class = "<?php print implode(', ', $a_classes);?>">
    <?php print $title; ?>
  </a>
  <?php print $submenu; ?>
</li>
