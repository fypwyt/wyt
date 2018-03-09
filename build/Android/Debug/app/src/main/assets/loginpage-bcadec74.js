var Observable = require("FuseJS/Observable");

var username = Observable("");
var password = Observable("");



var inputed = Observable(function() {
  return username.value != "" && password.value != "";
});


function goMainPage(arg){
				var requestObject = {"name" : username.value, "password" : password.value};
				var status = 0;
				var response_ok = false;
				var x = '';
                var y = '';
				fetch('http://localhost:8099/login', {
                    method: 'POST',
                    headers: { "Content-type": "application/json"},
                    dataType: 'json',
                    body: JSON.stringify(requestObject)
                }).then(function(response) {
                    status = response.status;  // Get the HTTP status code
                    console.log(status);
                    response_ok = response.ok; // Is response.status in the 200-range?
                    return response.json();    // This returns a promise
                }).then(function(responseObject) {
                    console.log("Success");
                    x = JSON.stringify(responseObject);
                    y = JSON.stringify(requestObject);
                    console.log(x);
                    console.log(y);
					
					router.push("mainpage");
                }).catch(function(err) {
                    console.log("lol Error");
                    console.log(err.message);
                });
}

function goRegisterPage(arg){
	router.push("registerpage");
}


module.exports = {
  username: username,
  password: password,
  inputed: inputed,
  goMainPage : goMainPage,
  goRegisterPage: goRegisterPage
};
