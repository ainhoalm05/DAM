#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
int tamano;
float * arr;

printf("Indica el tamaño del array: ");
scanf("%d", &tamano);

arr=(float *)malloc(sizeof(float)*tamano);

for(int i=0; i<tamano; i++){
	
	arr[i]=(float) i/tamano;
}
for(int i=0; i<tamano; i++){
	printf("%.2f \n",arr[i]);
}

arr=(float *)realloc(arr,sizeof(float)*(tamano/2));


for(int i=0; i<tamano/2; i++){
	printf("%.2f \n",arr[i]);
}

free(arr);
	return 0;
}