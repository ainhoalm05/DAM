#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main (){
	int numero;
	int suma;


	while(numero>=0){
		scanf("%d",&numero);
		suma+=numero;
	}
	printf("La suma de los números ingresados es %d.\n", suma);
	return 0;
}
