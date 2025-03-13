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
	do{	
		scanf("%d",&numero);
	break;
	}
	while(numero<1||numero>10){
		printf("Números no válidos.\n");
			}
	
	
	
	printf("Has ingresado el número %d.\n", numero);
	return 0;
}
