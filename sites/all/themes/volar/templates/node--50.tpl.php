
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="content"<?php print $content_attributes; ?>>
    <div id="quicktabs-calculator_quick">
      <div class="tab step step-1">
        <div class="inner-tab">
          <div id="tab-calculator-step-1"><?php print t('Source language'); ?></div>
        </div>
        <div class="calc-cont">
          <?php $block = module_invoke('views', 'block_view', 'calculator-block');
          print render($block['content']); ?>
        </div>
      </div>
      <div class="tab step step-2">
        <div class="inner-tab">
          <div id="tab-calculator-step-2"><?php print t('Target language'); ?></div>
        </div>
        <div class="calc-cont">
          <?php $block = module_invoke('views', 'block_view', 'calculator-block_2');
          print render($block['content']); ?>
        </div>
      </div>
      <div class="tab step step-3">
        <div class="inner-tab">
          <div id="tab-calculator-step-3"><?php print t('Total number of words'); ?></div>
          <span class="data-char-target"><span></span></span>
        </div>
        <div class="calc-cont">
          <?php $block = module_invoke('dvc', 'block_view', 'symbol');
          print render($block['content']); ?>
        </div>
      </div>
      <div class="tab step step-4">
        <div class="inner-tab with-rub">
          <?php print $link_to_popup; ?>
        </div>
      </div>
    </div>
  </div>
</div>

