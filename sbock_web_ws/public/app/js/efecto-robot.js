
let angle = 0,
img = document.getElementById('manual');

document.getElementById("btn_left").addEventListener("click", girarIzquierda)

function girarIzquierda(){
    angle = (angle - 3) % 360;
    img.style.transform = `rotate(${angle}deg)`;
}

document.getElementById("btn_right").addEventListener("click", girarDerecha)

function girarDerecha(){
    angle = (angle + 3) % 360;
    img.style.transform = `rotate(${angle}deg)`;
}