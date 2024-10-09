#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * Author: Ainhoa Leonor
 *
 */

//Declaramos la funcion que efectuara nuestro ejercicio
int main (){
//Declaramos la variable que almacenara los datos que introduzca el usuario
	int nota;


	printf("¿Que nota has sacado (0-10)?: \n");
	scanf("%d",&nota);
//Con esta forma de condicional indicaremos que si el dato que ha introducido 
	nota = (nota >= 5) ? printf("Resultado: Aprobado\n") : printf("Resultado: Suspenso\n");
		
	return 0;
}
