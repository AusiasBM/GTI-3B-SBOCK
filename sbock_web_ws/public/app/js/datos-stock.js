const IP_PUERTO="http://localhost:3500/api"

function obtenerStock(){

    fetch(IP_PUERTO + '/productos/obtener', {
        method : 'get'
    })
    .then(function (respuesta) {
        if(respuesta.status != 200){
            document.getElementById("filaProductos").innerHTML = `<h2>No hay datos</h2>`;
        }
        return respuesta.json();
    })
    .then((res) => {
        //console.log(res[0]['necesarios']);
        document.getElementById("filaProductos").innerHTML = ``;

        res.forEach(element => {
            document.getElementById("filaProductos").innerHTML += `
                <div class="col-12 articulo shadow">
                    <h5>${element['nombre']}</h5>
                    <hr>
                    <p>Stock: ${element['stock']}</p>
                    <p>Necesario: ${element['necesarios']}</p>
                    <p>Falta: ${element['necesarios'] - element['stock']}</p>
                </div>
            `;
            console.log(element);
        });
    });


}