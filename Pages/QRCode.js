var Observable = require("FuseJS/Observable");
var url = Observable("");
var err = Observable();	
console.log("123456"); 

fetch("http://localhost:8099/qr")
	.then(function(result) {
		if (result.status !== 200) {
			debug_log("Error Message: " + result.status);
				err.value = "Error Occured";
					return; 
		}
		return result; 
	}).then(function(data) {
		debug_log("Success."); 
		var obj = JSON.stringify(data._bodyText);
		console.log(obj);
		obj = obj.substring(3, obj.lastIndexOf("f"));
		console.log(obj);
		var jObj = {"url2": obj};
		url.add(jObj);
	}).catch(function(err) {
		debug_log("Fetch error " + err);
		err.value = "Error occured";
	});

function goBack(arg){
  router.goBack();
}

module.exports = {
  err: err,
  goBack: goBack,
  url: url
};
