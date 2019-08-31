<?php extract($values);
$locale_enabled = $language && module_exists('locale') && drupal_multilingual() ? TRUE : FALSE; ?>
<div class="position-relative <?php print $type != 'sticky' ? 'height-60' : ''; ?>">
  <!-- sticky: 1) remove"transp-nav" class, add class="sticky-navbar" to #nav-wrapper | 2) remove navbar-fixed-top class from #nav [and navbar-transparent class too] -->
  <div id="nav-wrapper" class="<?php print $type == 'sticky' ? 'transp-nav' : ($type == 'navbar-dark f-white' ? 'transp-nav sticky-navbar sticky-visible' : 'sticky-navbar'); ?>">
      <nav id="nav" class="navbar <?php print $type == 'sticky' ? 'navbar-fixed-top navbar-transparent navbar-dark init-animation-1' : $type; ?>">
          <!-- progressbar -->
          <div id="scroll-progressbar" class="scroll-progressbar">
              <div>
                  <span class="scroll-shadow"></span>
              </div>
          </div>
          <div class="container in-page-scroll">
              <!-- Brand and toggle get grouped for better mobile display -->
              <div class="navbar-header">
                  <button type="button" id="animated-navicon" class="navbar-toggle" data-toggle="collapse" data-target="#mobile-navbar-collapse">
                      <span class="sr-only"><?php print t('Toggle navigation'); ?></span>
                      <span class="icon-bar"></span>
                      <span class="icon-bar"></span>
                      <span class="icon-bar"></span>
                  </button>
                  <a class="navbar-brand ripple-group" href="#top">
                      <div class="navbar-logo pull-left">
                          <?php print $logo ? '<img src="' . $logo . '" alt=""/>' : ''; /*volar_shortcodes_default_logo();*/ ?>
                      </div>
                      <p class="pull-left font-second"><?php print variable_get('site_name', ''); ?></p>
                  </a>
              </div>
              <!-- Collect the nav links, forms, and other content for toggling -->
              <div class="collapse navbar-collapse <?php print $locale_enabled ? 'locale-enabled' : ''; ?>" id="mobile-navbar-collapse">
                <?php if(module_exists('tb_megamenu')) {
                    print theme('tb_megamenu', array('menu_name' => $menu));
                  }
                  else {
                    $main_menu_tree = module_exists('i18n_menu') ? i18n_menu_translated_tree($menu) : menu_tree($menu);
                    print drupal_render($main_menu_tree);
                  }
                ?>
                <?php if($locale_enabled):
                  global $language;
                ?>
                  <ul class = 'language-block nav navbar-nav navbar-right cl-effect-5'>
                    <li class = "has-dropdown active">
                      <a href="#"><span data-hover="<?php print $language->language; ?>"><?php print $language->language; ?></span></a>
                      <?php
                        $path = drupal_is_front_page() ? '<front>' : $_GET['q'];
                        $info = language_types_info();
                        reset($info);
                        $key = key($info);
                        $links = language_negotiation_get_switch_links($key, $path);
                        if(isset($links->links)) {
                          foreach($links->links as $i => $link) {
                            $links->links[$i]['attributes']['lang'] = $links->links[$i]['attributes']['xml:lang'];
                          }
                          $variables = array('links' => $links->links, 'attributes' => array('class' => array('mn-sub')));
                          print theme('links__locale_block', $variables);
                        }
                      ?>
                    </li>
                  </ul>
                <?php endif; ?>

              </div>

              <!-- Render block with contact information in header -->
              <div id = "contact-header"><?php $block = module_invoke('block', 'block_view', '31');
                print render($block['content']);?>
              </div>
              <!-- / Render block with contact information in header -->

              <!-- /.navbar-collapse -->
          </div>
          <!-- /.container -->
      </nav>
  </div>
</div>
<div id="about-section" class="sticky-nav-here"></div>
