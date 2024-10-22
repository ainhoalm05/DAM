#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	char str1[20];
	int posicion;
	char caracter;

	printf("Introduce una palabra\n");
	scanf(" %s", str1);
	printf("Elige una posicion\n");
	scanf(" %d", &posicion);
	printf("Elige un caracter\n");
	scanf(" %c", &caracter);
	
	str1[posicion-1] = caracter;

	printf("Tu nueva palabra es:%s\n", str1);

	return 0;
}
