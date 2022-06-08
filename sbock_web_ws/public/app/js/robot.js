const IP_PUERTO = 'htttp://localhost:3500/api'

document.addEventListener('DOMContentLoaded', event => {


    var btn_conectar = document.getElementById("btn_con")
    var btn_desconectar = document.getElementById("btn_dis")
    var mapDiv = document.getElementById("map")
   

    btn_desconectar.style.display = 'none'  

    document.getElementById("btn_con").addEventListener("click", connect)
    document.getElementById("btn_dis").addEventListener("click", disconnect)
    document.getElementById("ubiA").addEventListener("click", ubicacionA)
    document.getElementById("ubiB").addEventListener("click", ubicacionB)
    document.getElementById("ubiC").addEventListener("click", ubicacionC)
    document.getElementById("button1").addEventListener("click", provaImage)
    

    function provaImage(){
        detect_objects()
    }

    function ubicacionA(){
        gotopose(0.0, 0.0, 0.0, 1.0)
    }

    function ubicacionB(){
        gotopose(1.33, 0.0, 0.90, 1.0)
    }

    function ubicacionC(){
        gotopose(1.50, 1.27, 0.12, 1.0)
    }


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


    var x = 0;
    var z = 0;
    var scale = 0;
    var scale_max = 0.2;
 

    data = {
        // ros connection
        ros: null,
        rosbridge_address: 'ws://127.0.0.1:9090/',
        connected: false,
        // service information 
        service_busy: false, 
        service_response: '',
        //map
        viwer: null,
        gridClient: null,
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

            //cargarMapa()
            iniPose()
            displayBattery()
            displayPoseMarker()
            document.getElementById("bateriaCompleto").style.display = "block";
            document.getElementById("modalFlechas").style.display = "block";
            document.getElementById("dashboard").style.display = "block";
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
        })
    }

    
    function disconnect(){
        data.ros.close()        
        data.connected = false
        data.viewer = null
        data.gridClient = null
        mapDiv.innerHTML=""
        console.log('Clic en botón de desconexión')
        document.getElementById("bateriaCompleto").style.display = "none";
        document.getElementById("modalFlechas").style.display = "none";
        document.getElementById("dashboard").style.display = "none";
    }

    function cargarMapa(){
        // Create the main viewer.

        console.log('Cargar Mapa')
        data.viewer = new ROS2D.Viewer({
            divID : 'map',
            width : 800,
            height : 800
        });

        // Setup the map client.
        data.gridClient = new ROS2D.OccupancyGridSrvClient({
            ros : data.ros,
            rootObject : data.viewer.scene,
            service : '/map_server/map'
            //continuous: true,
        });

        // Scale the canvas to fit to the map
        data.gridClient.on('change', function() {

            console.log('Mapa')
            data.viewer.scaleToDimensions(data.gridClient.currentGrid.width, data.gridClient.currentGrid.height);
            data.viewer.shift(data.gridClient.currentGrid.pose.position.x, data.gridClient.currentGrid.pose.position.y);
            displayPoseMarker();
            iniPose();
        });
    }

    function cargarMapa2(){
        // Create the main viewer.

        console.log('Cargar Mapa')
        data.viewer = new ROS2D.Viewer({
            divID : 'map',
            width : 800,
            height : 800
        });

        // Setup the map client.
        data.gridClient = new ROS2D.OccupancyGridClient({
            ros : data.ros,
            rootObject : data.viewer.scene,
            topic: '/map',
            continuous: true,
        });

        // Scale the canvas to fit to the map
        data.gridClient.on('change', function() {

            console.log('Mapa')
            data.viewer.scaleToDimensions(data.gridClient.currentGrid.width, data.gridClient.currentGrid.height);
            data.viewer.shift(data.gridClient.currentGrid.pose.position.x, data.gridClient.currentGrid.pose.position.y);
            displayPoseMarker();
            iniPose()
        });
    }

    function displayPoseMarker() {
        
        var poseListener = new ROSLIB.Topic({
            ros : data.ros,
            name : '/odom',
            messageType : 'nav_msgs/Odometry',
            throttle_rate : 100
        });

        poseListener.subscribe(function(msg) {

	// Orientate the marker based on the robot's pose.
            console.log('Got Pose data:', msg.pose.pose.position.x, msg.pose.pose.position.y );  
            console.log('Got Pose orientation:', msg.pose.pose.orientation );  
           
        });
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
    function gotopose(pos_x = 0.0, pos_y = 0.0, orien_z = 0.0, orien_w = 1.0){
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
            orien_z: parseFloat(0.0),
            orien_w: parseFloat(1.0),
        })
    
        service.callService(request, (result) => {
            data.service_busy = false
            data.service_response = JSON.stringify(result)
        }, (error) => {
            data.service_busy = false
            console.error(error)
        })	
    }


    //Función para iniciar la posición del robot
    function iniPose(){
        console.log("Clic en iniPose")
        data.service_busy = true
        data.service_response = ''	
    
      //definimos los datos del servicio
        let service = new ROSLIB.Service({
            ros: data.ros,
            name: '/pose_ini',
            serviceType: 'sbock_custom_interface/srv/IniPose'
        })
    
        let request = new ROSLIB.ServiceRequest({
            pos_x: 0.0,
            pos_y: 0.0,
            orien_z: 0.0,
            orien_w: 1.0 //0.7071,
        })
    
        service.callService(request, (result) => {
            data.service_busy = false
            data.service_response = JSON.stringify(result)
        }, (error) => {
            data.service_busy = false
            console.error(error)
        })	
    }
    
    //Funcion para iniciar la posicion del robot
    function detect_objects(){
        console.log("Clic en detect_objects")
        data.service_busy = true
        data.service_response = ''	
    
      //definimos los datos del servicio
        let service = new ROSLIB.Service({
            ros: data.ros,
            name: '/predict_yolo',
            serviceType: 'sbock_custom_interface/srv/Predict'
        })

        let request = ''
      
    
        service.callService(request,(result) => {
            data.service_busy = false
            data.service_response = JSON.stringify(result)
            console.log(data.service_response)
            if(result.success){
            	num_productos = data.service_response.num_objetos
            	nombre_producto = 'zumo_manzana'


            	
                fetch('localhost:3500/api/productos/modificar', {
                    method : 'POST',
                    mode: 'cors', // no-cors, *cors, same-origin
                    cache: 'no-cache', // *default, no-cache, reload, force-cache, only-if-cached
                    credentials: 'same-origin',
                    headers: {
                        'Content-Type': 'application/json'
                        // 'Content-Type': 'application/x-www-form-urlencoded',
                      },
                      redirect: 'follow', // manual, *follow, error
                      referrerPolicy: 'no-referrer', // no-referrer, *no-referrer-when-downgrade, origin, origin-when-cross-origin, same-origin, strict-origin, strict-origin-when-cross-origin, unsafe-url
                    body : JSON.stringify({
                        nombre: nombre_producto,
                        stock: num_productos,
                    })
                })
                .then(function (respuesta) {
                    if(respuesta.status != 200){
                        console.log("ERROR EN POST")
                    }
                    return respuesta.json();
                })
                .then((res) => {
                    console.log(res);
          
                })
            	
            }
        }, (error) => {
            data.service_busy = false
            console.error(error)
        })	
    }


    function displayBattery() {
        

        // Subscribe to the robot's pose updates.
        var poseListener = new ROSLIB.Topic({
            ros : data.ros,
            name : '/battery_state',
            messageType : 'sensor_msgs/BatteryState',
            throttle_rate : 100
        });

        poseListener.subscribe(function(msg) {

            // Orientate the marker based on the robot's pose.
            //console.log('Got battery data:', msg.percentage );
            valor =  msg.percentage + 'px';
            document.getElementById("nivel").style.width = valor;
            
        });
    } // end display pose marker



    
});
