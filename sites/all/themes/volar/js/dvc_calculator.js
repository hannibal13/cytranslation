(function($){
  $(document).ready(function(){
    $( "#popup-link" ).removeClass( "jquery-once-3-processed" )
  })

  Drupal.behaviors.ctools_backdrop_close = {
    attach: function(context, settings){
      $('#modalBackdrop').once('ctools-use-modal', function(){
        $(this).click(function() {
          Drupal.CTools.Modal.dismiss();
        });
      });
    }
  }
})(jQuery)
