const {Router} = require("express");
const routerUsuarios = Router();
const ctrUsers = require("../controllers/usuarios.controller");

routerUsuarios.get('/', ctrUsers.obtener);

routerUsuarios.post('/', ctrUsers.agregar);

routerUsuarios.post('/login', ctrUsers.buscarUser);

routerUsuarios.get('/imgCapturada', function(req, res){
    const testFolder = '../../turtlebot3_ws/foxy/src/img/';
    var path = require("path");
    var absolutePath = path.resolve(testfolder + "img.jpg");
    res.sendFile(absolutePath);
})

module.exports = routerUsuarios