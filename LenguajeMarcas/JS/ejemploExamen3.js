function esCorreo(correo){
    let RegExp = /^[^@]+@[^@]+\.[a-z]{2,}$/;
    return RegExp.test(correo);
}

function comprobarNombreCorreo(){
    let nombre = document.getElementById("nombre").value;
    let correo = document.getElementById("correo").value;

    if(esCorreo(correo)){
        alert("Nombre válido. Tiene " + nombre.length + " letras.");
    } else {
        alert("Correo incorrecto. Debe tener formato nombre@dominio.com");
    }
}
let numeroBuscado = [];
let aciertos = 0;

function rellenarMatrizNumeros(){
    aciertos = 0;
    numeroBuscado = [];

    for(let i=0; i<3; i++){
        for(let j=0; j<3; j++){
            let id = "" + i + j;
            let boton = document.getElementById(id);
            let num = Math.floor(Math.random() * 9) + 1;
            boton.textContent = num;
            boton.disabled = false;
            boton.style.backgroundColor = "";
            boton.addEventListener("click", comprobarPar);

            if(num % 2 === 0){
                numeroBuscado.push(id);
            }
        }
    }

    alert("Haz clic solo en los números pares.");
}

function comprobarPar(event){
    let num = parseInt(event.target.textContent);
    if(num % 2 === 0){
        event.target.style.backgroundColor = "lightgreen";
        aciertos++;
        if(aciertos === numeroBuscado.length){
            alert("¡Muy bien! Encontraste todos los pares.");
        }
    } else {
        event.target.style.backgroundColor = "red";
    }
}
let colorSecreto = "";

function generarColor(){
    let colores = ["rojo", "verde", "azul"];
    colorSecreto = colores[Math.floor(Math.random() * 3)];

    document.getElementById("c0").textContent = "rojo";
    document.getElementById("c1").textContent = "verde";
    document.getElementById("c2").textContent = "azul";
}

function comprobarColor(event){
    let elegido = event.target.textContent;
    if(elegido === colorSecreto){
        event.target.style.backgroundColor = "lightgreen";
        alert("¡Acertaste!");
    } else {
        event.target.disabled = true;
        alert("Color incorrecto.");
    }
}
let letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".split("");
let intervaloLetras;

function iniciarVocales(){
    intervaloLetras = setInterval(() => {
        let letra = letras[Math.floor(Math.random() * letras.length)];
        document.getElementById("contadorLetra").textContent = letra;

        if("AEIOU".includes(letra)){
            document.body.style.backgroundColor = "lightblue";
        } else {
            document.body.style.backgroundColor = "white";
        }
    }, 1000);
}

function pararVocales(){
    clearInterval(intervaloLetras);
}

// Arreglo con las letras del alfabeto (A = 1, B = 2, ..., Z = 26)
let alfabeto = ['A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'];

// Función para convertir un número en la letra correspondiente
function codificarNumero() {
    let numero = document.getElementById("numero").value;
    let letra = "";

    // Comprobamos si el número es válido (debe ser un número entre 1 y 26)
    if (numero >= 1 && numero <= 26) {
        letra = alfabeto[numero - 1]; // Accedemos a la letra en el arreglo
        document.getElementById("letra").textContent = letra;
    } else {
        document.getElementById("letra").textContent = "Número no válido. Debe ser entre 1 y 26.";
    }
}
function load(){
    // Ej 1
    document.getElementById("botonNombreCorreo").addEventListener("click", comprobarNombreCorreo);

    // Ej 2
    rellenarMatrizNumeros();

    // Ej 3
    generarColor();
    document.getElementById("c0").addEventListener("click", comprobarColor);
    document.getElementById("c1").addEventListener("click", comprobarColor);
    document.getElementById("c2").addEventListener("click", comprobarColor);

    // Ej 4 botones (en HTML: id="startVocal" y id="stopVocal")
    document.getElementById("startVocal").addEventListener("click", iniciarVocales);
    document.getElementById("stopVocal").addEventListener("click", pararVocales);

    document.getElementById("numero").addEventListener("input", codificarNumero);
}

window.addEventListener("DOMContentLoaded", load);
