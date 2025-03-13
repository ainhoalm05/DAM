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
	int suma=0;

	scanf("%d", &n);

	for (int i=1;i<=n;i++){
		suma+=i;
	}

	printf("La suma de los primeros %d números es %d.\n", n,suma);
	return 0;
}
