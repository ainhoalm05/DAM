#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int numero;
	int sumar=0;
	printf("Introduce un numero:\n");
	scanf("%d", &numero);
	while(numero >0){
		sumar += numero % 10 ;
		numero = numero/10;
	}
	printf("la suma de los digitos es:%d\n ", sumar);
	return 0;
	

}
