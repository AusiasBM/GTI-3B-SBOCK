const { Schema, model } = require("mongoose");

const ProductoSchema = new Schema ({

    nombre: {
        type: String,
        require: true
    },
    stock: {
        type: Number,
        require: true
    },
    necesario: {
        type: Number
    }

});

module.exports = model ( "Producto", ProductoSchema );