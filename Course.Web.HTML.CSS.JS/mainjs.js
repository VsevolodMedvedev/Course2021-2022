$(document).ready(function(){

$("[data-trigger='dropdown']").on("mouseenter",function(){
  var submenu = $(this).parent().find(".submenu");
  submenu.addClass("active");
  //submenu.fadeIn(100);
  $(".profile-menu-top").on("mouseleave",function(){
    submenu.removeClass("active");
    //submenu.fadeOut(100);
  })
});

})
