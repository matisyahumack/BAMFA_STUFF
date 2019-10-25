(function ($, Drupal) {

  Drupal.behaviors.caltabs = {
    attach: function(context, settings) {

    	$('ul.bamcaltabs, ul.bamcalsubtabs').each(function(){
				// For each set of tabs, we want to keep track of
				// which tab is active and it's associated content
				var $active, $content, $links = $(this).find('a');
				var $today = $(this).find('a.today');

				// If the location.hash matches one of the links, use that as the active tab.
				// If no match is found, select either today's or the first link as the initial active tab.
				$active = $($links.filter('[href="'+location.hash+'"]')[0] || $today[0] || $links[0]);
				$active.addClass('active');

				$content = $($active[0].hash);

				// Hide the remaining content
				$links.not($active).each(function () {
					$(this.hash).hide();
				});

				// Bind the click event handler
				$(this).on('click', 'a', function(e){
					// Make the old tab inactive.
					$active.removeClass('active');
					$content.hide();

					// Update the variables with the new link and content
					$active = $(this);
					$content = $(this.hash);

					// Make the tab active.
					$active.addClass('active');
					$content.show();

					// Prevent the anchor's default click action
					e.preventDefault();
				});
			});

    }
  };


})(jQuery, Drupal);

