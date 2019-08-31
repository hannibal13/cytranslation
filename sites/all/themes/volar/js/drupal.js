(function($) {

  "use strict";

  Drupal.behaviors.textfield_placeholder = {
    attach: function (context, settings) {
      $(".input-field", context).each(function() {
          var $this = $(this);
          if ($this.val().length) {
              $this.parent().addClass("input--filled")
          }
          $this.on("focus", function() {
              $this.parent().addClass("input--filled");
          });
          $this.on("blur", function() {
              if (!$this.val().length) {
                  $this.parent().removeClass("input--filled")
              }
          })
      });
    }
  };

  Drupal.behaviors.tb_megamenu_align = {
    attach: function (context, settings) {
      $('input[type="file"]').once(function(){
        var $this = $(this);
        var inputVal = $this.val();
        $this.after('<input type="button" class="custom-upload button-primary btn btn-animated btn-contact ripple-alone" value="'+Drupal.t('Choose file')+'">');
        $('input[type="file"], .custom-upload', context).wrapAll('<div class="i-file-wrapper clearfix"></div>');
        $this.next().after('<span class="custom-upload-text">'+Drupal.t('Choose File')+'</span>');
        $this.change(function(e){
          var fileName = e.target.files[0].name;
          $this.next().next().text(fileName);
        });
      })
    }
  };
  Drupal.behaviors.activeTab = {
    attach: function (context, settings) {
      $('.tab.step.step-1 .calc-cont').once(function(){
        if ($('.tab.step.step-1 .calc-cont').is(":visible")) {
          $('.tab.step.step-1 .inner-tab').addClass('active');
        } else {
          return false;
        }
      });
    }
  };

  Drupal.behaviors.calculator = {
    attach: function(context, settings) {
      this.addItem('#edit-symbol', '#popup-link',
        '<div class="wrapper-summ"><span class="total-summ"></span><label class="rubles">'
        + Drupal.t('euro')+'</label></div>', '.tr-price', '.total-summ',
        '.quicktabs-tabs > li.last',
        '<span class="data-char-target"><span></span></span>',
        '.data-char-target span',
        '#dvc-quicktabs-form .form-type-item label', context);

      this.choseDefaultVal('#dvc-quicktabs-form .form-type-item label',
        '#edit-symbol', '.data-char-target span', context);
      this.tabs('.inner-tab', '.calc-cont', context);
    },
    tabs: function(el, elHide, context) {
      $(el, context).click(function(event) {
        var $this = $(this, context);
        if ($this.hasClass('with-rub')) {
          return false;
        } else {
          $(el, context).removeClass('active');
          $(elHide, context).hide();
          $this.addClass('active');
          $this.next().show();
        };
      });
    },
    addItem: function(el, afterEl, markup, price, summ, charAdd, markupNew, newClass, tab, context) {
      var $getVal,
          $multiplier;

      var $totalChar = $(el, context).val();
      if($totalChar == undefined || $totalChar == NaN || !$totalChar) {
        $totalChar = 0;
      };
      $(charAdd, context).prev().append(markupNew);
      $(newClass, context).text($totalChar);

      if($(price, context).length == 0 ) {
        $multiplier = 0;
      } else {
        $multiplier = $(price, context).attr('data-price');
      };
      $(afterEl, context).before(markup);
      $(summ, context).text($multiplier);
      $(el, context).on('input', function () {
        this.value = this.value.replace(/[^0-9]/g,'');
        $totalChar = $(this, context).val();
        if($totalChar == undefined || $totalChar == NaN || !$totalChar) {
          $totalChar = 0;
        };
        if($(price, context).length == 0 ) {
          $multiplier = 0;
        } else {
          $multiplier = $(price, context).attr('data-price');
        };
        $(newClass, context).text($totalChar);
        $getVal = $(this, context).val();
        var $notRound = $getVal * $multiplier;
        $(summ).text(($notRound).toFixed(1));
      });
    },
    choseDefaultVal: function(el, input, tab, context) {
      $(el, context).each(function() {
        $(this, context).click(function() {
          var $text = $(this, context).text().trim();
          $(input, context).val($text);
          $(tab, context).text($text);

          var $getVal,
              $multiplier;
          if($('.tr-price').length == 0 ) {
            $multiplier = 0;
          } else {
            $multiplier = $('.tr-price').attr('data-price');
          };
          $getVal = $('#edit-symbol').val();
          var $notRound = $getVal * $multiplier;
          $('.total-summ').text(($notRound).toFixed(1));

          if($('.modal-content').length >= 1 ) {
            var $getCharText = $('.data-char-target').closest('li').find('a').text();
            var $getCharVal = $('.data-char-target').text();
            $('.modal-content #edit-message').text($getCharText+' '+$getCharVal+"\n");
            $('.modal-content #edit-message').focus();
          };
        });
      });
    }
  };
  $(document).ajaxComplete(function() {
    var $getVal,
        $multiplier;
    if($('.tr-price').length == 0 ) {
      $multiplier = 0;
    } else {
      $multiplier = $('.tr-price').attr('data-price');
    };
    $getVal = $('#edit-symbol').val();
    var $notRound = $getVal * $multiplier;
    $('.total-summ').text(($notRound).toFixed(1));

    if($('.modal-content').length >= 1 ) {
      var $getCharText = $('.data-char-target').closest('li').find('a').text();
      var $getCharVal = $('.data-char-target').text();
      $('.modal-content #edit-message').text($getCharText+' '+$getCharVal+"\n");
      $('.modal-content #edit-message').focus();
    };

    // $('#modalContent input[type="file"]').after('<div class="upload-txt"><span>'+Drupal.t('Add file')+'</span></div>');
  });
  Drupal.behaviors.skillBars = {
    attach: function (context, settings) {

      var $skillBars = $(".skillbar-container:first", context).parent(),
          $skillBar = $skillBars.find(".skillbar-bar"),
          $allSklBrs = $(".skillbar-bar", context),
          $winWidth = $(window).width();

      setTimeout(function() {
        if ($skillBars.length) {
            if ($winWidth >= 768) {
                $skillBars.waypoint(function() {
                    $skillBar.each(function() {
                        var $this = $(this);
                        $this.width($this.data("percent"));
                    });
                }, {
                    offset: "60%"
                });
            } else {
                $allSklBrs.each(function() {
                    var $this = $(this);
                    $this.width($this.data("percent"));
                });
            }
        }
      }, 1000);

    }
  };

  Drupal.behaviors.team_carousel = {
    attach: function (context, settings) {

        // Team slider
        // -------------
        $(".team-carousel" ,context).each(function() {
          var columns = $(this).data('columns');
          $(this).owlCarousel({
              autoplay: true,
              autoplaySpeed: 1000,
              autoplayTimeout: 5000,
              loop: false,
              margin: 0,
              nav: false,
              autoplayHoverPause: true,
              smartSpeed: 200,
              rewind: true,
              center: false,
              dots: true,
              mouseDrag: true,
              responsive: {
                  0: {
                      items: 1
                  },
                  667: {
                      items: columns
                  }
              }
          });
          $(this).find(".owl-dots").addClass("dotstyle-fall");
        });
    }
  };

  $(document).ready(function(){
    full_height();
    parent_height();
    vertical_align();
  });

  window.onresize = function(event) {
    full_height();
    parent_height();
    vertical_align();
  }

  function full_height() {
    $('.full-height').css({'height': $(window).height()});
  }

  function parent_height() {
    $('.parent-height').each(function() {
      $(this).css({'height': $(this).parent().height()});
    });
  }

  function vertical_align() {
    $('.vertical-align').each(function() {
      var padding = ($(this).parent().height() - $(this).height()) / 2 ;
      $(this).css({'padding-top': padding});
    });

  }
})(jQuery);

