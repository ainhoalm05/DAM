#include <stdio.h>
#include <stdlib.h>

/*
*
*	Author: Ainhoa Leonor
*
*/

//Declaramos la funcion que efectuara nuestro ejercicio
int main (){
//Declaramos la variable donde se almacenaran los datos que introduzca el usuario
	int num;
	
	printf("Elige un numero:\n");
	scanf("%d", &num);
	
//En este condicional indicaremos el dia de la semana segun el numero que indique el usuario y lo colocaremos en orden; 
//es decir el 1 es lunes, el 2 es martes, el 3 miercoles... 
	switch(num){
		case 1:
			printf("Resultado: Lunes\n");
			break;
		case 2:
			printf("Resultado: Martes\n");
			break;
		case 3:
			printf("Resultado: Miercoles\n");
			break;
		case 4:
			printf("Resultado: Jueves\n");
			break;
		case 5:
			printf("Resultado: Viernes\n");
			break;
		case 6:
			printf("Resultado: Sabado\n");
			break;
		case 7:
			printf("Resultado: Domingo\n");
			break;
		default:
			printf("Numero invalido\n");

	}
	
	return 0;
}
