var Observable = require("FuseJS/Observable");
			var name = Observable("");
			var password = Observable("");
			var phone = Observable("");
			
		function goLoginPage(arg){
			router.push("loginpage");
		}
		
		var inputed = Observable(function() {
  			return name.value != "" && password.value != "" && phone.value != "";
		});
			
		function registerButton(arg){
				var requestObject = {"name" : name.value, "password" : password.value, "phone" : phone.value};
				var status = 0;
				var response_ok = false;
				var x = '';
                var y = '';
				fetch('http://localhost:8099/register', {
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
                    console.log("Register Success");
                    x = JSON.stringify(responseObject);
                    y = JSON.stringify(requestObject);
                    console.log(x);
                    console.log(y);
                }).catch(function(err) {
                    console.log("lol Error");
                    console.log(err.message);
                });
}

	module.exports = {
		name: name,
		password: password,
		goLoginPage: goLoginPage,
		phone: phone,
		registerButton: registerButton,
		inputed: inputed
	};
