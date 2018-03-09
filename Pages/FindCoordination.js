var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");
var Timer = require("FuseJS/Timer");
var path = FileSystem.dataDirectory + "/" + "viewmap.html";
var search = Observable("");
var search2 = Observable("");
var jObj = "";
var jObj2 = "";
var jObj3 = "";
var jObj4 = "";
var mapViewHTML = "";

function goBack(arg){
  console.log(jObj);
  router.goBack();
}

var inputed = Observable(function() {
  return search.value != "" && search2.value != "";
});


function searchCoordinate(arg){
  fetch("https://maps.googleapis.com/maps/api/place/textsearch/json?query="+ search.value+" + Hong + Kong&key=AIzaSyCkmhykDfBx5Hfjn6HtlcFk9gxVesKRDIE")
  .then(function(result) {
    if (result.status !== 200) {
      debug_log("Error Message: " + result.status);
        err.value = "Error Occured";
          return; 
    }
    return result; 
  }).then(function(data) {
    debug_log("Success."); 
    jObj = JSON.parse(data._bodyInit).results[0].geometry.location.lat;
    jObj2 = JSON.parse(data._bodyInit).results[0].geometry.location.lng;
   /* mapViewHTML = "<!DOCTYPE html>\
  <html>\
  <head>\
    <meta name=\"viewport\" content=\"initial-scale=1.0, user-scalable=no\">\
    <meta charset=\"utf-8\">\
    <title>Directions service</title>\
    <style>\
      #map {\
        height: 100%;\
      }\
      html, body {\
        height: 100%;\
        margin: 0;\
        padding: 0;\
      }\
      #floating-panel {\
        position: absolute;\
        top: 10px;\
        left: 25%;\
        z-index: 5;\
        background-color: #fff;\
        padding: 5px;\
        border: 1px solid #999;\
        text-align: center;\
        font-family: 'Roboto','sans-serif';\
        line-height: 30px;\
        padding-left: 10px;\
      }\
    </style>\
  </head>\
  <body>\
    <div id=\"floating-panel\">\
    <b>Start: </b>\
    <select id=\"start\">\
      <option value=\"chicago, il\">1 Mei Tin Road</option>\
      <option value=\"st louis, mo\">St Louis</option>\
      <option value=\"joplin, mo\">Joplin, MO</option>\
      <option value=\"oklahoma city, ok\">Oklahoma City</option>\
      <option value=\"amarillo, tx\">Amarillo</option>\
      <option value=\"gallup, nm\">Gallup, NM</option>\
      <option value=\"flagstaff, az\">Flagstaff, AZ</option>\
      <option value=\"winona, az\">Winona</option>\
      <option value=\"kingman, az\">Kingman</option>\
      <option value=\"barstow, ca\">Barstow</option>\
      <option value=\"san bernardino, ca\">San Bernardino</option>\
      <option value=\"los angeles, ca\">Los Angeles</option>\
    </select>\
    <b>End: </b>\
    <select id=\"end\">\
      <option value=\"chicago, il\">Chicago</option>\
      <option value=\"st louis, mo\">St Louis</option>\
      <option value=\"joplin, mo\">Joplin, MO</option>\
      <option value=\"oklahoma city, ok\">Oklahoma City</option>\
      <option value=\"amarillo, tx\">Amarillo</option>\
      <option value=\"gallup, nm\">Gallup, NM</option>\
      <option value=\"flagstaff, az\">Flagstaff, AZ</option>\
      <option value=\"winona, az\">Winona</option>\
      <option value=\"kingman, az\">Kingman</option>\
      <option value=\"barstow, ca\">Barstow</option>\
      <option value=\"san bernardino, ca\">San Bernardino</option>\
      <option value=\"los angeles, ca\">Los Angeles</option>\
    </select>\
    </div>\
    <div id=\"map\"></div>\
    <script>\
      function initMap() {\
        var directionsService = new google.maps.DirectionsService;\
        var directionsDisplay = new google.maps.DirectionsRenderer;\
        var map = new google.maps.Map(document.getElementById('map'), {\
          zoom: 7,\
          center: {lat: 41.85, lng: -87.65}\
        });\
        directionsDisplay.setMap(map);\
\
        var onChangeHandler = function() {\
          calculateAndDisplayRoute(directionsService, directionsDisplay);\
        };\
        document.getElementById('start').addEventListener('change', onChangeHandler);\
        document.getElementById('end').addEventListener('change', onChangeHandler);\
      }\
\
      function calculateAndDisplayRoute(directionsService, directionsDisplay) {\
        directionsService.route({\
          origin: new google.maps.LatLng( "+jObj+"," + jObj2 + "),";*/
    console.log("lat: " + JSON.stringify(jObj) + " lng: " + JSON.stringify(jObj2));
  }).catch(function(err) {
    debug_log("Fetch error " + err);
    err.value = "Error occured";
  });

  fetch("https://maps.googleapis.com/maps/api/place/textsearch/json?query="+ search2.value+" + Hong + Kong&key=AIzaSyCkmhykDfBx5Hfjn6HtlcFk9gxVesKRDIE")
  .then(function(result) {
    if (result.status !== 200) {
      debug_log("Error Message: " + result.status);
        err.value = "Error Occured";
          return; 
    }
    return result; 
  }).then(function(data) {
    debug_log("Success."); 
    jObj3 = JSON.parse(data._bodyInit).results[0].geometry.location.lat;
    jObj4 = JSON.parse(data._bodyInit).results[0].geometry.location.lng;
    /*mapViewHTML = mapViewHTML + " destination: new google.maps.LatLng("+jObj3+"," + jObj4 + "),\
          travelMode: 'DRIVING'\
        }, function(response, status) {\
          if (status === 'OK') {\
            directionsDisplay.setDirections(response);\
          } else {\
            window.alert('Directions request failed due to ' + status);\
          }\
        });\
      }\
    </script>\
    <script async defer\
    src=\"https://maps.googleapis.com/maps/api/js?key=AIzaSyClKXaGpq7IDJqELQ2LOiG3Qu9OaElYZ18&callback=initMap\">\
    </script>\
  </body>\
</html>";*/
  Timer.create(function() {
    mapViewHTML = "<!DOCTYPE html>\
  <html>\
  <head>\
    <meta name=\"viewport\" content=\"initial-scale=1.0, user-scalable=no\">\
    <meta charset=\"utf-8\">\
    <title>Directions service</title>\
    <style>\
      #map {\
        height: 100%;\
      }\
      html, body {\
        height: 100%;\
        margin: 0;\
        padding: 0;\
      }\
      #floating-panel {\
        position: absolute;\
        top: 10px;\
        left: 25%;\
        z-index: 5;\
        background-color: #fff;\
        padding: 5px;\
        border: 1px solid #999;\
        text-align: center;\
        font-family: 'Roboto','sans-serif';\
        line-height: 30px;\
        padding-left: 10px;\
      }\
    </style>\
  </head>\
  <body>\
    <div id=\"floating-panel\">\
    <b>Start: </b>\
    <select id=\"start\">\
      <option value="+ search.value +">"+search.value+"</option>\
    </select>\
    <b>End: </b>\
    <select id=\"end\">\
      <option value="+ search2.value +">"+search2.value+"</option>\
    </select>\
    </div>\
    <div id=\"map\"></div>\
    <script>\
      function initMap() {\
        var directionsService = new google.maps.DirectionsService;\
        var directionsDisplay = new google.maps.DirectionsRenderer;\
        var map = new google.maps.Map(document.getElementById('map'), {\
          zoom: 7,\
          center: {lat: 41.85, lng: -87.65}\
        });\
        directionsDisplay.setMap(map);\
\
          calculateAndDisplayRoute(directionsService, directionsDisplay);\
      }\
\
      function calculateAndDisplayRoute(directionsService, directionsDisplay) {\
        directionsService.route({\
          origin: new google.maps.LatLng( "+jObj+"," + jObj2 + "),\
          destination: new google.maps.LatLng("+jObj3+"," + jObj4 + "),\
          travelMode: 'DRIVING'\
        }, function(response, status) {\
          if (status === 'OK') {\
            directionsDisplay.setDirections(response);\
          } else {\
            window.alert('Directions request failed due to ' + status);\
          }\
        });\
      }\
    </script>\
    <script async defer\
    src=\"https://maps.googleapis.com/maps/api/js?key=AIzaSyClKXaGpq7IDJqELQ2LOiG3Qu9OaElYZ18&callback=initMap\">\
    </script>\
  </body>\
</html>";
  }, 3000, false);
    console.log("lat: " + JSON.stringify(jObj3) + " lng: " + JSON.stringify(jObj4));
  }).catch(function(err) {
    debug_log("Fetch error " + err);
    err.value = "Error occured";
  });
/* var viewMapHTML = "<!DOCTYPE html>\
  <html>\
  <head>\
    <meta name=\"viewport\" content=\"initial-scale=1.0, user-scalable=no\">\
    <meta charset=\"utf-8\">\
    <title>Directions service</title>\
    <style>\
      #map {\
        height: 100%;\
      }\
      html, body {\
        height: 100%;\
        margin: 0;\
        padding: 0;\
      }\
      #floating-panel {\
        position: absolute;\
        top: 10px;\
        left: 25%;\
        z-index: 5;\
        background-color: #fff;\
        padding: 5px;\
        border: 1px solid #999;\
        text-align: center;\
        font-family: 'Roboto','sans-serif';\
        line-height: 30px;\
        padding-left: 10px;\
      }\
    </style>\
  </head>\
  <body>\
    <div id=\"floating-panel\">\
    <b>Start: </b>\
    <select id=\"start\">\
      <option value=\"chicago, il\">1 Mei Tin Road</option>\
      <option value=\"st louis, mo\">St Louis</option>\
      <option value=\"joplin, mo\">Joplin, MO</option>\
      <option value=\"oklahoma city, ok\">Oklahoma City</option>\
      <option value=\"amarillo, tx\">Amarillo</option>\
      <option value=\"gallup, nm\">Gallup, NM</option>\
      <option value=\"flagstaff, az\">Flagstaff, AZ</option>\
      <option value=\"winona, az\">Winona</option>\
      <option value=\"kingman, az\">Kingman</option>\
      <option value=\"barstow, ca\">Barstow</option>\
      <option value=\"san bernardino, ca\">San Bernardino</option>\
      <option value=\"los angeles, ca\">Los Angeles</option>\
    </select>\
    <b>End: </b>\
    <select id=\"end\">\
      <option value=\"chicago, il\">Chicago</option>\
      <option value=\"st louis, mo\">St Louis</option>\
      <option value=\"joplin, mo\">Joplin, MO</option>\
      <option value=\"oklahoma city, ok\">Oklahoma City</option>\
      <option value=\"amarillo, tx\">Amarillo</option>\
      <option value=\"gallup, nm\">Gallup, NM</option>\
      <option value=\"flagstaff, az\">Flagstaff, AZ</option>\
      <option value=\"winona, az\">Winona</option>\
      <option value=\"kingman, az\">Kingman</option>\
      <option value=\"barstow, ca\">Barstow</option>\
      <option value=\"san bernardino, ca\">San Bernardino</option>\
      <option value=\"los angeles, ca\">Los Angeles</option>\
    </select>\
    </div>\
    <div id=\"map\"></div>\
    <script>\
      function initMap() {\
        var directionsService = new google.maps.DirectionsService;\
        var directionsDisplay = new google.maps.DirectionsRenderer;\
        var map = new google.maps.Map(document.getElementById('map'), {\
          zoom: 7,\
          center: {lat: 41.85, lng: -87.65}\
        });\
        directionsDisplay.setMap(map);\
\
        var onChangeHandler = function() {\
          calculateAndDisplayRoute(directionsService, directionsDisplay);\
        };\
        document.getElementById('start').addEventListener('change', onChangeHandler);\
        document.getElementById('end').addEventListener('change', onChangeHandler);\
      }\
\
      function calculateAndDisplayRoute(directionsService, directionsDisplay) {\
        directionsService.route({\
          origin: new google.maps.LatLng( "+jObj+"," + jObj2 + "),\
          destination: new google.maps.LatLng("+jObj3+"," + jObj4 + "),\
          travelMode: 'DRIVING'\
        }, function(response, status) {\
          if (status === 'OK') {\
            directionsDisplay.setDirections(response);\
          } else {\
            window.alert('Directions request failed due to ' + status);\
          }\
        });\
      }\
    </script>\
    <script async defer\
    src=\"https://maps.googleapis.com/maps/api/js?key=AIzaSyClKXaGpq7IDJqELQ2LOiG3Qu9OaElYZ18&callback=initMap\">\
    </script>\
  </body>\
</html>";*/
  //var viewMapHTML ="<!DOCTYPE html><html><head><meta name=\"viewport\" content=\"initial-scale=1.0, user-scalable=no\"><meta charset=\"utf-8\"><title>Directions service</title><style>#map {height: 100%;}html, body {height: 100%;margin: 0;padding: 0;}#floating-panel {position: absolute;top: 10px ;left: 25%;z-index: 5;background-color: #fff;padding: 5px;border: 1px solid #999;text-align: center;font-family: 'Roboto','sans-serif';line-height: 30px;padding-left: 10px;}</style></head><body><div id=\"floating-panel\"><b>Start: </b><select id=\"start\"><option value=\"chicago, il\">1 Mei Tin Road</option></select><b>End: </b><select id=\"end\"><option value=\"chicago, il\">Chicago</option></select></div><div id=\"map\"></div><script>function initMap() {var directionsService = new google.maps.DirectionsService;var directionsDisplay = new google.maps.DirectionsRenderer;var map = new google.maps.Map(document.getElementById('map'), {zoom: 7,center: {lat: 41.85, lng: -87.65}});directionsDisplay.setMap(map);var onChangeHandler = function() {calculateAndDisplayRoute(directionsService, directionsDisplay);};document.getElementById('start').addEventListener('change', onChangeHandler);document.getElementById('end').addEventListener('change', onChangeHandler);}function calculateAndDisplayRoute(directionsService, directionsDisplay) {directionsService.route({origin: new google.maps.LatLng(22.3860011, 114.1472591),destination: new google.maps.LatLng(22.369081, 114.1747291),travelMode: 'DRIVING'}, function(response, status) {if (status === 'OK') {directionsDisplay.setDirections(response);} else {window.alert('Directions request failed due to ' + status);}});}</script><script async defersrc=\"https://maps.googleapis.com/maps/api/js?key=AIzaSyClKXaGpq7IDJqELQ2LOiG3Qu9OaElYZ18&callback=initMap\"></script></body></html>"
  /*var viewMapHTML = "\<!DOCTYPE html\>\<html\>\<head\>\<meta name=\"viewport\" content=\"initial-scale=1.0, user-scalable=no\"\>  \<meta charset=\"utf-8\"\>\<title\>Directions service\</title\>\<style\>#map{height: 100%;}html, body {height: 100%;}#floating-panel{position: absolute;top: 10px;left: 25%;z-index: 5;background-color: #fff;padding: 5px;border: 1px solid #999;text-align: center;font-family: 'Roboto','sans-serif';line-height: 30px;padding-left: 10px;}\</style\>\<head\>\<body\>\<div id=\"floating-panel\"\>\<b\>Start: \</b\>\<select id=\"start\"\>\<option value=\"chicago, il\"\>1 Mei Tin Road\</option\>\</select\>\<b\>End: \</b\>\<select id=\"end\"\>\<option value=\"chicago, il\"\>Chicago\</option\>\</select\>\</div\>\<div id=\"map\"\>\</div\>\<script\>function initMap() {var directionsService = new google.maps.DirectionsService;var directionsDisplay = new google.maps.DirectionsRenderer;var map = new google.maps.Map(document.getElementById('map'), {zoom: 7,center: {lat: 41.85, lng: -87.65}});directionsDisplay.setMap(map);var onChangeHandler = function() {calculateAndDisplayRoute(directionsService, directionsDisplay);};document.getElementById('start').addEventListener('change', onChangeHandler);document.getElementById('end').addEventListener('change', onChangeHandler);}function calculateAndDisplayRoute(directionsService, directionsDisplay) {directionsService.route({origin: new google.maps.LatLng(22.3860011, 114.1472591),destination: new google.maps.LatLng(22.369081, 114.1747291),travelMode: 'DRIVING'}, function(response, status) {if (status === 'OK') {directionsDisplay.setDirections(response); } else {window.alert('Directions request failed due to ' + status);}});}\</script\>\<script async defersrc=\"https://maps.googleapis.com/maps/api/js?key=AIzaSyClKXaGpq7IDJqELQ2LOiG3Qu9OaElYZ18&callback=initMap\"\>\</script\>\</body\>\</html\>";*/

  Timer.create(function() {
   FileSystem.writeTextToFile(path, mapViewHTML)
   .then(function() {
    return FileSystem.readTextFromFile(path);
   })
   .then(function(text) {
    })
      .catch(function(error) {
   console.log("Unable to read file due to error:" + error);
    });
  }, 5000, false);
}


function findDistance(arg){
  fetch("https://maps.googleapis.com/maps/api/directions/json?origin="+jObj+","+jObj2+"&destination="+jObj3+","+jObj4+"&key=AIzaSyBQBIMhDSvr2EF5P6WlQkZAZTGT2ZIDRH8")
  .then(function(result) {
    if (result.status !== 200) {
      debug_log("Error Message: " + result.status);
        err.value = "Error Occured";
          return; 
    }
    return result; 
  }).then(function(data) {
    debug_log("Success."); 
    var jObj5 = JSON.parse(data._bodyInit).routes[0].legs[0].distance.text;
    console.log(JSON.stringify(jObj5));
  }).catch(function(err) {
    debug_log("Fetch error " + err);
    err.value = "Error occured";
  });
}

function viewMap(arg){
  router.push("html");
}

module.exports ={
  goBack: goBack,
  inputed: inputed,
  search: search,
  search2: search2,
  findDistance: findDistance,
  viewMap, viewMap,
  searchCoordinate: searchCoordinate
}