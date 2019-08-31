<?php

/**
 * @file
 * Default theme implementation to provide an HTML container for comments.
 *
 * Available variables:
 * - $content: The array of content-related elements for the node. Use
 *   render($content) to print them all, or
 *   print a subset such as render($content['comment_form']).
 * - $classes: String of classes that can be used to style contextually through
 *   CSS. It can be manipulated through the variable $classes_array from
 *   preprocess functions. The default value has the following:
 *   - comment-wrapper: The current template type, i.e., "theming hook".
 * - $title_prefix (array): An array containing additional output populated by
 *   modules, intended to be displayed in front of the main title tag that
 *   appears in the template.
 * - $title_suffix (array): An array containing additional output populated by
 *   modules, intended to be displayed after the main title tag that appears in
 *   the template.
 *
 * The following variables are provided for contextual information.
 * - $node: Node object the comments are attached to.
 * The constants below the variables show the possible values and should be
 * used for comparison.
 * - $display_mode
 *   - COMMENT_MODE_FLAT
 *   - COMMENT_MODE_THREADED
 *
 * Other variables:
 * - $classes_array: Array of html class attribute values. It is flattened
 *   into a string within the variable $classes.
 *
 * @see template_preprocess_comment_wrapper()
 *
 * @ingroup themeable
 */
$comments_array = array_filter($content['comments'], '_count_comments');
foreach($content['comments'] as $i => $comment) {
  if (is_numeric($i)) {
    $close_tag = strip_tags(str_replace('</div>', '</li></ul>', $content['comments'][$i]['#prefix']), '<ul><li></ul></li>');
    $content['comments'][$i]['#prefix'] = $close_tag . '<li class = "media comment-item">' . str_replace(array('</div>', '<div class="indented">'), array('', '<ul><li class = "media comment-item">'), $content['comments'][$i]['#prefix']);
    $content['comments'][$i]['#suffix'] = '</li>';
  }
}
?>

<?php if($comments_array): ?>
  <section class = "blog-comment-section">
    <?php print render($title_prefix); ?>
    <h2 class="blog-page-post-title margin-bottom-60 font-second"><?php print t('Comments'); ?></h2>
    <?php print render($title_suffix); ?>
    <ul class="media-list text comment-list clearlist">
      <?php print render($content['comments']); ?>
    </ul>
  </section>
<?php endif; ?>

<?php if ($content['comment_form']): ?>
  <section class = "blog-comment-section">
    <h2 class="blog-page-post-title font-second margin-bottom-60"><?php print t('Leave a Reply'); ?></h2>
    <?php
      $content['comment_form']['author']['#prefix'] = '<div class = "row"><div class = "col-xs-12 col-sm-4">';
      $content['comment_form']['author']['#suffix'] = '</div>';
      $content['comment_form']['subject']['#prefix'] = '<div class = "col-xs-12 col-sm-4">';
      $content['comment_form']['subject']['#suffix'] = '</div>';
      $content['comment_form']['field_email']['#prefix'] = '<div class = "col-xs-12 col-sm-4">';
      $content['comment_form']['field_email']['#suffix'] = '</div></div>';
      $content['comment_form']['actions']['submit']['#prefix'] = '<div class="row"><div class="col-xs-12 col-sm-3 padding-top-sm-20 padding-top-xs-10 text-left">';
      $content['comment_form']['actions']['submit']['#suffix'] = '</div></div>';
      $content['comment_form']['actions']['submit']['#attributes']['class'] = array('btn', 'btn-animated', 'btn-contact', 'ripple-alone');
      $content['comment_form']['actions']['submit']['#value'] = t('Send it');
      print render($content['comment_form']);
    ?>
  </section>
<?php endif; ?>