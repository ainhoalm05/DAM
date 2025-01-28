#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int numero;
	int resto=0;
	int sumar;
	printf("Introduce un numero:\n");
	scanf("%d", &numero);
	while(numero != 0){
		resto += numero % 10 ;

		numero = numero/10;
		sumar = resto;
	}
	printf("la suma de los digitos es:%d\n ", resto);

	return 0;
	

}
