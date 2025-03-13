#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

void incrementar(int *n1,int *n2){ 
	int temp=*n1; //Esto es una variable temporal para guardar el valor de n1.
	*n1=*n2;//Le pasamos el valor el valor de n1 a n2.
	*n2=temp;//n2 pasa a tener el valor de n1 que guardamos en la variable temporal.

}

int main (){
	int n1=10;
	int n2=20;
	incrementar(&n1,&n2);
	printf("%d\n",n1);
	printf("%d\n",n2);
	return 0;
}
