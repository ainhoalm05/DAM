#include<stdio.h>
#include<stdlib.h>

/*
 *
 *	Author:Ainhoa Leonor
 *
 */

int main(){
	char str1[8]="iguales";
	char str2[8]="iguales";
	if (str1 == str2){
		printf("son iguales");
	}else{
		printf("Son distintas");//Imprime esto porque no apunta a la misma direccion de memoria
	}
	if (str1 < str2){
		printf("str1 es menor");
	}else{
		printf("str3 es menor");//Imprime esto porque no apunta a la misma direccion de memoria
	}

	//Compara caracter
	
	for(int i=0; i<8; i++){
		if(str1[i] == str2[i]){}
			printf("%c", str[i]);
	}

	
		return 0;	
}
