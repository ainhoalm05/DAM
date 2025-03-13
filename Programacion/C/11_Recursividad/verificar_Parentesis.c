#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int profundidad(char * cadena, int balance){//ini y fin son posiciones de array
    static int prof_max=0;
    if(*cadena=='\0'){
        return prof_max;
    }
    if(balance > prof_max){
        prof_max=balance;
    }
    if (*cadena=='('){
        
        return profundidad(cadena+1, balance+1);
    }else if(*cadena==')'){
        return profundidad(cadena+1, balance-1);
    }else{
        return profundidad(cadena+1, balance);
    }
}

int main (){
        char cadena[20]="(((())))";
        printf("%d\n", profundidad(cadena,0));

	return 0;
}

