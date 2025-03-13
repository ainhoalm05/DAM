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
	
	scanf("%d", &numero);

	if(numero<0){
		printf("El número %d es negativo.\n", numero);
	}else if(numero == 0){
		printf("El número %d es cero.\n", numero);
	}else if(numero > 0){
		printf("El número %d es positivo.\n", numero);
	}
	return 0;
}
