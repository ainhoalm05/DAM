#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	char str1[4] = "hola";
	printf("%s\n", str1);
	printf("%c\n", str1[3]);
	//str1[2] = '\0';
	//printf("%d\n",str1[4]);
	str1[4] = '$';
	printf("%s\n", str1);
	return 0;
}
