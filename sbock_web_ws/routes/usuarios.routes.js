const {Router} = require("express");
const routerUsuarios = Router();
const ctrUsers = require("../controllers/usuarios.controller");

routerUsuarios.get('/', ctrUsers.obtener);

routerUsuarios.post('/', ctrUsers.agregar);

routerUsuarios.post('/login', ctrUsers.buscarUser);

module.exports = routerUsuarios