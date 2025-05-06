function comprobarLetra() {
    let palabra = ["javascript", "html", "css", "python", "java"];
    let palabraAleatoria = palabra[Math.floor(Math.random() * palabra.length)];
    let letra = document.getElementById("boton").value.toLowerCase();

    let resultado = document.getElementById("resultado");
    resultado.textContent = ""; // Limpiar el resultado anterior
    
    for (let i = 0; i < palabraAleatoria.length; i++) {
        if (letra === palabraAleatoria[i]) {
            document.getElementById("resultado").textContent = "¡Correcto! La letra está en la palabra.";
        }
    }
 
    console.log(palabraAleatoria);
}


function load(){
    let boton = document.getElementById("boton");
    boton.addEventListener("click", comprobarLetra);

   
}