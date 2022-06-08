const express = require('express')
const app = express()
const conexionDB = require("./db.conexion");
const routerUsuarios = require('./routes/usuarios.routes');
const routerProductos = require('./routes/productos.routes');

conexionDB();

app.set("name", "rest-api-nodejs");
app.set("port", process.env.port || 3500 ); // Si el servidor asigna un purto se queda, sino le ponemos 3500


app.use(function (req, res, next) {

  // Website you wish to allow to connect
  res.setHeader('Access-Control-Allow-Origin', '*');

  // Request methods you wish to allow
  res.setHeader('Access-Control-Allow-Methods', '*');

  // Request headers you wish to allow
  res.setHeader('Access-Control-Allow-Headers', '*');

  // Set to true if you need the website to include cookies in the requests sent
  // to the API (e.g. in case you use sessions)
  //res.setHeader('Access-Control-Allow-Credentials', true);

  // Pass to next layer of middleware
  next();
});

app.use ( express.json() )


app.use(express.static("public"));

app.use("/api/usuarios", routerUsuarios);
app.use("/api/productos", routerProductos);

app.listen(app.get("port"), () => {
    console.log(`Example app listening at http://localhost:${app.get("port")}`)
    console.log("nombre de la app", app.get("name"));
  
  })