(function ($, Drupal) {


	Drupal.behaviors.gridresult = {
    attach: function(context, settings) {
     	$(".adv-search-results").detach().prependTo(".group-right");
	    if($('form#views-exposed-form-pp-explore-page input#edit-bce-1').is(':checked')){
	    	$('form#views-exposed-form-pp-explore-page .views-widget .form-type-date-text input').val('').attr('disabled', true).attr('readonly', true);
	    } else {
	    	$('form#views-exposed-form-pp-explore-page .views-widget .form-type-date-text input').attr('disabled', false).attr('readonly', false);
	    }
	    $('form#views-exposed-form-pp-explore-page input#edit-bce-1').change(function(){
				if($(this).is(':checked')){
					$('form#views-exposed-form-pp-explore-page .views-widget .form-type-date-text input').val('').attr('disabled', true).attr('readonly', true);
			   } else {
			    $('form#views-exposed-form-pp-explore-page .views-widget .form-type-date-text input').attr('disabled', false).attr('readonly', false);
			   }
			});
			$('form#views-exposed-form-pp-explore-page button#edit-submit-pp-explore').on('click', function(e) {
				if($('form#views-exposed-form-pp-explore-page #edit-dates-min-date').val().trim().length && !$('form#views-exposed-form-pp-explore-page #edit-dates-max-date').val().trim().length) {
					$('form#views-exposed-form-pp-explore-page #edit-dates-max-date').val($('form#views-exposed-form-pp-explore-page #edit-dates-min-date').val());
				}
			});
	    
	    if (window.location.href.indexOf("layout=grid") > -1) {
				$('.grid-result-wrapper').removeClass('list').addClass('grid');
        $('.icon.list').removeClass('active');
        $('.icon.grid').addClass('active');
			} else if (window.location.href.indexOf("layout=list") > -1) {
				$('.grid-result-wrapper').removeClass('grid').addClass('list');
				$('.icon.grid').removeClass('active');
        $('.icon.list').addClass('active');
			} else {
				// Defaults to grid.
				$('.grid-result-wrapper').removeClass('list').addClass('grid');
        $('.icon.list').removeClass('active');
        $('.icon.grid').addClass('active');
			}
	    $('.icon').on('click',function(e) {
	    	var uri = window.location.pathname+window.location.search;
		    if ($(this).hasClass('grid')) {
	        $('.grid-result-wrapper').removeClass('list').addClass('grid');
	        $('.icon.list').removeClass('active');
	        $(this).addClass('active');
	        $("#bam_layout").val('grid');
		    }
		    else if($(this).hasClass('list')) {
	        $('.grid-result-wrapper').removeClass('grid').addClass('list');
					$('.icon.grid').removeClass('active');
	        $(this).addClass('active');
	        $("#bam_layout").val('list');
		    }
			});

			

    }
  };

})(jQuery, Drupal);