#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

void incrementar(int n){
	printf("Valor recibido: %d\n", n);
	n++;
	printf("Valor incrementado en la funcion: %d\n", n);
}

int main (){
	int valor =10;
	incrementar(valor); //le doy el valor 10
	printf("Valor: %d\n", valor);

	return 0;
}
