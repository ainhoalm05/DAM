function Ejercicio1(){
    alert("Hello World");
} 
function Ejercicio2(){
    document.writeln("Hello World");
} 
function Ejercicio3(){
    let a=3;
    let b=5;
    let suma=a+b;
    console.log("La suma es: "+suma);
}
function Ejercicio4(){
    let nombre=prompt("¿Cuál es tu nombre","Beatriz");
    document.writeln("Hola mi nombre es "+nombre+"<br>");
}
function Ejercicio5(){
    let numero1=prompt("Escribe un número");
    let numero2=prompt("Escribe un segundo número");
    let resultado=parseInt(numero1)+parseInt(numero2);
    document.writeln("El resultado es: "+resultado+"<br>");
}
function Ejercicio6(){
    let numero1=parseInt(prompt("Ej6:Escribe un número"));
    let numero2=parseInt(prompt("Ej6:Escribe un segundo número"));
    if(numero1>numero2){
        document.writeln("El numero:"+numero1+" es mayor que el número "+numero2+"<br>");
    }else if(numero2>numero1){
        document.writeln("El numero:"+numero2+" es mayor que el número "+numero1+"<br>");
         }else{
            // Son iguales
            document.writeln("El numero:"+numero1+" es igual "+numero2+"<br>");
         }
}
function Ejercicio7(){
    let numero1=parseInt(prompt("Ej7:Escribe un número"));
    let numero2=parseInt(prompt("Ej7:Escribe un segundo número"));
    let numero3=parseInt(prompt("Ej7:Escribe un tercer número"));

    if(numero1>numero2){
        //Queda por comparar si numero3 es mayor que el 1
        if(numero1>numero3){
            //El numero 1 es el mayor
            if(numero2>numero3){
                //El orden seria numero1,numero2 y numero3
                console.log("El numero mayor es: "+numero1+","+numero2+","+numero3);
            }else if(numero3>numero2){
                    console.log("El numero mayor es: "+numero1+","+numero2+","+numero3);
                 }else{
                    //El caso que son iguales numero2=numero3
                    console.log("El numero mayor es: "+numero1+","+numero2+"="+numero3);
                 }
        }else if(numero1<numero3){
                //numero1<numero3  
                console.log("El numero mayor es: "+numero3+","+numero1+","+numero2);
            }else{
                //numero1=numero3
                console.log("El numero mayor es: "+numero1+"="+numero3+","+numero2);
            }
    }else if(numero1<numero2){
            //numero2>numero1-->numero2>,¿numero1>numero3?
            if(numero1>numero3){
                console.log("El orden:"+numero2+">"+numero1+">"+numero3)
            }else if(numero3>numero1){
                        console.log("El orden:"+numero2+">"+numero3+">"+numero1)
                    }else{
                        console.log("El orden:"+numero2+">"+numero3+"="+numero1)
                    }
            
          }else{
            console.log("El orden:"+numero2+"="+numero3+"="+numero1)
          }
              
        }
//Funcion que llama a todas las funciones y funciona como el main
function Ejercicio8(){
    let numero1=parseInt(prompt("Ej7:Escribe un número"));
    if(numero1 % 2===0){
        console.log("divisible entre 2")
    }else{
        console.log("No divisible entre 2")
    }
}
function Ejercicio9(){
    let frase=prompt("Escribe una frase");
    let contador=0;

    for(let i=0;i<frase.length;i++){
        //frase.charAt(i)
        if(frase[i].toLowerCase()==='a'){
            contador++;
        }
    }
    document.writeln("El número de aes es: "+contador)
}
function Ejercicio9A(){
    //La misma funcion pero utilizando split
    let frase=prompt("Escribe una frase");
    let contador=frase.split('a').length-1;
}
function Ejercicio9B(){
    //La misma funcion pero utilizando split
    let frase=prompt("Escribe una frase");
    let letra='a';
    let contador=0;
    for(let i=0;i<frase.length;i++){
        if(frase[i].includes(letra)){
            contador++;
        }
    }
    alert(contador);
}
function Ejercicio9C(){
    let frase="Hola que tal";
    let contador=0;

    for(let char of frase){
        if(char.toLowerCase()==='a'){
            contador++;
        }
    }
    document.writeln(contador);
}
function Ejercicio10(){
    let frase=prompt("Escribe una frase");
    let vocales="aeiouAEIOU";
    let vocalesEncontradas="";
    let contador=0;
    
    for(let char of frase){
        if(vocales.includes(char)){
            if(!vocalesEncontradas.includes(char)){
                vocalesEncontradas += char;
            }
            contador++;
        }
    }
    document.writeln("Vocales "+vocalesEncontradas+" Numero vocales encontradas "+contador);
}
function Ejercicio12(){
    let frase=prompt("Escribe una frase");
    let vocales="aeiou";
    let vocalesEncontradas={a:0,e:0,i:0,o:0,u:0};
    
    for(let char of frase){
        if(vocales.includes(char.toLowerCase())){
            vocalesEncontradas[char.toLowerCase()]++;
        }
    }
    document.writeln("Vocales "+JSON.stringify(vocalesEncontradas));
}
function Ejercicio14(){
    let num=parseInt(prompt("Introduce un número"));
    let divisibles = [];
    
    if(num % 2 === 0) divisibles.push("2");
    if(num % 3 === 0) divisibles.push("3");
    if(num % 5 === 0) divisibles.push("5");
    if(num % 7 === 0) divisibles.push("7");

    if(divisibles.length>0){
        document.writeln(divisibles.join(", "));
    }else{
        document.writeln("No es divisible");
    }

}
function EjemploSplit(){
    let frase="Hola que tal estas";
    let palabras=frase.split(" ");
    for(let i=0;i<palabras.length;i++){
        document.writeln(palabras[i]+"<br>");
    }
    let veces=frase.split(" ").length-1;
    document.writeln(veces);
}
function carga(){
    /*Ejercicio1();
    Ejercicio2();
    Ejercicio3();
    Ejercicio4();
    Ejercicio5();
    Ejercicio6();
    Ejercicio7();
    Ejercicio9();
    EjemploSplit();
    Ejercicio9B()
    Ejercicio9C();*/
    Ejercicio14();
}
window.addEventListener("DOMContentLoaded", carga, false);