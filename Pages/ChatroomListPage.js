var Observable = require("FuseJS/Observable");
var messageBox = Observable("");
var myModule2 = require('Pages/MainPage');
var username = "";
//var username = "";//JSON.stringify(myModule2.usernameStr._values[0].username);
var carpoolID = "5a91359fd21b2d089c0d2173";
var getMessage = "";
var info = Observable("");

function goBack(arg){
  var i = JSON.stringify(myModule2.usernameStr._values[0].username);
  var iNum = i.lastIndexOf("\"");
  i = i.substring(1, iNum);
  router.goBack();
}

var inputed = Observable(function() {
  	return messageBox.value != "";
});

function send(arg){
	username = JSON.stringify(myModule2.usernameStr._values[0].username);
	var i = JSON.stringify(myModule2.usernameStr._values[0].username);
  	var iNum = i.lastIndexOf("\"");
  	i = i.substring(1, iNum);
	var requestObject = {"name" : i, "_id" : carpoolID, "mes" : messageBox.value};
	var status = 0;
	var response_ok = false;
	var x = '';
    var y = '';
	fetch('http://localhost:8099/sendChatroom', {
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

function refresh(arg){
	var requestObject2 = {"_id" : carpoolID};
	var status = 0;
	var response_ok = false;
	fetch('http://localhost:8099/refreshChat', {
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
        getMessage = JSON.stringify(responseObject);
        console.log("\n\n\n"+ JSON.stringify(JSON.parse(getMessage).message[0]));
        info.clear();
        for(var i = 0; i < 10000000; i++){
          info.add(JSON.parse(getMessage).message[i]);
        }
        /*for(var i = 0; i < 10; i++){
          info.removeAt(i);
        }*/
    }).catch(function(err) {
        console.log("lol Error");
        console.log(err.message);
    });
}

module.exports ={
  goBack: goBack,
  messageBox: messageBox,
  username: username,
  inputed: inputed,
  carpoolID: carpoolID,
  refresh: refresh,
  send: send,
  info: info,
  getMessage: getMessage
};