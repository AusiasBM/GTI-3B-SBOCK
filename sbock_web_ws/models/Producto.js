const { Schema, model } = require("mongoose");

const ProductoSchema = new Schema ({

    nombre: {
        type: String,
        require: true
    },
    stock: {
        type: Int32Array,
        require: true
    },
    necesario: {
        type: Int32Array
    }

});

module.exports = model ( "Producto", ProductoSchema );