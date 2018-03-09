var mongoose = require('mongoose');

var chatroomSchema = mongoose.Schema({
    chatname: String,
    driver : String, 
    rider : [{
        username: String, 
        photo : String, 
        minetype: String,
    }],
    message :[{
        name: String,
        mes: {type: String}, 
        time: { type: Date, default: Date.now }
    }]
});

module.exports = chatroomSchema;



