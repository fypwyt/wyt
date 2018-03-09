var session = require('cookie-session');
var express = require('express');
var bodyParser = require('body-parser');
var mongoose = require('mongoose');
var assert = require('assert');
var app = express();
var fileUpload = require('express-fileupload');
var MongoClient = require('mongodb').MongoClient;

var mongodburl = 'mongodb://wyt:wyt@ds255265.mlab.com:55265/wyt';
//var mongodburl = 'mongodb://wyt:wyt@ds125906.mlab.com:25906/test1';
var ObjectId = require('mongodb').ObjectID;
mongoose.connect(mongodburl);


var uSchema = require('./user');
var user = mongoose.model('user', uSchema);

var cSchema = require('./carpool');
var carpool = mongoose.model('carpool', cSchema);

var crSchema = require('./chatroom');
var chatroom = mongoose.model('chatroom', crSchema);

var heheSchema = require('./hehe');
var hehe = mongoose.model('hehe', heheSchema);

app.use(bodyParser.json());
app.use(bodyParser.urlencoded({	extended: true}));
app.use(fileUpload());

app.set('view engine', 'ejs');




app.use(session({
  name: 'session',
  keys: ['session_key1','session_key2']
}));

app.post("/joinChat", function(req, res){
	console.log(JSON.stringify(req.body.chatname));
	chatroom.findOne({
		username: "010",
	},
	function(err, docs){
		console.log(JSON.stringify(err));
		console.log(JSON.stringify(docs));
		if(docs == null){
			console.log("try again");
		}
	});
});



app.get('/',function(req,res){
  console.log(req,session);
  //res.send("try render");
    var a ="k";
	var d = {
	  "id": 1,
	  "name": "Leanne Graham",
	  "username": "Bret",
	  "email": "Sincere@april.biz",
	  "address": {
		"street": "Kulas Light",
		"suite": "Apt. 556",
		"city": "Gwenborough",
		"zipcode": "92998-3874",
		"geo": {
		  "lat": "-37.3159",
		  "lng": "81.1496"
		}}};

		var s = JSON.stringify(d);
		res.send(s);
	
  

});


//var url = require("url");

app.get('/a/',function(req,res){
	console.log(req,session);
	//res.send("try render2");
	var d = {"name":"c"};
	var g ="fff";
	//res.send(g);
    //var pathname = url.parse(request.url).pathname;
	//console.log("Request for " + pathname + " received.");
	var s =JSON.stringify(d);
    res.writeHead(200, {"Content-Type": "text/plain"});
	//res.write("Hello World");
	res.write(s);
	res.end();
});

var data ="nothing";
app.post('/p/',function(req,res){
	console.log(req,session);
	/*var d = {
		name : req.body.name,
		id : req.body.id
	}*/
	data  = req.body;
	//res.send(g);
    //var pathname = url.parse(request.url).pathname;
	//console.log("Request for " + pathname + " received.");
	var s =JSON.stringify(data);
    res.writeHead(200, {"Content-Type": "text/plain"});
	//res.write("Hello World");
	res.write(s);
	res.end();
});

app.get('/p/',function(req,res){
	console.log(req,session);
	var s =JSON.stringify(data);
    res.writeHead(200, {"Content-Type": "text/plain"});
	res.write(s);
	res.end();
});

app.post("/register", function(req, res){
	var u = 1;
	var p = 1;
	var newO = {};
	newO.password = req.body.password;
	user.findOne(
		{
			username : req.body.name,
		},
		function (err, docs) {

				if(docs == null){
					u =0 ;
					newO.username = req.body.name;
					console.log(req.body.name);
					console.log(u);
				}else{
					u =1;
					console.log("username has been used, try again");
				}
		});

		user.findOne(
		{
			phone : req.body.phone,
		},
		function (err, docs) {

				if(docs == null){
					p =0 ;
					newO.phone = req.body.phone;
					console.log(p);
					if(u==0&&p==0){	
			        var s = new user(newO);
			        console.log(s);
					console.log('About to insert: ' + JSON.stringify(s));
					MongoClient.connect(mongodburl,function(err,db) {
						assert.equal(err,null);
						console.log('Connected to MongoDB\n');
						insertUser(db,s,function(result) {
							db.close();
							console.log(JSON.stringify(result.ops[0]));
							res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
							//no res.redirect('/');
							if(result.ops[0]==null){
								res.end(""+{status:'failed'});
							}		
						});

					});


		}
				}else{
					p =1;
					console.log("phone number has been used, try again");
				}
		});
});

function insertUser(db,r,callback) {
	db.collection('users').insertOne(r,function(err,result) {
		assert.equal(err,null);
		console.log("Insert success");
		callback(result);
	});
};
app.post("/login", function (req,res) {
	user.findOne(
		{
			username : req.body.name,
			password : req.body.password
		},
		function (err, docs) {
				if(docs == null){
				//res.status(500).json(err);
				//throw err;
				console.error("123");

				res.send("try again");
			   
			}else {
				req.session.authenticated = true;
				req.session.username = docs.username;
				//res.redirect('/list');

				var response = {"r1":"Login success", "r2": req.session.username};
				var r = JSON.stringify(response);
				var e = JSON.stringify(err);
				console.log("Sucessful!!");
				console.log(docs);
				console.log(req.session.name);
				//res.writeHead(200, {"Content-Type": "text/plain"});
				res.send(docs);
	            //res.end();
			}
		}
	);
});
/*app.post("/login", function (req,res) {
	user.findOne(
		{
			username : req.body.name,
			password : req.body.password
		},
		function (err, docs) {
			if (err) {
				//res.status(500).json(err);
				//throw err;
				res.writeHead(200, {"Content-Type": "text/plain"});
				res.write("try again");
			    res.end();
			}else {
				req.session.authenticated = true;
				req.session.username = docs.username;
				//res.redirect('/list');

				var response = {"r1":"Login success", "r2": req.session.username};
				var r = JSON.stringify(response);

				res.writeHead(200, {"Content-Type": "text/plain"});
              	res.write(r);
	            res.end();

			}
		}
	);
});
*/
app.get("/find", function (req,res) {
	console.log(req.session.name);
	user.findOne(
		{
			username : req.body._id
		},
		function (err, docs) {
			if (docs == null) {
				//res.status(500).json(err);
				//throw err;
				res.writeHead(200, {"Content-Type": "text/plain"});
				res.write("try again");
			    res.end();
			}else {
				console.log(docs);
				var response = JSON.stringify(docs);
				res.send(response);
			}
		}
	);
});


app.post("/findJoinedCarpool", function (req,res) {
	console.log("Running find joined carpool");
	var activity = {};
	activity.result = [];
	console.log(JSON.stringify(req.body));
	var i = 0;
	var y = req.body.length;
	while(i < y){
		console.log(JSON.stringify(req.body._id[i]));
		carpool.findOne(
		{
			_id: req.body._id[i]
		},
		function (err, docs) {
			if (docs == null) {
				//res.status(500).json(err);
				//throw err;
				console.log("123");
	
			}else {
				console.log(JSON.stringify(docs) + "\n\n\n\n123321" + JSON.stringify(docs.passenger));
				//var jObj = {"startTime" : JSON.stringify(docs.startTime), "endTime" : JSON.stringify(docs.endTime), "startLocation.street" : JSON.stringify(docs.startLocation.street), "carOwner.username" : JSON.stringify(docs.carOwner.username)};
				activity.result.push(docs);
				console.log(activity.result);
				console.log(y +"AND" + i);
				if(activity.result.length == req.body.length){
					res.send(activity);
					console.log("BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB\n\n\n\n\n\n\n\n\n\n"+ JSON.stringify(activity));
				}
				//res.write(jObj);
			}
		});
		i++;
	}
	//res.send(activity);
	console.log("Finished...");
});

app.get('/logout',function(req,res) {
	req.session = null;
	res.send("logout process complete");
	//res.redirect('/');
});

app.post("/edit", function(req, res){
	var userList = {};

    userList.password = req.body.password;
    userList.phone = req.body.phone;
    userList.email = req.body.email;
	userList.idCard = req.body.idCard;

    userList.car.model = req.body.model;
    userList.car.photo = req.body.photo;
    userList.car.vehicleNo = req.body.vehicleNo;
	
	if(req.files.sampleFile){
	    userList.photo= new Buffer(req.files.sampleFile.data).toString('base64');
	    userList.mimetype = req.files.sampleFile.mimetype;
	    userList.car.photo = new Buffer(req.files.sampleFile.data).toString('base64');
	    userList.car.mimetype = req.files.sampleFile.mimetype;
	}else {
		nrO.carOwner.minetype = null;
		nrO.carOwner.car.minetype = null;
	}


	var s = new user(userList);
      s.validate(function (err) {
      console.log(err);
      });
	console.log('Edit ' + JSON.stringify(s));
	MongoClient.connect(mongodburl,function(err,db) {
		assert.equal(err,null);
		console.log('Connected to MongoDB\n');
		editUser(db,s,function(result) {
			db.close();
			console.log(JSON.stringify(result.ops[0]));
			res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
			//no res.redirect('/');
			if(result.ops[0]==null){
				res.end(""+{status:'Update failed'});
			}		
		});
	});



});

function editUser(db,r,callback){
  db.collection('users').update(r,function(err,result) {
		assert.equal(err,null);
		console.log("Update success");
		callback(result);
	});
};

app.post("/deleteUser", function (req,res) {
        user.findOne(
		{
			username : req.body.name
		},
		function (err, docs) {
			if (docs == null) {
				//res.status(500).json(err);
				//throw err;
				res.writeHead(200, {"Content-Type": "text/plain"});
				res.write("try again");
			    res.end();
			}else {
				var r = "find it";
				
				user.remove({username : req.body.name},
					function (err, docs) {
						if (docs == null) {
							//res.status(500).json(err);
							//throw err;
							res.writeHead(200, {"Content-Type": "text/plain"});
							res.write("try again");
							res.end();
						}else {
							res.writeHead(200, {"Content-Type": "text/plain"});
							res.write("success");
							res.end();
						}
					});
			}
		}
	);
});


app.post('/create',function(req,res) {
    var nrO = {};
	nrO.createBy = req.session.username;
	nrO.startTime = req.body.startTime;
	nrO.endTime = req.body.endTime;

	nrO.carOwner = {};
	nrO.carOwner.username = req.body.carOwner.username;
	nrO.carOwner.car = {};
	nrO.carOwner.car.carname = req.body.carOwner.car.carname;
	nrO.startLocation = {};
	nrO.startLocation.street = req.body.startLocation.street;
	nrO.startLocation.building = req.body.startLocation.building;
	nrO.startLocation.district = req.body.startLocation.district;
	nrO.startLocation.coord = req.body.startLocation.coord;
	//nrO.startLocation.coord.push(req.body.startLocation.coord);
	//nrO.startLocation.coord.push(req.body.lat);

	nrO.targetLocation = {};
	nrO.targetLocation.street = req.body.targetLocation.street;
	nrO.targetLocation.building = req.body.targetLocation.building;
	nrO.targetLocation.district = req.body.targetLocation.district;
	nrO.targetLocation.coord = req.body.targetLocation.coord;
	nrO.chatname = req.body.chatname;
	nrO.message = [];
	//nrO.targetLocation.coord.push(req.body.lon);
	//nrO.targetLocation.push(req.body.lat);


	/*if(req.files.sampleFile){
	    nrO.carOwner.photo = new Buffer(req.files.sampleFile.data).toString('base64');
	    nrO.carOwner.minetype = req.files.sampleFile.mimetype;
	    nrO.carOwner.car.carphoto = new Buffer(req.files.sampleFile.data).toString('base64');
	    nrO.carOwner.car.minetype = req.files.sampleFile.mimetype;
	}else {
		nrO.carOwner.minetype = null;
		nrO.carOwner.car.minetype = req.files.sampleFile.mimetype;
	}*/

	var r = new carpool(nrO);
	console.log("BBBBBBBBBBBBB"+JSON.stringify(r));
	console.log("AAAAAAA");
	r.save(function(err) {
		if (err) {
			res.status(500).json(err);
			throw err
		}
		//res.redirect('/list');
		console.log("Success!");
	});
});

app.post('/displayCarpool',function(req,res) {
	carpool.find(
		{
			startTime : req.body.startTime
		},
		function (err, docs) {
			if (docs == null) {
				//res.status(500).json(err);
				//throw err;
				res.writeHead(200, {"Content-Type": "text/plain"});
				res.write("No Document");
			    res.end();
			}else {
				var r = "find it";
				console.log(r);
				res.send(JSON.stringify(docs));
			}
		});
});


function find_carpool(criteria, callback){
	carpool.find(criteria,function (err, doc) {
		if (err) {
			res.status(500).json(err);
			throw err
		}else {
			callback(doc);
		}
	});
}
		
	
	app.post("/deleteCarpool", function (req,res) {
        carpool.findOne(
		{
			username : req.body.name,
			_id : req.body._id
		},
		function (err, docs) {
			if (docs == null) {
				//res.status(500).json(err);
				//throw err;
				res.writeHead(200, {"Content-Type": "text/plain"});
				res.write("try again");
			    res.end();
			}else {
				var r = "find it";
				
				carpool.remove({username : req.body.name, _id : req.body._id},
					function (err, docs) {
						if (docs == null) {
							//res.status(500).json(err);
							//throw err;
							res.writeHead(200, {"Content-Type": "text/plain"});
							res.write("try again");
							res.end();
						}else {
							res.writeHead(200, {"Content-Type": "text/plain"});
							res.write("success");
							res.end();
						}
			    

					});
			}
		}
	);
});
	
app.post("/editCarpool", function(req, res){
	var nrO = {};
	nrO.startTime = req.body.startTime;
	nrO.endTime = req.body.endTime;

	nrO.carOwner = {};
	nrO.carOwner.username = req.body.username;
	nrO.carOwner.car = {};
	nrO.carOwner.car.carname = req.body.carname;

	nrO.startLocation = {};
	nrO.startLocation.street = req.body.street;
	nrO.startLocation.building = req.body.building;
	nrO.startLocation.district = req.body.district;
	nrO.startLocation.coord = [];
	nrO.startLocation.coord.push(req.body.lon);
	nrO.startLocation.push(req.body.lat);

	nrO.targetLocation = {};
	nrO.targetLocation.street = req.body.street;
	nrO.targetLocation.building = req.body.building;
	nrO.targetLocation.district = req.body.district;
	nrO.targetLocation.coord = [];
	nrO.targetLocation.coord.push(req.body.lon);
	nrO.targetLocation.push(req.body.lat);



	if(req.files.sampleFile){
	    nrO.carOwner.photo = new Buffer(req.files.sampleFile.data).toString('base64');
	    nrO.carOwner.minetype = req.files.sampleFile.mimetype;
	    nrO.carOwner.car.carphoto = new Buffer(req.files.sampleFile.data).toString('base64');
	    nrO.carOwner.car.minetype = req.files.sampleFile.mimetype;
	}else {
		nrO.minetype = null;
	}

	var s = new carpool(nrO);
      s.validate(function (err) {
      console.log(err);
      });
	console.log('Edit ' + JSON.stringify(s));
	MongoClient.connect(mongodburl,function(err,db) {
		assert.equal(err,null);
		console.log('Connected to MongoDB\n');
		editCarpool(db,s,function(result) {
			db.close();
			console.log(JSON.stringify(result.ops[0]));
			res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
			//no res.redirect('/');
			if(result.ops[0]==null){
				res.end(""+{status:'Update failed'});
			}		
		});
	});
});

function editCarpool(db,r,callback){
  db.collection('carpool').update(r,function(err,result) {
		assert.equal(err,null);
		console.log("Update success");
		callback(result);
	});
};

app.post("/joinCarpool", function(req, res)
{

	/*if(req.files.sampleFile){
	    nrO.passenger.photo = new Buffer(req.files.sampleFile.data).toString('base64');
	    nrO.passenger.minetype = req.files.sampleFile.mimetype;
	}else {
		nrO.passenger.minetype.minetype = null;
	}
	*/
	carpool.findById(req.body._id, function(err, carpool)
	{
		console.log(req.body._id);
		if(err)
		{
			console.log(err);
			console.log("123");
			res.status(500).send(err);
		}
		else
		{
			console.log("234");
			console.log(JSON.stringify(req.body.username));
			carpool.passenger.push({"username":req.body.username});
			carpool.save(function (err,doc)
			{
			  		if(err)
			  		{
						res.status(500).send(err);
			  		}
			  		else
			  		{
		       			user.findById(req.body.userID, function(err, user)
        				{
		  					console.log(req.body.userID+"\n\n\n\n\n");
		  					if(err)
		  					{
		  	  					//res.status(500).send(err);
		  					}
		  					else
		  					{
		  						console.log("\n\n\n\n\n"+user+"\n\n\n\n");
		  						console.log(JSON.stringify(req.body._id));
								user.carpoolID.push({"rider" : req.body._id});
								user.save(function (err, doc)
								{
			     	 				if(err)
			     	 				{
			     	 					console.log("\n\n\n\n\n"+err+"\n\n\n\n");
				   						//res.status(500).send(err);
			      					}
			      					else
			      					{
		           			 			res.send("success");
		           			 			console.log("success!");
			   						}
			   					});
			   				}
						});
					}		
			});
		}
	});
});
     /* s.validate(function (err) {
      console.log(err);
      });
	console.log('Edit ' + JSON.stringify(s));
	MongoClient.connect(mongodburl,function(err,db) {
		assert.equal(err,null);
		console.log('Connected to MongoDB\n');
		editCarpool(db,s,function(result) {
			db.close();
			console.log(JSON.stringify(result.ops[0]));
			res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
			//no res.redirect('/');
			if(result.ops[0]==null){
				res.end(""+{status:'Update failed'});
			}		
		});
	});*/


/*function editCarpool(db,r,callback){
  db.collection('carpool').update(r,function(err,result) {
		assert.equal(err,null);
		console.log("Update success");
		callback(result);
	});
};*/





/*app.post("/chatroom", function(req, res){
	console.log(JSON.stringify(req.body));
	console.log("456465465456");
	var nrO = {};

	nrO.username = req.body.chatname;
	nrO.password = req.body.driveName;



	//nrO.message = [];
	//nrO.message.name = req.body.name;
	//nrO.message.mes = req.body.mes;
	//nrO.message.time = req.body.time;


	/*if(req.files.sampleFile){
	    nrO.user.photo = new Buffer(req.files.sampleFile.data).toString('base64');
	    nrO.user.minetype = req.files.sampleFile.mimetype;
	}else {
		nrO.minetype = null;
	}*/

	/*var s = new chatroom(nrO);
      s.validate(function (err) {
      console.log(err);
      });
	console.log('Edit ' + JSON.stringify(s));
	MongoClient.connect(mongodburl,function(err,db) {
		assert.equal(err,null);
		console.log('Connected to MongoDB\n');
		createChat(db,s,function(result) {
			db.close();
			console.log(JSON.stringify(result.ops[0]));
			res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
			//no res.redirect('/');
			if(result.ops[0]==null){
				res.end(""+{status:'Update failed'});
			}		
		});
	});
	console.log("\n\n\n\n\n\n\n\n\n");
	
});*/

function createChat(db,r,callback){
	db.collection('chatroom').insertOne(r,function(err,result) {
		  assert.equal(err,null);
		  console.log("Update success");
		  callback(result);
	  });
  };
	//"5a90f59ca5d57e20e829e243"


/*app.post("/joinChatroom", function(req, res){
	console.log(JSON.stringify(req.body.chatname));
	chatroom.findOne({
		"chatname": "OO3"
	},function (err, docs) {
			console.log(JSON.stringify(docs));
			if (docs == null) {
				//res.status(500).json(err);
				//throw err;
				//res.writeHead(200, {"Content-Type": "text/plain"});
				console.log("try again");
			    //res.end();
			}else {
			}
		}
	);
});*/


function updateChat(db,r,callback){
	db.collection('chatroom').update(r,function(err,result) {
		  assert.equal(err,null);
		  console.log("Update success");
		  callback(result);
	  });
  };

app.post("/sendChatroom", function(req, res){
	carpool.findById(req.body._id, function(err, carpool)
	{
		console.log(req.body._id);
		if(err)
		{
			console.log(err);
			console.log("123");
			res.status(500).send(err);
		}
		else
		{
			console.log("234");
			console.log(JSON.stringify(req.body));
			carpool.message.push({
				name: req.body.name,
       			mes: req.body.mes, 
			});
			carpool.save(function (err,doc)
			{
			  		if(err)
			  		{
						res.status(500).send(err);
			  		}
			  		else
			  		{
		           		res.send("success");
		           		console.log("success!");
					}		
			});
		}
	});
});

/*app.post("/sendChatroom", function(req, res){
	chatroom.update(
        {
		  driver = req.body.driver,
		  chatname = req.body.chatname,
		},
		{
		  $push:{message:
		    {
			  name: req.body.name,
			  mes: req.body.mes, 
			  time:req.body.time 
			}
		  }
		},
		function (err, docs) {
			if (docs == null) {
				res.send("try again");
			}else {
				var response = JSON.stringify(docs);
				res.writeHead(200, {"Content-Type": "text/plain"});
				  res.write(response);
	            res.end();

			}
		}
    );
	
});*/

  

app.post("/refreshChat", function (req,res) {
	//var ndata = 
	console.log("Get Mes");
	carpool.findById(req.body._id, function(err, carpool)
	{
		console.log(req.body._id);
		if(err)
		{
			console.log(err);
			console.log("123");
			res.status(500).send(err);
		}
		else
		{
			res.send(carpool);
			console.log(JSON.stringify(carpool));
			console.log("success");
		}
	});
});


app.get('/h', function(req,res){
	res.send("ggg");
	});


app.get("/qr", function (req,res) {
	var fetch = require('node-fetch');
	fetch("https://api.qrd.by/qrcodes?key=7dc4a633419280d0cf080d12563832bb")
	.then(function(result) {
		if (result.status !== 200) {
			console.log("Error Message: " + result.status);
				err.value = "Error Occured";
					return; 
		}
		return result.json(); 
	}).then(function(data) {
		console.log("Success."); 
		console.log(data.result.geotags[0].id);
		console.log("after");
		//res.writeHead(200, {'content-type':'text/html'});
		//res.writeHead(200, {'content-type':'image/jpeg'});
		var item = JSON.stringify(data.result.geotags[0].qr);
			//res.writeHead(200, {'content-type':'image/jpg'});
			//res.write(item);
			//res.write(JSON.stringify(item));
		res.send(item);
		console.log(item);
		//res.writeHead(200, {"Content-Type": "text/plain"});
		//res.write(item);
		console.log("end");

	}).catch(function(err) {
		console.log("Fetch error " + err);
		err.value = "Error occured";
	});
  });
  

/*app.get("/qr", function (req,res) {
		var request = require("request");
		var r = "testt";
	   request({
		  uri: "https://api.qrd.by/qrcodes?key=7dc4a633419280d0cf080d12563832bb",
		  method: "GET",
		  timeout: 10000,
		  followRedirect: true,
		  maxRedirects: 10
		}, function(error, response, body) {
			if(body){
				res.send("error");
			}else{
			 console.log(body);
			 var e =JSON.stringify(error);
			 var rr =JSON.stringify(response);
			 var b =JSON.stringify(body);
			 res.writeHead(200, {"Content-Type": "text/plain"});
			 res.write("e +"+ e);
			 res.write("rr +"+ rr);
			 res.write("b +"+ b);
			 res.write(r);
			 res.end();
			}
		   })
		   res.send(r);
  });*/



	/*console.log('About to insert: ' + JSON.stringify(r));
	MongoClient.connect(mongodburl,function(err,db) {
		assert.equal(err,null);
		console.log('Connected to MongoDB\n');
		insertRestaurant(db,r,function(result) {
			db.close();
			console.log(JSON.stringify(result.ops[0]));
			res.redirect('/list');
			res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
			if(result.ops[0]==null){
				res.end(""+{status:'failed'});
			}		
		});
	});*/


/*
app.get('/',function(req,res) {
	console.log(req.session);
	if (!req.session.authenticated) {
		res.redirect('/login');
	}
	res.redirect('/list');
});

app.get("/login", function (req,res) {
	res.sendFile( __dirname + '/views/login.html')

})

app.post("/login", function (req,res) {
	user.findOne(
		{
			user_name : req.body.user_name,
			password : req.body.password
		},
		function (err, docs) {
			if (err) {
				res.status(500).json(err);
				throw err
			}else {
				req.session.authenticated = true;
				req.session.username = docs.username;
				res.redirect('/list')
			}
		}
	);
})

app.get('/logout',function(req,res) {
	req.session = null;
	res.redirect('/');
});






app.get("/newuser", function (req,res) {
	res.sendFile( __dirname + '/views/newUser.html')
})

app.post("/newuser", function(req, res){
	var newO = {};

	newO.username = req.body.name;
	newO.password = req.body.password;

	var s = new user(newO);
	console.log('About to insert: ' + JSON.stringify(s));
	MongoClient.connect(mongodburl,function(err,db) {
		assert.equal(err,null);
		console.log('Connected to MongoDB\n');
		insertUser(db,s,function(result) {
			db.close();
			console.log(JSON.stringify(result.ops[0]));
			res.end(JSON.stringify({status:'ok','_id':result.ops[0]._id}));
			res.redirect('/');
			if(result.ops[0]==null){
				res.end(""+{status:'failed'});
			}		
		});
	});



})

function insertUser(db,r,callback) {
	db.collection('users').insertOne(r,function(err,result) {
		assert.equal(err,null);
		console.log("Insert success");
		callback(result);
	});
}

*/

app.listen(process.env.PORT || 8099);
