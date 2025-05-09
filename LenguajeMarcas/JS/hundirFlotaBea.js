let barcos=[4,3,2,1];
let tableroUsuario;
// function esBarco4(posicion1,posicion2,m){
// if(m[i][j] == m[][]){}
// }
function guardarBarco(event, tableroUsuario){
let i=event.target.value[1];
let j=event.target.value[2];
if(i=event.target.id[0] === 'u'){
tablero[i][j] ='X';
}   
}
function load(){
    let celdasTabla = document.querySelectorAll(".celda");
    celdasTabla.forEach(celda=>celda.addEventListener("keydown",guardarBarco)
}
window.addEventListener("DOMContentLoaded",load);