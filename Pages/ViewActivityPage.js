var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");
var path = FileSystem.dataDirectory + "/" + "USER_INFO.tmp";
var search = Observable("");
var info = Observable();
var idNumber = {};
var joinText = Observable("");
var joinUserName = Observable("");
var joinDriverName = Observable("");
var joinChatroomName = Observable("");
var usernameStr = Observable();
var userFileName = "";
var myModule2 = require('Pages/MainPage');
function goBack(arg){
  router.goBack();
}



function submitButton(arg){
		    var requestObject = {"startTime" : search.value};
		    var status = 0;
        var response_ok = false;
        var x = '';
        var y = '';
        fetch('http://localhost:8099/displayCarpool', {
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
                    y = JSON.stringify(requestObject);
                    info.clear();

                    for(var i = 0 ; i < 1000000; i++){
                    	x = JSON.stringify(responseObject[i]);
                    	info.add(JSON.parse(x));
                    	idNumber[i] = responseObject[i]._id;
                    	console.log(idNumber[i]);
              	   	}
                    console.log(x);
                    console.log(y);
                    router.push("mainpage");
                }).catch(function(err) {
                    console.log("lol Error");
                    console.log(err.message);
                });
}

function joinButton(arg){
			FileSystem.readTextFromFile(path)
    		.then(function() {
    			console.log(path);
       			 return FileSystem.readTextFromFile(path);
   			})
    		.then(function(text){
    			console.log(text);
    			var newName = JSON.parse(text);
      			usernameStr.add(newName);
      			userFileName = JSON.stringify(newName._id);
    		}).catch(function(error) {
     			   console.log("Unable to read file due to error:" + error);
    		});
    	while(usernameStr == ""){

    	}
      var all = JSON.stringify(myModule2.usernameStr._values[0]._id);
      var sub = all.substring(1, all.lastIndexOf("\""));
      console.log(sub);
		  var requestObject = {"_id": joinText.value, "userID": sub, "username": joinUserName.value};
		  var status = 0;
      var response_ok = false;
      var x = '';
      var y = '';
      fetch('http://localhost:8099/joinCarpool', {
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
      }).catch(function(err) {
          console.log("lol Error");
          console.log(err.message);
      });

      /*var requestObject2 = {"name": joinDriverName.value, "chatname": joinChatroomName.value, "username": joinUserName.value};
      fetch('http://localhost:8099/joinChat', {
        method: 'POST',
        headers: { "Content-type": "application/json"},
        dataType: 'json',
        body: JSON.stringify(requestObject2)
      }).then(function(response) {
        status = response.status;  // Get the HTTP status code
        console.log(status);
        response_ok = response.ok; // Is response.status in the 200-range?
        return response.json();    // This returns a promise
      }).then(function(responseObject) {
        console.log("Success");
        x = JSON.stringify(responseObject2);
        y = JSON.stringify(requestObject2);
          console.log(x);
          console.log(y);
      }).catch(function(err) {
          console.log("lol Error");
          console.log(err.message);
      });*/
}

var inputed = Observable(function() {
  return joinText.value != "";
});

module.exports ={
  goBack: goBack,
  search: search,
  submitButton: submitButton,
  info: info,
  idNumber: idNumber,
  joinText: joinText,
  inputed: inputed,
  joinUserName: joinUserName,
  usernameStr: usernameStr,
  userFileName: userFileName,
  joinDriverName: joinDriverName,
  joinChatroomName: joinChatroomName,
  joinButton: joinButton
}