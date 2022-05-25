const Producto = require("../models/Producto");

exports.modificar= async (req, res) => {
  try {
    const { id, stock } = req.body; // asignamos los atributos del json a las variables nombre y correo
    console.log(id);

    if( id && stock){
      var productoActualizado = await Producto.findByIdAndUpdate();
      if(productoActualizado.stock==stock){
          console.log("Hecho");
          return 200;
      }

    }else{
      return 500;
    }

  } catch (error) {
    res.json(error);
  }
};



exports.obtener = async (req, res) => {
  try {
    const producto = await Producto.find()
    res.json(producto);
  } catch (error) {
    res.json(error);
  }
}
