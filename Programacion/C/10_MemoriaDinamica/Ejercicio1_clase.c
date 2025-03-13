#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	int * p_error = malloc(sizeof(int));
	//Mala practica

	int *p = (int *)malloc(sizeof(int));
	//Buena practica

	

	*p=42;//Usamos la memoria
	printf("El valor es: %d\n", *p);
	free(p);
	free(p_error);

	return 0;
}