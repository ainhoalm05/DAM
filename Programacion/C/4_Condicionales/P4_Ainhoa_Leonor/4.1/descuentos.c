#include <stdio.h>
#include <stdlib.h>


/*
*
*	Author: Ainhoa Leonor
*
*/

//Declaramos la funcion que efectuara nuestro ejercicio
int main (){
//Declaramos las variables donde guardaremos los datos que definiran nuestros usuarios	
	char pers1;
	int precio;
	int resultado;

//Aqui indicaran los usuarios los datos que se van a guardar en las variables	
	printf("¿Quien eres (Estudiante (E), Profesor(P) u Otro)?\n");
	scanf("%c", &pers1);
	printf("Introduce el total de tu compra:\n");
	scanf("%d", &precio);

//En este condicional dependiendo de los datos que introduzcan los usuarios en las preguntas se efectuara un descuento u otro  
	if (pers1 == 'E'){
		resultado = precio * 0.85;
		printf("El total de tu compra es:%d\n", resultado);

	}else if (pers1 == 'P'){
		resultado = precio * 0.90;
		printf("El total de tu compra es:%d\n", resultado);
	}else{
		printf("No tienes descuento por lo que tu compra es de: %d\n", precio);
	}

	return 0;	
}
