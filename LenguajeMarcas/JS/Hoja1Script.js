
 // Ejercicio 1
 function ejercicio1(){
 window.alert("Ej1: Hello World");
 }
 //Ejercicio 2
 function ejercicio2(){
 document.writeln("Ej2: Hello World");
 }
 //Ejercicio 3
 function ejercicio3(){
 document.writeln("<br>Ej3: 3+5= ", 3+5);
 }
 //Ejercicio 4
 function ejercicio4(){
 let nombre=prompt("Ej4: Introduce tu nombre");
 document.writeln("<br/>",nombre);
 }
 //Ejercicio 5 
 function ejercicio5(){
 let a=prompt("Ej5: Introduce un numero");
 let b=prompt("Ej5: Introduce el segundo numero");
 document.writeln("<br/>Ej5: ",parseInt(a)+parseInt(b));
 }
 //Ejercicio 6
 function ejercicio6(){
 let n1=prompt("Ej6: Ingresa un numero");
 let n2=prompt("Ej6: Ingresa el segundo numero");
 if(n1>n2){
         document.writeln("<br/>Ej6: "+n1+" es mayor que "+n2);
  } else{
     document.writeln("<br/>Ej6: "+n2+" es mayor que "+n1);
  }
}
  //Ejercicio 7
function ejercicio7(){
 let n3=prompt("Ej7: Ingresa un numero");
 let n4=prompt("Ej7: Ingresa el segundo numero");
 let n5=prompt("Ej7: Ingresa el tercer numero");

 if(n3>n4 && n3>n5){
         document.writeln("<br/>Ej7: "+n3+" es mayor que "+n4+" y que "+n5);
  } else if(n4>n3 && n4>n5){
     document.writeln("<br/>Ej7: "+n4+" es mayor que "+n3+" y que "+n5);
  } else{
     document.writeln("<br/>Ej7: "+n5+" es mayor que "+n3+" y que "+n4);
  }
}
  //Ejercicio 8
  function ejercicio8(){
  let n6=prompt("Ej8: Ingresa un numero(Ejercicio 8)");
  if(n6%2==0){
     document.writeln("<br/>Ej8: "+n6+" es divisible entre 2");
  }else{
     document.writeln("<br/>Ej8: "+n6+" no es divisible entre 2");
  }
}
  //Ejercicio 9
  function ejercicio9(){
  let frase=prompt("Ej9: Escribe una frase");
  let contar = frase.split("a").length-1;
//   var contar = frase.match(/a/g).length;
 alert("Ej9: "+ contar);
 /*
 let contador=0;
 for(let i=0; i<frase.length;i++){
    ir(frase[i].toLowerCase()==='a'){
        contador++;
    }
 }
 */
 
  }
  function ejercicio10(){
    
    }
 function carga(){
    ejercicio1();
    ejercicio2();
    ejercicio3();
    ejercicio4();
    ejercicio5();
    ejercicio6();
    ejercicio7();
    ejercicio8();
    ejercicio9();
    ejercicio10();
}
 window.addEventListener("DOMContentLoaded",carga);
