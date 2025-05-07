function codificacion(event){
    let abecedario = "abcdefghijklmnñopqrstuvwxyz";
    let letra = event.key.toLowerCase();
    let posicion = abecedario.indexOf(letra);//Busca su posicion en el abecedario

    if (posicion !== -1) {//comprueba que la letra existe en el abecedario(0-26)
        let salida = document.getElementById("codificado");
        salida.textContent += (posicion + 1);//le suma 1 para que empiece en 1 y no en 0
    }    
}
function load(){
    let letra = document.getElementById("descodificado");
    letra.addEventListener("keydown",codificacion);
}
window.addEventListener("DOMContentLoaded", load, false);