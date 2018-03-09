var Observable = require("FuseJS/Observable");
var startTime = Observable("");
var endTime = Observable("");
var username = Observable("");
var carname = Observable("");
var streetS = Observable("");
var buildingS = Observable("");
var districtS = Observable("");
var coordSX = Observable("");
var coordSY = Observable("");
var streetT = Observable("");
var buildingT = Observable("");
var districtT = Observable("");
var coordTX = Observable("");
var coordTY = Observable("");
var chatroomName = Observable("");
//var maxPassengers = Observable("");

var inputed = Observable(function() {
  return chatroomName.value != "" && startTime.value != "" && endTime.value != "" && username.value != "" && carname.value != "" && streetS.value != "" && buildingS.value != "" && districtS.value != "" && coordSX.value != "" && streetT.value != "" && buildingT.value != "" && districtT.value != "" && coordTX.value != "" && coordSY.value != "" && coordTY.value != "";
});

function goBack(arg){
  router.goBack();
}

//{"startTime": startTime.value, "endTime" : endTime.value, "carOwner" : {"username" : username.value, "car" : {"carname" : carname.value}}, "startLocation":{"streetS" : streetS.value, "buildingS": buildingS.value, "districtS" : districtS.value, "coord" : [{coordSX.value},{coordSY.value}]} , "targetLocation":{"streetT" : streetT.value, "buildingT": buildingT.value, "districtT" : districtT.value, "coord" : [{coordTX.value},{coordTY.value}]}}
function createActivity(arg){
	      var requestObject = { "chatname": chatroomName.value, "startTime": startTime.value, "endTime" : endTime.value, "carOwner" : {"username" : username.value, "car" : {"carname" : carname.value}}, "startLocation":{"street" : streetS.value, "building": buildingS.value, "district" : districtS.value, "coord" : [coordSX.value,coordSY.value]} , "targetLocation":{"street" : streetT.value, "building": buildingT.value, "district" : districtT.value, "coord" : [coordTX.value,coordTY.value]}};
        console.log(JSON.stringify(requestObject));
        var status = 0;
        var response_ok = false;
        var x = '';
        var y = '';
        fetch('http://localhost:8099/create', {
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
                    console.log("1111111111111");
                    x = JSON.stringify(responseObject);
                    usernameStr = JSON.stringify(responseObject.r2);
                    y = JSON.stringify(requestObject);
                    console.log(x);
                    console.log(y);
                }).catch(function(err) {
                    console.log("lol Error");
                    console.log(err.message);
        });

        /*var requestObject2 = {"chatname": chatroomName.value, "driveName": username.value};
        console.log(JSON.stringify(requestObject2));
        fetch('http://localhost:8099/chatroom', {
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
                    console.log("2222222222222222");
                    x = JSON.stringify(responseObject);
                    usernameStr = JSON.stringify(responseObject.r2);
                    y = JSON.stringify(requestObject);
                    console.log(x);
                    console.log(y);
                    router.push("mainpage");
                }).catch(function(err) {
                    console.log("lol Error");
                    console.log(err.message);
        });*/
}

module.exports ={
  goBack: goBack,
  createActivity: createActivity,
  inputed: inputed,
  startTime: startTime,
  endTime: endTime,
  username: username,
  carname: carname,
  streetS: streetS,
  buildingS: buildingS,
  districtS: districtS,
  coordSX: coordSX,
  coordSY: coordSY,
  streetT: streetT,
  buildingT: buildingT,
  districtT: districtT,
  coordTX: coordTX,
  coordTY: coordTY,
  chatroomName: chatroomName
  //maxPassengers: maxPassengers,
 
};