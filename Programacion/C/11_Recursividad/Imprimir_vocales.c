#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int imprimirVocales(char * palabra){
// CASO BASE    
// if(*palabra=='\0'){
//   return ;
// }
char letra=tolower(*palabra);
if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'){
    printf("%c", *palabra);
    imprimirVocales(palabra+1);
}
    }

int main (){
    char * palabra = "murcielago";
    scanf("%s",palabra);
    printf(imprimirVocales(palabra));
	return 0;
}

