#include <stdio.h>
#include <stdlib.h>

/*
*
*	Author: Ainhoa Leonor
*
*/

//Declaramos la funcion que efectuara nuestro ejercicio
int main (){
//Creamo las variables que almacenaran los datos que introduzcan los usuarios
	int edad;
	printf("¿Qué edad tienes? (indicalo con numeros):");
	scanf("%d", &edad);

//Este condicional funcionara cojiendo el dato que ha introducido el usuario e ira recorriendo todas las condiciones para saber cual se cumple
	if (edad < 12){
		printf("Eres un niño\n");
	}else if(edad < 18){
		printf ("Eres un adolescente\n");
	}else if(edad < 65){
		printf("Eres un adulto\n");
	}else{
		printf ("Eres mayor\n");
	}

	return 0;
}
