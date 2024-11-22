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

	scanf("%d",&numero);

	numero = (numero % 2 == 0) ? printf("El número %d es par.\n", numero) : printf("El número %d es impar.\n",numero);

	return 0;
}
