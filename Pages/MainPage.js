var Observable = require("FuseJS/Observable");
var FileSystem = require("FuseJS/FileSystem");
var Base64 = require("FuseJS/Base64");
var myModule = require('Pages/LoginPage');
var path = FileSystem.dataDirectory + "/" + "USER_INFO.tmp";
var path2 = FileSystem.dataDirectory + "/" + "USER_Carpool.tmp";
var info = Observable();
var i = 0;
var characterShow = Observable("Driver");
var character = 0;
var usernameStr = Observable();


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

FileSystem.readTextFromFile(path)
    		.then(function() {
       			 return FileSystem.readTextFromFile(path);
   			})
    		.then(function(text){
    			var newName = JSON.parse(text);
      			usernameStr.add(newName);

    		}).catch(function(error) {
     			   console.log("Unable to read file due to error:" + error);
    		});

/*fetch("http://localhost:8099/")
	.then(function(result) {
		if (result.status !== 200) {
			debug_log("Error Message: " + result.status);
				err.value = "Error1 Occured";
					return;
		}
		return result.json();
	}).then(function(data) {
		debug_log("Success.");

		while(i >= 0) {
			 console.log("123");
			 console.log(usernameStr + "11111111111");
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
	});*/
	

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
function goJoinedActivity(arg){
	router.push("joinedactivity");
}

function goChatroomListPage(arg){
	router.push("chatroomlistpage");
}

function goFindCoordination(arg){
	router.push("findcoordination");
}

function goHTML(arg){
	router.push("html");
}

function test(arg){
	var arrayBuff = FileSystem.readBufferFromFileSync("C:\\Users\\common\\Desktop\\Workplace\\WYT Carpooling 30-1-2018\\Ball.jpg");
	var b64data = Base64.encodeBuffer(arrayBuff);
	console.log(b64data);
}

module.exports = {
		info: info,
		goSettingPage: goSettingPage,
		goViewActivityPage: goViewActivityPage,
		goCreateActivityPage: goCreateActivityPage,
		goQRCode: goQRCode,
		characterShow: characterShow,
		changeCharacter: changeCharacter,
		goJoinedActivity: goJoinedActivity,
		goChatroomListPage: goChatroomListPage,
		goFindCoordination: goFindCoordination,
		goHTML: goHTML,
		character: character,
		test: test,
		usernameStr: usernameStr
};