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

    let cuadroTexto = document.getElementById("cuadroTexto");
    cuadroTexto.addEventListener("keydown", (event)=>(document.getElementById("textoSalida").textContent+=`${event.key}`));

    let boton3 = document.getElementById("boton3");
    boton3.addEventListener("click", (event)=>(console.log(event)),false);
}
window.addEventListener("DOMContentLoaded", load, false);