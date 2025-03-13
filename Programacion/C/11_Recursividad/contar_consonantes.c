#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int contar(char * p, int longitud, int n){

if (n==longitud-1){
	return 0 ;
}

if(p[n]!='a'&&p[n]!='e'&&p[n]!='i'&&p[n]!='o'&&p[n]!='u'){
	return contar(p,longitud,n+1)+1;
}else{
	return contar(p,longitud,n+1);
}
}

int main (){
	char palabra[20];
	printf("Introduce una cadena de caracteres: ");
	scanf("%s", palabra);
	printf("%d", contar(palabra,strlen(palabra),0));


	return 0;
}
