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

	double * arr=(double *)malloc(sizeof(double)*n);

	for (int i = 0; i < n; i++){
		arr[i]=1.0 / (i+1);
		printf("%f\n", arr[i]);
	}

	return 0;
}
