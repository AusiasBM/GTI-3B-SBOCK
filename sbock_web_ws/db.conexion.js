const mongoose = require('mongoose');

const conexionDB = async () => {
    try {
        const DB = await mongoose.connect('mongodb://localhost:27017/sbock');
            //'mongodb+srv://ausias:wpj8kbe.xra8FGA9hyq@cluster0.q37va.mongodb.net/sbock');
        console.log("Conectado con Mongo, ", DB.connection.name);
    } catch (error) {
        console.log(error);
    }
}

module.exports = conexionDB;