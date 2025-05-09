function codificacion(event){
    let abecedario = "abcdefghijklmnñopqrstuvwxyz";
    let letra = event.key.toLowerCase();
    let posicion = abecedario.indexOf(letra);//Busca su posicion en el abecedario

    if (posicion !== -1) {//comprueba que la letra existe en el abecedario(0-26)
        let salida = document.getElementById("codificado");
        salida.textContent += (posicion + 1);//le suma 1 para que empiece en 1 y no en 0
    }    
}
function random(numero){
    return Math.floor(Math.random() * numero);//Genera un numero aleatorio entre 0 y el numero que le pases
}

function load(){
    let texto = document.getElementById("descodificado");
    texto.addEventListener("keydown",codificacion);

    let letra = document.querySelectorAll(".letra");
    letra.forEach(i=>i.addEventListener("click",))
}
window.addEventListener("DOMContentLoaded", load, false);