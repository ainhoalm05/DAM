function random(){
    let numero = Math.floor(Math.random()*100);
    return document.getElementById("mostrarNumero").textContent=numero;
}
function tiempo(){
    
}
function cuentaAtras2(){
    let cuenta;
    clearInterval(cuenta);

    let valorTiempo = document.getElementById("tiempo").value;
    let contador = document.getElementById("contador");

    
    cuenta = setInterval(() => {
        if (valorTiempo > 0) {
            contador.textContent = valorTiempo--;
        } else {
            clearInterval(cuenta);
            contador.textContent = "El tiempo ha expirado";
        }
    }, 1000);
}
// // function cambiarTexto(){
//     document.body.innerHTML="<h1>HOLA</h1>";
// }
function load (){
    
    let numeroAleatorio = document.getElementById("numeroAleatorio");
    numeroAleatorio.addEventListener("click", random ,false); 

    let cuentaAtras = document.getElementById("cuentaAtras");
    cuentaAtras.addEventListener("click",cuentaAtras2);
    /*

    let boton2 = document.getElementById("boton2");  
    boton2.addEventListener("click", cambiarTexto,false);

    let cuadroTexto = document.getElementById("cuadroTexto");
    cuadroTexto.addEventListener("keydown", (event)=>(document.getElementById("textoSalida").textContent+=`${event.key}`));

    let boton3 = document.getElementById("boton3");
    boton3.addEventListener("click", (event)=>(console.log(event)),false);
*/
    }
window.addEventListener("DOMContentLoaded", load, false);