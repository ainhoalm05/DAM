let numeroAdivinar = 0;
let matriz = [
    [0,0,0],
    [0,0,0],
    [0,0,0]];
let veces=0;
function random(numero){
    let numeroAleatorio = Math.floor(Math.random()*(numero+1));
    return numeroAleatorio;
   //  return document.getElementById("mostrarNumero").textContent=numeroAleatorio;    
}
function generrarNumeroAdivinar(){
    numeroAdivinar = random(9);
    document.getElementById("numeroAdivinar").textContent=numeroAdivinar;    
    
}
function generarVeces(){
    document.getElementById("veces").textContent=veces;
}
function rellenarMatriz(){
    for(let i=0;i<3;i++){
        for(let j=0;j<3;j++){
            matriz[i][j]=random(9);
            if (matriz[i][j] === numeroAdivinar){
                veces++;
            }
            
            
        }
    }
    
    if (veces === 0){
        matriz[random(2)][random(2)]=numeroAdivinar;
        veces=1;
    }
    visualizarMatriz();
}
function visualizarMatriz(){
    for(let i=0;i<3;i++){
        for(let j=0;j<3;j++){
            console.log (matriz[i][j]);
        }
    }
}
function comprobarNumero(event){
    let i = event.target.value[0];
    let j = event.target.value[1];

    if(matriz[i][j] === numeroAdivinar){
        document.getElementById(event.target.value).textContent=matriz[i][j];
        document.getElementById(event.target.value).style.backgroundColor="green";
    }else{
        
        document.getElementById(event.target.value).style.backgroundColor="red";
        event.target.disabled=true;
    }
    console.log(matriz[i][j]);
    console.log(numeroAdivinar);
}
function load (){
    
    generrarNumeroAdivinar();
    rellenarMatriz();
    generarVeces();
    let botonesNumeros = document.querySelectorAll(".boton");
    botonesNumeros.forEach(boton=>boton.addEventListener("click",comprobarNumero));
    
      
    }
window.addEventListener("DOMContentLoaded", load, false);

