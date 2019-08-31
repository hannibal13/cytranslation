<?php if(request_uri() == '/maintenance' && strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE) { include('maintenance-page.tpl.php'); exit(); } ?>
<!DOCTYPE html>
<html  lang="<?php print $language->language; ?>" dir="<?php print $language->dir; ?>"<?php print $rdf_namespaces; ?>>
<head>
  <?php print $head; ?>

  <title><?php print $head_title; ?></title>
  <!--[if IE]><meta http-equiv='X-UA-Compatible' content='IE=edge,chrome=1'><![endif]-->
  <meta name="viewport" content="width=device-width, initial-scale=1.0, maximum-scale=1.0" />

  <!--Google Console-->
  <?php if (!empty($google_console)): ?>
    <?php print $google_console; ?>
  <?php endif; ?>

  <link href='http://fonts.googleapis.com/css?family=Lato:100,300,400,700,900%7COpen+Sans:300,400,600,700' rel='stylesheet' type='text/css'>
  <link rel="stylesheet" href="http://maxcdn.bootstrapcdn.com/font-awesome/4.3.0/css/font-awesome.min.css">
  <?php print $styles; ?>

</head>
<!--Yandex-->
<?php if (!empty($metrika)): ?>
  <?php print $metrika; ?>
<?php endif; ?>

<!--Google Analytics-->
<?php if (!empty($google_analytics)): ?>
  <?php print $google_analytics; ?>
<?php endif; ?>

<body class="appear-animate <?php print $classes; ?>"<?php print $attributes; ?>>
  <div id="page" class="<?php print theme_get_setting('loader_image') ? 'animsition' : '';?> equal" data-loader-type="loader2" data-page-loader-text="<?php print variable_get('site_name', 'Volar'); ?>" data-animsition-in="zoom-outy" data-animsition-out="fade-out-up-sm" style="transform-origin: 50% 50vh;">
    <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE): ?>
      <a href="http://www.csswinner.com/details/volar/9612" target="_blank" class="csswinner-badge init-animation-3 delay0-8s"><img src="<?php print base_path(). path_to_theme(); ?>/img/nominee-new-white-right.png" alt="csswinnercom nominee"></a>
    <?php endif; ?>

    <div id="top"></div>

    <?php if(theme_get_setting('loader_image')): ?>

    <?php endif; ?>

    <?php print $page_top; ?>
    <?php print $page; ?>
    <script src="https://maps.googleapis.com/maps/api/js?sensor=false"></script>
    <?php print $scripts; ?>
    <?php print $page_bottom; ?>
  </div>

  <?php if(strpos($_SERVER['HTTP_HOST'], 'nikadevs') !== FALSE): ?>
    <section class="sliding-panel hi" id="style-changer">
      <div class="sliding-panel-title font-second text-center">
          <h3>Style Switcher</h3>
      </div>
      <div class="selector text-center">
          <p class="style-changer-text font-second text-center">choose overall mood
          </p>
          <button class="light-m">light</button>
          <button class="dark-m">dark</button>
          <br />
          <button class="equal-m">equal</button>
          <button class="diff-m">different</button>
      </div>
      <div class="selector text-center">
          <p class="style-changer-text font-second text-center">choose navbar style</p>
          <button class="l-nav">Light navbar</button>
          <button class="d-nav">dark &nbsp;&nbsp;navbar</button>
      </div>
      <div>
          <p class="style-changer-text font-second text-center">choose a color</p>
          <ul class="list-unstyled colors-container">
              <li class="color-changer">
                  <a data-color="scuba-blue" title="scuba-blue: #00B2CA" style="background: #00B2CA;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="light-green" title="light-green: #00CCAD" style="background: #00CCAD;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="black-white" title="black-white: #171724" style="background: #171724;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="red" title="red: #ff0030" style="background: #ff0030;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="gold" title="gold: #DAC14C" style="background: #DAC14C;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="orange" title="orange: #FF4C05" style="background: #FF4C05;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="light-purple" title="light-purple: #E47AC2" style="background: #E47AC2;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="purple" title="purple: #A182D2" style="background: #A182D2;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="olive" title="olive: #97BE22" style="background: #97BE22;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="dark-blue" title="dark-blue: #3446FF" style="background: #3446FF;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="brown" title="brown: #E48400" style="background: #E48400;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="pink" title="pink: #FF4C83" style="background: #FF4C83;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="fluorescent-blue" title="fluorescent-blue: #35E9F1" style="background: #35E9F1;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="leaf-green" title="leaf-green: #45BF55" style="background: #45BF55;"></a>
              </li>
              <li class="color-changer">
                  <a data-color="yellow" title="yellow: #FFB50B" style="background: #FFB50B;"></a>
              </li>
          </ul>
          <p class="style-changer-detail padding-20">You can create your own theme using LESS.
              <br />- see the docs.</p>
      </div>
      <div class="selector text-center">
          <p class="style-changer-text font-second text-center">choose Footer mood</p>
          <button class="dark-f">Dark Footer</button>
          <button class="light-f">Light Footer</button>
      </div>
      <a class="sliding-panel-arrow text-center"><i class="icon icon-gears"></i></a>
    </section>
    <!--/ End Sliding Panel -->
    <link rel="stylesheet" type="text/css" href="<?php print base_path() . path_to_theme(); ?>/css/theme/style.changer.css" property='stylesheet' media = "all">
    <script src="<?php print base_path() . path_to_theme(); ?>/js/style.changer.js"></script>
  <?php endif; ?>

  <!-- my.pozvonim.com -->
   <?php if (!empty($perezvoni)): ?>
     <?php print $perezvoni; ?>
   <?php endif; ?>
  <!-- my.pozvonim.com -->

</body>
</html>
