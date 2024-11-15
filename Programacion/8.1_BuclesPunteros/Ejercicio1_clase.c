#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main (){
	int arr[5]={6,7,5,4,3};
	int elementos = sizeof(arr)/sizeof(int);
	
	//Recorrer el array y sumarlo
	for(int *p = arr; p <= &arr[elementos-1]; p++){
		printf("%d\n", *p);
	}

	printf("Sideof arr: %ld\n", sizeof(arr));//Devuelve 20 porque multiplica los bytes por los espacios que tenga el array
	printf("Sideof int: %ld\n", sizeof(int));//Devuelve 4 porque son los bytes
	printf("Elementos del array: %ld\n", sizeof(arr)/sizeof(int));
	

	char palabra[10]="gratis";
	for(char *l=palabra; *l != '\0';l++){
		printf("%c", *l);
	}
	return 0;
}
