#include <stdio.h>
#include <stdlib.h>

char capitalizar(char letra_minuscula){
	return letra_minuscula-32;
}

int main (){
	char letra_minuscula;

	printf("Introduce una letra en minusculas: ");
	scanf("%c", &letra_minuscula);
	printf("Letra en mayusculas: %c\n",capitalizar(letra_minuscula));
	return 0;
}
