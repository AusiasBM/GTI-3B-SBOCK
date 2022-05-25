const {Router} = require("express");
const routerProductos = Router();
const ctrProductos = require("../controllers/productos.controller");

routerProductos.get('/obtener', ctrProductos.obtener);

routerProductos.post('/modificar', ctrProductos.modificar);



routerProductos.get('/imgCapturada', function(req, res){
    const testFolder = '../../turtlebot3_ws/foxy/src/img/';
    var path = require("path");
    var absolutePath = path.resolve(testfolder + "img.jpg");
    res.sendFile(absolutePath);
})

module.exports = routerProductos