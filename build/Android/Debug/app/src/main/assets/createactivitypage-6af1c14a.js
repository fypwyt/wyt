var Observable = require("FuseJS/Observable");
var date = Observable("");
var time = Observable("");
var startLoc = Observable("");
var destinLoc = Observable("");
var maxPassengers = Observable("");

var inputed = Observable(function() {
  return date.value != "" && time.value != "" && startLoc.value != "" && destinLoc.value != "" && maxPassengers.value != "";
});

function goBack(arg){
  router.goBack();
}

function goMainPage(arg){
	router.push("mainpage");
}

module.exports ={
  goBack: goBack,
  goMainPage: goMainPage,
  date: date,
  time: time,
  startLoc: startLoc,
  destinLoc: destinLoc,
  maxPassengers: maxPassengers
};