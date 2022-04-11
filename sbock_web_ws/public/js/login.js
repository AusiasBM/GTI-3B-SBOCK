var URL = "http://localhost:3500";

function enviar(evento) {
    evento.preventDefault();
    
    fetch(URL + "/api/usuarios/login", {
        method: 'post',
        mode: "cors",
        headers: {"correo": document.getElementById('label_correo').value, "contrasenya": document.getElementById('label_password').value},
    }).then(function (resp){
        
        if(resp.status == 200){
            return resp.json()
        }else{
            document.getElementById('textoErrorLogin').innerHTML = `
                <h6>Algo no está bién</h6>
            `
        }
    }).then( function(res){
        console.log(res)
        console.log(res.nombre)

        sessionStorage.setItem('user', res.nombre); // write
        

        

        location.href = './app/dashboard.html';
    }).catch(
        (err) => console.log(err)
    );
  
}