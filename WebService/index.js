var express = require('express');
var app = express();
var five = require('johnny-five');
var board = new five.Board({port: "COM3"});
var rele = null;

board.on("ready", function(){
    rele = new five.Relay(9);
});

app.get('/ligar', function(req, res){
    res.send("Lampada ligada com sucesso");
    if(rele != null){
        rele.on();    
    }
});

app.get('/desligar', function(req, res){
    res.send("Lampada desligada com sucesso");
    if(rele != null){
        rele.off();     
    }
});

app.listen(3000, function(){
    console.log("App rodando na porta 3000");
})