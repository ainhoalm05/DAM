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
let matriz = [0,0,0];
function trileros(){
    let pelota = "o"; // Empieza con X



}
function load(){
       
    let boton1=document.getElementById("boton1");
    boton1.addEventListener("click",comprobarDatos);
    
    let botones=document.querySelectorAll(".boton");
    botones.forEach(botones =>  botones.addEventListener("click",trileros()));  
    

}
window.addEventListener("DOMContentLoaded", load);