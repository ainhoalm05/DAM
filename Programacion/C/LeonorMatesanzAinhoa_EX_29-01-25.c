#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */
void modificar_elemento(int valor){
	valor+=10;
	printf("Paso por valor: %d \n", valor);
}
void modificar_por_referencia(int * valor){
	*valor+=10;
	printf("Paso por referencia: %d \n", *valor);
}


int main (){

	int n;
	printf("Tamaño: ");
	scanf("%d", &n);

	int * arr=(int *)malloc(sizeof(int)*n);
	if (arr == NULL){
		printf("Te has salido de la memoria");
		free(arr);
	}

	for(int i = 0 ; i < n ; i++){
		int num;
		printf("Valores: ");
		scanf("%d", &num);

		arr[i]=num;
	}

	modificar_elemento(n - 1);
	modificar_por_referencia(&arr[n-1]);

	free(arr);
	return 0;
}
/////////////
//PREGUNTAS//
/////////////
/*
*
*Ejercicio 1
*Lo que pasa es que el paso por valor imprime 13 porque le estamos pasando lo que seria literalmente 
* Si n = 4           Le estariamos pasando literalmente un 4 - 1 = 3
*Entonces esto en la funcion lo que hace es 3 + 10 = 13, de ahi la salida que nos da.
*La otra salida que nos da es 11, que es la salida en la que se lo pasamos como referencia, lo que significa
*que realmente lo que le estamos pasando es el valor que hay en la ultima posicion del array
*en mi caso introduje los numeros 5 - 3 - 27 - 1, asi que en este caso le estamos pasando el 1 y la funcion hace 10 + 1 = 11
*
*Ejercicio 2
*Los datos de tipo double hablando de memoria ocupan 8 bits (ya que es el doble que un int (que ocupa 4))
*Por lo tanto lo que habria que hacer para calcularlo con un sizeof: sizeof(double(ya sabe que ocupa 8)*n)
*
*/
