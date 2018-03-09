var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");
var myModule2 = require('Pages/MainPage');
var path = FileSystem.dataDirectory + "/" + "USER_INFO.tmp";
var err = Observable();
var info = Observable();
var infoShow = Observable();
var usernameStr = Observable();
var requestObject = {};
var status = 0;
var response_ok = false;
var loopShow = {"key" : []};
var x = '';
var y = '';
              
function goBack(arg){
  console.log(JSON.stringify(myModule2.usernameStr._values[0].carpoolID[0].rider) + ' ' +  myModule2.usernameStr._values[0].carpoolID.length);
  requestObject = {"id" : myModule2.usernameStr._values[0].carpoolID[0].rider};
  console.log(JSON.stringify(requestObject));
  router.goBack();
}

function findActivity(arg){
    requestObject._id = [];
    for(var i = 0; i < myModule2.usernameStr._values[0].carpoolID.length; i++){
        requestObject._id.push(myModule2.usernameStr._values[0].carpoolID[i].rider);
    }
    console.log("HI");
    requestObject.length = myModule2.usernameStr._values[0].carpoolID.length;
    fetch('http://localhost:8099/findJoinedCarpool', {
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
        console.log("\n\n\n\n\n\n\nSuccess :\n" + JSON.stringify(responseObject));
        info.add(responseObject);
        console.log("\n\n\n\n\n\n\nSuccess :\n" + JSON.stringify(info._values[0].result[0]));
        for(var i = 0; i < myModule2.usernameStr._values[0].carpoolID.length; i++){
            console.log("GGGGGGGGGG");
            loopShow.key.push(info._values[0].result[i]);
            console.log("\n\n\n\n\n\n LOOPPPPP :\n" + JSON.stringify(loopShow));
        }
        infoShow.add(loopShow);
        x = JSON.stringify(responseObject);
        y = JSON.stringify(requestObject);
        //console.log(x);
        console.log(y);
        }).catch(function(err) {
          console.log("lol Error");
          console.log(err.message);
    });
}

module.exports ={
  goBack: goBack,
  findActivity: findActivity,
  err: err,
  usernameStr: usernameStr,
  infoShow: infoShow,
  info: info
}