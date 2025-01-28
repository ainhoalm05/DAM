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

	int contador=0;

	for (int i = 2; contador < n; i++){
		int es_primo=1;
		for (int j = 2; j * j <= i ; ++j){//(int j = 2; j * j <= i ; ++j) comprueba la raiz cuadrada
			if ( i % j == 0) {
                es_primo = 0; // No es primo si es divisible por cualquier i
                break;
          }
		}
			
		if (es_primo){
		arr[contador]=i;
		contador++;	
		}
	}

	for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

	

	return 0;
}
