#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main (){
	int tamaño;
	printf("Tamaño: ");
	scanf("%d", &tamaño);

	int * arr1=(int *)malloc(sizeof(int)*tamaño);
	int * arr2=(int *)malloc(sizeof(int)*tamaño);

	for(int i = 1 ; i <= tamaño ; i++){
		arr1[i]=i*3;
		printf("Array1: %d \n", arr1[i]);
		
	}
	for(int i = 1 ; i <= tamaño ; i++){
		arr2[i]=i*2;
		printf("Array2: %d \n", arr2[i]);
	}

	int operacion;
	printf("Sumar(1) o Concatenar(2): ");
	scanf("%d", &operacion);

	if (operacion==1){
		for(int i = 1 ; i <= tamaño ; i++){
			int suma=arr1[i]+arr2[i];
			printf("%d ",suma);
		}
	}else if(operacion==2){
		double * arr_concatenado=(double *)malloc(sizeof(double)*(tamaño*2));
		for (int i = 1; i <= tamaño; i++){
			arr_concatenado[i]=arr1[i];
		}
		for (int i = 1; i <= tamaño; i++){
			arr_concatenado[tamaño + i]=arr2[i];
		}
		for (int i = 1; i <= tamaño *2 ; i++){
			printf("%lf ", arr_concatenado[i]);
		}
	}


	return 0;
}
