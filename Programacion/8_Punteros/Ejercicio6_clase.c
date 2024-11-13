#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int incrementar(*n1,*n2){
int num1=n1; 

 *n2=n1;

}

int main (){
	int n1=10;
	int n2=20;
	incrementar(&n1,&n2);
	printf("%d\n",n1);
	printf("%d\n",n2);
	return 0;
}
