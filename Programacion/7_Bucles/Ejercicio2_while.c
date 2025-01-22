#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int numero;
<<<<<<< HEAD
	int sumar=0;
	printf("Introduce un numero:\n");
	scanf("%d", &numero);
	while(numero >0){
		sumar += numero % 10 ;
=======
	int resto=0;
	int sumar;
	printf("Introduce un numero:\n");
	scanf("%d", &numero);
	while(numero != 0){
		resto += numero % 10 ;
>>>>>>> 4152211 (Ejercicios LM)
		numero = numero/10;
		sumar = resto;
	}
<<<<<<< HEAD
	printf("la suma de los digitos es:%d\n ", sumar);
=======
	printf("la suma de los digitos es:%d\n ", resto);
>>>>>>> 4152211 (Ejercicios LM)
	return 0;
	

}
