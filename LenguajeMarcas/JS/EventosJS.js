function random(number){
    return Math.floor(Math.random()*(number+1));
}
function cambiarFondo(){
    document.body.style.background=`rgb(${random(255)},${random(255)},${random(255)})`;
}
function cambiarTexto(){
    document.body.innerHTML="<h1>HOLA</h1>";
}
function load (){
    let boton = document.querySelector("button");
    boton.addEventListener("click", cambiarFondo,false); 
    let boton2 = document.getElementById("boton2");  
    boton2.addEventListener("click", cambiarTexto,false);
}
window.addEventListener("DOMContentLoaded", load, false);