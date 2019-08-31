(function ($) {
    Drupal.behaviors.dvc = {
        attach: function (context, settings) {
            $('.g-recaptcha', context).each(function () {
                $(this).once('recaptcha', function() {
                    if (typeof grecaptcha === 'undefined') {
                        return;
                    }
                    //reset grecaptcha
                    $(this).html('');
                    //reload grecaptcha
                    grecaptcha.render(this, $(this).data());

                });
            });
        }
    };
})(jQuery);