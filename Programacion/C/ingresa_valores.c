#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main (){
	int n;
	printf("Tamaño: ");
	scanf("%d", &n);

	int * arr=(int *)malloc(sizeof(int)*n);

	for(int i = 0 ; i < n ; i++){
		int valores;
		printf("Valores: ");
		scanf("%d", &valores);

		arr[i]=valores;
	}
	for (int i = 0; i < n; i++){
		printf("Array[%d]: %d\n",i,arr[i]);

	}

	return 0;
}
