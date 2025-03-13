#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main(){
	const int LIMITE=100; //Definir una constante
	int * trampa=&LIMITE;
	printf("El valor de LIMITE es :%d\n", LIMITE);

	*trampa=200;
	printf("El valor de LIMITE es :%d\n", LIMITE);
	return 0;
}