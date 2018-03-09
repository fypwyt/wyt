var Observable = require("FuseJS/Observable");
			var info = Observable();
			var err = Observable();	
			var i = 0;
			var characterShow = Observable("Driver");
			var character = 0;


function changeCharacter(arg){
	character++;
	if(character > 2){
		character = 1;
	}
	if(character == 1){
		characterShow = "Passenger";
	}
	else if(character == 2){
		characterShow = "Driver";
	}
	console.log(characterShow + " " + character);
	router.push("mainpage");
}


fetch("http://localhost:8099/")
	.then(function(result) {
		if (result.status !== 200) {
			debug_log("Error Message: " + result.status);
				err.value = "Error Occured";
					return;
		}
		return result.json();
	}).then(function(data) {
		debug_log("Success.");

		while(i >= 0) {
			 console.log("123");
			 var data2 = JSON.stringify(data);
			 console.log(data2);
			 var data3 = JSON.parse(data2);
			 console.log(data3);
			 var item = data3;
		     info.add(item);
		     break;
	  }
	}).catch(function(err) {
		debug_log("Fetch error " + err);
		err.value = "Error occured";
	});
	

function goSettingPage(arg){
	router.push("settingpage");
}

function goViewActivityPage(arg){
	router.push("viewactivitypage");
}

function goCreateActivityPage(arg){
	router.push("createactivitypage");
}
function goQRCode(arg){
	router.push("qrcode");
}
	module.exports = {
		info: info,
		err: err,
		goSettingPage: goSettingPage,
		goViewActivityPage: goViewActivityPage,
		goCreateActivityPage: goCreateActivityPage,
		goQRCode: goQRCode,
		characterShow: characterShow,
		changeCharacter: changeCharacter,
		character: character
	};
