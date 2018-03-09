var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");
var username = Observable("");
var password = Observable("");
var usernameStr = "";
var path = FileSystem.dataDirectory + "/" + "USER_INFO.tmp";
var inputed = Observable(function() {
  return username.value != "" && password.value != "";
});

function goMainPage(arg){
        var requestObject = {"name" : username.value, "password" : password.value};
        var usernameStr = username.value;
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
                    usernameStr = JSON.stringify(responseObject.r2);
                    y = JSON.stringify(requestObject);
                    console.log(x);
                    console.log(y);

                    FileSystem.writeTextToFile(path, x)
                   .then(function() {
                    return FileSystem.readTextFromFile(path);
                   })
                   .then(function(text) {
                    })
                      .catch(function(error) {
                   console.log("Unable to read file due to error:" + error);
                    });
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
  usernameStr: usernameStr,
  goRegisterPage: goRegisterPage
};
