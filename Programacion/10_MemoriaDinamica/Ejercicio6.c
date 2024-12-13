#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	int a;

	printf("¿Elige el tamaño del arreglo?\n");
	scanf("%d", &a);
	int * arr = malloc(a*sizeof(int));
	for (int i=0; i<a; i++){
		int valor;
		printf("Añade el valor\n");
		scanf("%d", &valor);
		printf("arr[%d] = %d\n",i,valor);
	}

	free(arr);

	return 0;
}