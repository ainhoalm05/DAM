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
	printf("Tamaño del array: ");
	scanf("%d", &n);

	int * arr1=(int *)malloc(sizeof(int)*n);
	if (arr1==NULL)	{
		printf("ERROR DE MEMORIA\n");
		return EXIT_SUCCESS;
	}
	int * arr2=(int *)malloc(sizeof(int)*n);
	if (arr2==NULL)	{
		printf("ERROR DE MEMORIA\n");
		return EXIT_SUCCESS;
	}

	for(int i = 0 ; i < n ; i++){
		arr1[i]=i*3;
		printf("Array1: %d \n", arr1[i]);
		
	}
	for(int i = 0 ; i < n ; i++){
		arr2[i]=i*2;
		printf("Array2: %d \n", arr2[i]);
	}

	int operacion;
	printf("Sumar(1) o Concatenar(2): ");
	scanf("%d", &operacion);

	if (operacion==1){
		for(int i = 0 ; i < n ; i++){
			int suma=arr1[i]+arr2[i];
			printf("%d ",suma);
		}
	}else if(operacion==2){
		int * arr_concatenado=(int *)malloc(sizeof(int)*(n*2));
		for (int i = 0; i < n; i++){
			arr_concatenado[i]=arr1[i];
		}
		for (int i = 0; i < n; i++){
			arr_concatenado[n + i]=arr2[i];
		}
		for (int i = 0; i < n *2 ; i++){
			printf("%d ", arr_concatenado[i]);
		}
		free(arr_concatenado);
	}



	free(arr1);
	free(arr2);

	return 0;
}
