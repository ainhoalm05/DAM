#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int numero;
	int digito;
	int sumar;
	printf("Introduce un numero:\n");
	scanf("%d", &numero);
	while(numero != 0){
		digito = digito * 10 + (numero % 10) ;
		sumar = digito;
		numero = numero/10;
	}
	printf("la suma de los digitos es:%d\n ", sumar+numero);
	return 0;
	

}
