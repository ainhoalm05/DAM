#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	char a;

	printf("Introduce una cadena de caracteres:\n");
	scanf("%s", a);
	int * arr = malloc(a*sizeof(char));
	for (int i=0; i<a; i++){
		printf("arr[%d] = %d\n",i,arr[a]);
	}

	free(arr);

	return 0;
}