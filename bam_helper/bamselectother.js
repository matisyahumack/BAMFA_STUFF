(function($) {
Drupal.behaviors.bamselectother = {
  attach: function(context, settings) {
    $('select#edit-other-search').change(function(){
    	$(this).find("option").each(function () {
	        $('.search-query-other').hide();
	    });
	    $('.' + this.value).show();
      
  	});
  }
}
})(jQuery);