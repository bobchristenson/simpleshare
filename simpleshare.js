if (Drupal.jsEnabled) {
	$(document).ready(function() {
		$(".simpleshare").removeClass("hideme");
			
		$(".closemodal").click(function(){
    $(".simpleshare").addClass("hideme");
	});
	
	
	
	$('#simpleshare-twitter a').click(function(ev){
window.open('http://twitter.com',
'Twitter','width=200,height=400');
ev.preventDefault();
return false;
})
		
	})
}