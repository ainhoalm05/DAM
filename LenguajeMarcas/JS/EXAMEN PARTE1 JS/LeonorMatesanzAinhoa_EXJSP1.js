function esMatricula(matricula){
    let RegExp=/^[0-9]{4}[A-Z]{3}/;
    if(RegExp.test(matricula)){
        return true;
    }else{
        return false;
    }
}
function comprobarDatos(){
    let matricula=document.getElementById("matricula").value;

    if(esMatricula(matricula)){
        return true;
    }else{
        alert("Has introducido mal la matricula");
    }   
    
    let litros=document.getElementById("litros").value;
    alert(litros*1.26);
}
/*Ejercicio 2*/
let abecedario = "ABCDEFGHIJKLMNOPQRSTUVWXYZ".split("");
let letraBuscada;
let cantidadBuscada = 0;
function rellenarMatriz() {
    let matriz = [];
    for (let i = 0; i < 3; i++) {
        matriz[i] = [];
        for (let j = 0; j < 3; j++) {
            let letra = abecedario[random(25)];
            matriz[i][j] = letra;
            let celda = document.getElementById(`${i}${j}`);
            celda.textContent = letra;
            celda.style.backgroundColor = "white";
            celda.addEventListener("click", comprobarLetra);
        }
    }
    return matriz;
}
function generarLetraYNumero(matriz) {
    letraBuscada = abecedario[random(25)];

    for (let i = 0; i < matriz.length; i++) {
        if (matriz[i] === letraBuscada) {
            cantidadBuscada++;
        }
}
    document.getElementById("mensaje").textContent = `Haz clic en la letra "${letraBuscada}" ${cantidadBuscada} veces.`;
}

function comprobarLetra(event) {
    if (event.target.textContent === letraBuscada) {
        event.target.style.backgroundColor = "lightgreen";
    } else {
        event.target.style.backgroundColor = "red";
    }
}

function random(num) {
    return Math.floor(Math.random() * (num + 1));
}
let matriz = [0,0,0];
let posicionPelota=0;
function prepararTrileros(){
        posicionPelota = random(2);
        matriz = [0,0,0];
        matriz[posicionPelota] = 1;
    }

    function trileros(event){
        let id = parseInt(event.target.id.charAt(1));

        if(matriz[id] === 1){
            event.target.textContent = "o";
            alert("¡Has acertado!");
        } else {
            event.target.disabled = true;
            alert("No está aquí. Prueba otra.");
        }
    }
// function trileros(event) {
//     for (let i = 0; i < 3; i++) {
//         let boton = document.getElementById("b" + i);

//         if (event.target === boton) {
//             if (matriz[i] === 1) {
//                 boton.textContent = "o";
//                 alert("¡Has acertado!");
//             } else {
//                 boton.disabled = true;
//                 alert("No está aquí. Prueba otra.");
//             }
//         }
//     }
// }

/*Ejercicio 4*/
let contador = 0;
let interval;
const colores = ["blue", "yellow", "green", "orange", "pink", "purple", "brown", "cyan", "turquoise", "gray"];

    function iniciarColores(){
        interval = setInterval(() => {
            contador++;
            document.getElementById("contadorColor").textContent = contador;
            let ultimoDigito = contador % 10;
            document.body.style.backgroundColor = colores[ultimoDigito];
        }, 500);
    }

    function pararColores(){
        clearInterval(interval);
    }
function cambiarColor() {
    contador++;
    document.getElementById("contador").textContent = contador;

    let ultimoDigito = contador % 10;
    document.body.style.backgroundColor = colores[ultimoDigito];
}

function load(){
       
    let boton1=document.getElementById("boton1");
    boton1.addEventListener("click",comprobarDatos);
    
    let matriz=rellenarMatriz();
    generarLetraYNumero(matriz);

    document.querySelectorAll(".casilla").forEach(celda => {
        celda.addEventListener("click", comprobarLetra)
});
    // let botones=document.querySelectorAll(".boton");
    // botones.forEach(botones =>  botones.addEventListener("click",trileros()));
    document.getElementById("00").addEventListener("click", trileros);
    document.getElementById("01").addEventListener("click", trileros);
    document.getElementById("02").addEventListener("click", trileros);
    prepararTrileros();  
    
    clearInterval(interval);
}
window.addEventListener("DOMContentLoaded", load);