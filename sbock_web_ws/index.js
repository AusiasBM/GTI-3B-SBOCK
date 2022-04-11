const express = require('express')
const app = express()
const conexionDB = require("./db.conexion");
const routerUsuarios = require('./routes/usuarios.routes');

conexionDB();

app.set("name", "rest-api-nodejs");
app.set("port", process.env.port || 3500 ); // Si el servidor asigna un purto se queda, sino le ponemos 3500


app.use( express.json() )

app.use(express.static("public"));

app.use("/api/usuarios", routerUsuarios);


app.listen(app.get("port"), () => {
    console.log(`Example app listening at http://localhost:${app.get("port")}`)
    console.log("nombre de la app", app.get("name"));
  
  })