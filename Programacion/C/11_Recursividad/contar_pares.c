#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int contarPares(int numero){
    if(numero/10<=0){
        return numero%10+contarPares(numero/10);

        if (numrero%10==0)
        {
            return (contarPares())
        }
    }
}

int main (){
    int numero;
    scanf("%d",&numero);
    printf(contarPares(numero));
	return 0;
}

