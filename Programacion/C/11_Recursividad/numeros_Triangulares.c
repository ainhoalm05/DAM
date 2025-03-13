#include <stdio.h>
#include <stdlib.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int numerosTriangulares(int n){
    
    if(n==0){
       return 0;
        }else{
            return n+numerosTriangulares(n-1);
        }
    }

int main (){
    int num;
    scanf("%d",&num);
    printf("%d", numerosTriangulares(num));
	return 0;
}

