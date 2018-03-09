var Observable = require("FuseJS/Observable");
//var info = Observable();
var err = Observable(); 
//var i = 0;
//var show = Observable("Hello");

function goBack(arg){
  router.goBack();
}

function goChangePassword(arg){
  router.push("changepassword");
}

function goChangeProfilePage(arg){
  router.push("changeprofilepage");
}

function goLoginPage(arg){
  fetch("http://localhost:8099/logout")
  .then(function(result) {
    if (result.status !== 200) {
      debug_log("Error Message: " + result.status);
        err.value = "Error Occured";
          return;
    }
  }).then(function() {
    debug_log("Success.");
    console.log("Logout successful");
       
  }).catch(function(err) {
    debug_log("Fetch error " + err);
    err.value = "Error occured";
  });
      router.push("loginpage");
  }

module.exports = {
  goBack: goBack,
  goLoginPage: goLoginPage,
  err: err,
  goChangeProfilePage,
  goChangePassword: goChangePassword
};
