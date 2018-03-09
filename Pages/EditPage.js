var Observable = require("FuseJS/Observable");
		var password = Observable("");
        var phone = Observable("");
        var email = Observable("");
        var idCard = Observable("");
        //Car details
        var model = Observable("");
        var photo = Observable("");
        var vehicleNo = Observable("");

		var inputed = Observable(function() {
  			return password.value != "" && phone.value != "" && email.value != "" && idCard.value != "" && model.value != "" && photo.value != "" && vehicleNo.value != "";
		});
			
		function updateButton(arg){
				var requestObject = {"password" : password.value, "phone" : phone.value, "email" : email.value, "idCard" : idCard.value, "car" : {"model" : model, "photo" : photo, "vehicleNo" : vehicleNo}};
				var status = 0;
				var response_ok = false;
				var x = '';
                var y = '';
				fetch('http://localhost:8099/edit', {
                    method: 'POST',
                    headers: { "Content-type": "application/json"},
                    dataType: 'json',
                    body: JSON.stringify(requestObject)
                }).then(function(response) {
                    status = response.status;  // Get the HTTP status code
                    console.log("status");
                    response_ok = response.ok; // Is response.status in the 200-range?
                    return response.json();    // This returns a promise
                }).then(function(responseObject) {
                    console.log("Updated");
                    x = JSON.stringify(responseObject);
                    y = JSON.stringify(requestObject);
                    console.log(x);
                    console.log(y);
					router.goBack();
                }).catch(function(err) {
                    console.log("lol Error");
                    console.log(err.message);
                });
			}
			function goBack(arg){
				router.goBack();
			}

	module.exports = {
		password: password,
        phone: phone,
        email: email,
        idCard: idCard,
        model: model,
        photo: photo,
        vehicleNo: vehicleNo,
		goBack: goBack,
		updateButton: updateButton,
        inputed: inputed
	};
