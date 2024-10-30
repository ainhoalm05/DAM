#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	char str1[5] ;
	printf ("Introduce una palabra\n");
	scanf("%s", str1);//No hace falta poner el & porque la variable marca la direcion de memoria en la que empieza por lo que ya no necesitamos saber nada mas
	printf("%s\n",str1);
	return 0;
}
