#include <stdio.h>
#include <stdlib.h>

/*
*
*	Author: Ainhoa Leonor
*
*/


//Declaramos la funcion donde se ejecutara nuestro ejercicio
int main (){
//Declaramos la variable donde se almacenara el numero que indique el usuario
	int num;

	printf("Escribe un numero entero\n");
	scanf("%d", &num);
//En este condicional le diremos que si el modulo de 2 es = 0 (falso, pasara a la siguiente condicion) y si es = 1 (verdadero, se quedara en la primera condicion).
//Lo que significa que si num/2= 0 es un numero par y si num/2= 1 es un numero impar. 
	if (num % 2  ){
		printf("Tu numero es impar\n");
	}else{
		printf("Tu numero es par\n");
	}

	return 0;

}
