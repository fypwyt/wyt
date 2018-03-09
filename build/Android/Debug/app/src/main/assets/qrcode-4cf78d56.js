var Observable = require("FuseJS/Observable");
			var pictures = Observable();
			var err = Observable();	
  
fetch("https://api.qrd.by/qrcodes?key=7dc4a633419280d0cf080d12563832bb")
	.then(function(result) {
		if (result.status !== 200) {
			debug_log("Error Message: " + result.status);
				err.value = "Error Occured";
					return; 
		}
		return result.json(); 
	}).then(function(data) {
		debug_log("Success."); 
		console.log(data.result.geotags[0].id)
		for(var i=0; i <2; i++) { 
			var item = data.result.geotags[i];
			pictures.add(item);
		}

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
  pictures:pictures
};
