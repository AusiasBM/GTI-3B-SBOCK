const Producto = require("../models/Producto");

exports.modificar= async (req, res) => {
  try {
    const { nombre, stock } = req.body; // asignamos los atributos del json a las variables nombre y correo
    //console.log(id + " " + stock);
    await Producto.findOneAndUpdate({ nombre: String(nombre) }, { stock: stock });
    //await Producto.findByIdAndUpdate(id, { stock });
    //console.log("hecho");
    res.status(200).send({msg: "actualizado"});

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
