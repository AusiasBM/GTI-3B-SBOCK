document.addEventListener('DOMContentLoaded', event => {

    var btn_conectar = document.getElementById("btn_con")
    var btn_desconectar = document.getElementById("btn_dis")
    var panel_control = document.getElementById("panel_control")
    
    let posXField = document.getElementById("pos_x")
    let posYField = document.getElementById("pos_y")
    let orienZField = document.getElementById("orien_z")
    let orienWField = document.getElementById("orien_w")


    btn_desconectar.style.display = 'none'  

    document.getElementById("btn_nav_auto").addEventListener("click", navPoseHandler)
    document.getElementById("btn_con").addEventListener("click", connect)
    document.getElementById("btn_dis").addEventListener("click", disconnect)

    let btnUp = document.getElementById('btn_up');
    btnUp.addEventListener('mousedown', upStartHandler, false);
    btnUp.addEventListener('mouseup', endHandler, false);
    btnUp.addEventListener('touchstart', upStartHandler, false);
    btnUp.addEventListener('touchend', endHandler, false);

    let btnDown = document.getElementById('btn_down');
    btnDown.addEventListener('mousedown', downStartHandler, false);
    btnDown.addEventListener('mouseup', endHandler, false);
    btnDown.addEventListener('touchstart', downStartHandler, false);
    btnDown.addEventListener('touchend', endHandler, false);

    let btnLeft = document.getElementById('btn_left');
    btnLeft.addEventListener('mousedown', leftStartHandler, false);
    btnLeft.addEventListener('mouseup', endHandler, false);
    btnLeft.addEventListener('touchstart', leftStartHandler, false);
    btnLeft.addEventListener('touchend', endHandler, false);

    let btnRight = document.getElementById('btn_right');
    btnRight.addEventListener('mousedown', rightStartHandler, false);
    btnRight.addEventListener('mouseup', endHandler, false);
    btnRight.addEventListener('touchstart', rightStartHandler, false);
    btnRight.addEventListener('touchend', endHandler, false);


    data = {
        // ros connection
        ros: null,
        rosbridge_address: 'ws://127.0.0.1:9090/',
        connected: false,
        // service information 
        service_busy: false, 
        service_response: ''
    }

    function connect(){
        console.log("Clic en connect")
	
        data.ros = new ROSLIB.Ros({
            url: data.rosbridge_address
        })

        // Define callbacks
        data.ros.on("connection", () => {
            data.connected = true
            console.log("Conexion con ROSBridge correcta")
            btn_conectar.style.display = 'none'
            btn_desconectar.style.display = 'inline'
        })
        data.ros.on("error", (error) => {
            console.log("Se ha producido algun error mientras se intentaba realizar la conexion")
            console.log(error)
        })
        data.ros.on("close", () => {
            data.connected = false
            console.log("Conexion con ROSBridge cerrada")	  
            btn_conectar.style.display = 'inline'
            btn_desconectar.style.display = 'none'  
            panel_control.style.display = 'none'	 
        })
    }

    
    function disconnect(){
        pause()
        data.ros.close()        
        data.connected = false
        console.log('Clic en botón de desconexión')
    }

    function upStartHandler() {
        call_move_service("delante")
    }

    function downStartHandler() {
        call_move_service("atras")
    }

    function leftStartHandler() {
        call_move_service("izquierda")
    }

    function rightStartHandler() {
        call_move_service("derecha")
    }

    function endHandler() {
        call_move_service("parar")
    }

    function navPoseHandler(){
        gotopose(posXField.value, posYField.value, orienZField.value, orienWField.value)
    }

    //Función para mover el robot de forma manual
    function call_move_service(valor){
        data.service_busy = true
        data.service_response = ''	
    
      //definimos los datos del servicio
        let service = new ROSLIB.Service({
            ros: data.ros,
            name: '/movement',
            serviceType: 'sbock_custom_interface/srv/MyMoveMsg'
        })
    
        let request = new ROSLIB.ServiceRequest({
            move: valor
        })
    
        service.callService(request, (result) => {
            data.service_busy = false
            data.service_response = JSON.stringify(result)
        }, (error) => {
            data.service_busy = false
            console.error(error)
        })	
    }

    //Funció para mandar la posicióna la que navegar
    function gotopose(pos_x = 0.0, pos_y = 0.0, orien_z = 0.0, orien_w = 0.0){
        console.log("Clic en gotopose")
        data.service_busy = true
        data.service_response = ''	
    
      //definimos los datos del servicio
        let service = new ROSLIB.Service({
            ros: data.ros,
            name: '/nav_pose',
            serviceType: 'sbock_custom_interface/srv/NavToPose'
        })
    
        let request = new ROSLIB.ServiceRequest({
            pos_x: parseFloat(pos_x),
            pos_y: parseFloat(pos_y),
            orien_z: parseFloat(orien_z),
            orien_w: parseFloat(orien_w),
        })
    
        service.callService(request, (result) => {
            data.service_busy = false
            data.service_response = JSON.stringify(result)
        }, (error) => {
            data.service_busy = false
            console.error(error)
        })	
    }

    
});
