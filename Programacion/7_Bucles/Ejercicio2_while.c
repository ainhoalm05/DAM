#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int numero;
	int resto;
	int sumar;
	printf("Introduce un numero:\n");
	scanf("%d", &numero);
	while(numero != 0){
		resto += numero % 10 ;
		sumar = resto;
		numero = numero/10;
	}
	printf("la suma de los digitos es:%d\n ", sumar+numero);
	return 0;
	

}
