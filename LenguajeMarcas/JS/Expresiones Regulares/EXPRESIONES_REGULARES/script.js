function exp1(){
  //ASERCIONES EN EXPRESIONES REGULARES
    /* 1. Empiece por A mayuscula y minuscula */ 
   //let expReg=/^[A|a]/;
   /* 2. Cadena que termine por o */
   //let expReg=/o$/;
   /* 3. Limite de palabra \b iniciar y finalizar - Contiene*/
   //let expReg=/\bhola\b/;

   //CARACTERES 
   //Cadena alfabetica mayusculas y minusculas
   //let expReg=/[A-Za-z]+/;
   // Cadena numerica
   //let expReg=/[0-9]+/;
   let expReg=/\b[0-9]{2,}\b/; ///\b\d{2}\b/ 
   // Conocemos el número veces {2}
   // Rango {2,4}
   // A partir de {2,}
   let palabra ="123676";
   if(expReg.test(palabra)){
    document.writeln("<h2> True -->"+palabra+"</h2>");
   }else{
    document.writeln("<h2> False-->"+palabra+"</h2>");
   }

}
function load(){
	exp1();
}
window.addEventListener("DOMContentLoaded", load, false);