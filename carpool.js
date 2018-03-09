var mongoose = require('mongoose');

var carpoolSchema = mongoose.Schema({
    carOwner : {
        username: String,
        photo: String,
        minetype: String,
        rating: [{rate: {type: Number, min: 0, max: 10}, rateBy: String}],
        car: {carname:String, carPhoto: String, minetype: String}
    },
    startLocation : {
        street: String,
        building: String,
        district: String,
        coord: [Number,Number]
    },
    targetLocation : {
        street: String,
        building: String,
        district: String,
        coord: [Number,Number]
    },

    startTime: String,
    endTime: String,
    
    passenger: [{
        username: String, 
        photo : String, 
        minetype: String,
        rating: [{rate: {type: Number, min: 0, max: 10}, 
            rateBy: String}]
    }],
    createBy: String,
    chatname: String,
    message :[{
        name: String,
        mes: {type: String}, 
        time: { type: Date, default: Date.now }
    }]
});

module.exports = carpoolSchema;



