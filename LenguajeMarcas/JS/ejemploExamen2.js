function esNombre(nombre){
const RegExp=/^[a-zA-Z]{3,}$/;
if(RegExp.test(nombre)){
    return true;
}else{
    alert("Mal sintaxis");
    return false;
}
}
function esDni(dni){
    const RegExp=/^[0-9]{8}[A-Z]{1}$/;
    if(RegExp.test(dni)){
        return true;
    }else{
        alert("❌ El DNI debe tener 8 números y una letra.");
        return false;
    }
}
function esEmail(email){
    const RegExp=/^[._a-z0-9]+@[a-z]+\.[a-z]{2.3}$/;
    if(RegExp.test(email)){
        return true;
    }else{
        alert("Has escrito mal el Email");
        return false;
    }
}
function comprobarFormulario(){
    let nombre=document.getElementById("nombre").value;
    let email=document.getElementById("email").value;
    let dni=document.getElementById("dni").value;

    if(esNombre(nombre) && esEmail(email) && esDni(dni)){
        return true
    }else{
        alert("Revisa los datos");
    }
    
    
}
let count = 0;
function cuentaClick(event){
    count++;
    console.log("Clic número: " + count); // Puedes borrar esto si no necesitas la consola
    document.getElementById("contador").textContent = "Has hecho " + count + " clics";

    if (count === 10){
        alert("¡Has llegado a 10 clics!");
    }

}
let turno = "X"; // Empieza con X

function marcar(event) {
    const boton = event.target;

    // Si ya está marcado, no hacer nada
    if (boton.textContent !== "") {
        return;
    }

    // Marcar con X u O
    boton.textContent = turno;
    boton.disabled = true;

    // Ver si alguien ha ganado
    if (comprobarGanadorSimple()) {
        document.getElementById("mensaje").textContent = "¡Ganador: " + turno + "!";
        desactivarCeldas();
    } else {
        // Cambiar turno
        turno = (turno === "X") ? "O" : "X";
    }
}

// Desactiva todos los botones al terminar la partida
function desactivarCeldas() {
    const botones = document.querySelectorAll("button");
    botones.forEach(boton => boton.disabled = true);
}

function comprobarGanadorSimple() {
    // Filas
    if (document.getElementById("00").textContent === turno &&
        document.getElementById("01").textContent === turno &&
        document.getElementById("02").textContent === turno) return true;

    if (document.getElementById("10").textContent === turno &&
        document.getElementById("11").textContent === turno &&
        document.getElementById("12").textContent === turno) return true;

    if (document.getElementById("20").textContent === turno &&
        document.getElementById("21").textContent === turno &&
        document.getElementById("22").textContent === turno) return true;

    // Columnas
    if (document.getElementById("00").textContent === turno &&
        document.getElementById("10").textContent === turno &&
        document.getElementById("20").textContent === turno) return true;

    if (document.getElementById("01").textContent === turno &&
        document.getElementById("11").textContent === turno &&
        document.getElementById("21").textContent === turno) return true;

    if (document.getElementById("02").textContent === turno &&
        document.getElementById("12").textContent === turno &&
        document.getElementById("22").textContent === turno) return true;

    // Diagonales
    if (document.getElementById("00").textContent === turno &&
        document.getElementById("11").textContent === turno &&
        document.getElementById("22").textContent === turno) return true;

    if (document.getElementById("02").textContent === turno &&
        document.getElementById("11").textContent === turno &&
        document.getElementById("20").textContent === turno) return true;

    return false;
}

function filtrarPalabras(event) {
    const texto = event.target.value.toLowerCase();
    const palabras = ["JavaScript", "Java", "Python", "C++", "Kotlin"];

    const resultado = palabras.filter(function(palabra) {
        return palabra.toLowerCase().includes(texto);
    });

    // Creamos el HTML con un bucle en vez de .map() + .join()
    let html = "";
    for (let i = 0; i < resultado.length; i++) {
        html += "<li>" + resultado[i] + "</li>";
    }

    document.getElementById("resultados").innerHTML = html;
}
function cuentaAtras() {
    let tiempo = 10;
    let p = document.getElementById("cuenta");
    p.textContent = tiempo;

    let intervalo = setInterval(function () {
        tiempo--;
        if (tiempo > 0) {
            p.textContent = tiempo;
        } else {
            clearInterval(intervalo);
            p.textContent = "¡Tiempo terminado!";
        }
    }, 1000);
}
function random(number){
    return Math.floor(Math.random()*(number+1));
}
function cambiarFondo(){
    document.body.style.background=`rgb(${random(255)},${random(255)},${random(255)})`;
}
function load(){
    let boton1=document.getElementById("validar");
    boton1.addEventListener("click",comprobarFormulario);

    let boton2=document.getElementById("clicker");
    boton2.addEventListener("click",cuentaClick);

    document.getElementById("00").addEventListener("click", marcar);
    document.getElementById("01").addEventListener("click", marcar);
    document.getElementById("02").addEventListener("click", marcar);
    document.getElementById("10").addEventListener("click", marcar);
    document.getElementById("11").addEventListener("click", marcar);
    document.getElementById("12").addEventListener("click", marcar);
    document.getElementById("20").addEventListener("click", marcar);
    document.getElementById("21").addEventListener("click", marcar);
    document.getElementById("22").addEventListener("click", marcar);

    let inputBuscar = document.getElementById("buscar");
    inputBuscar.addEventListener("input", filtrarPalabras);

    let boton = document.getElementById("iniciar");
    boton.addEventListener("click", cuentaAtras);

    let boton3 = document.getElementById("boton3");
    boton3.addEventListener("click", cambiarFondo);

    
}
window.addEventListener("DOMContentLoaded",load,false);