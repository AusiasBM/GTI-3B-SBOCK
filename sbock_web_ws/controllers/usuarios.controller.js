const Usuario = require("../models/Usuario");

exports.agregar = async (req, res) => {
  try {
    const { nombre, email, password } = req.body; // asignamos los atributos del json a las variables nombre y correo
    console.log(nombre);

    if( nombre && email && password ){
      const nuevoUsuario = new Usuario ( {nombre, email, password} );
      await nuevoUsuario.save();
  
      res.json({
        msj: "Documento insertado",
        id: nuevoUsuario._id
      });
    }else{
      res.json({
        isOk: false, msj: "Los datos son requeridos"
      });
    }

  } catch (error) {
    res.json(error);
  }
};


exports.obtener = async (req, res) => {
  try {
    const usuarios = await Usuario.find()
    res.json(usuarios);
  } catch (error) {
    res.json(error);
  }
}

exports.buscarUser = async ( req, res ) => {
  try {
    console.log(req.headers);
    email = req.headers['correo'];
    pass = req.headers['contrasenya'];
    const usuario = await Usuario.findOne({email: String(email), password: String(pass)}).select(['-__v']);;
    console.log(usuario);
    
    res.status(200).send(usuario);

  }catch ( error ){
    res.json(error);
  }
  
}