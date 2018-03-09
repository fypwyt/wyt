var mongoose = require('mongoose');

var userSchema = mongoose.Schema({
    username: String,
	password: {type: String, required: true},
	photo: String,
	minetype:String,
    credit: Number,
	phone: String,
	email: String,
	idCard: String,
	flag: {type: Boolean,default: false},
	carpoolID:[{rider:String}],
        car: {
			model:String,
			photo: String,
			vehicleNo: String,
			year: Number,		
			minetype: String
		}	
});

module.exports = userSchema;
