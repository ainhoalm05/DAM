#include <stdio.h>
/*
 *
 * 	Author: Ainhoa Leonor
 *
 */

int main(){

	int opcion; //No es necesario inicializarla porque el primer uso de la variable es de escritura
	do {	    //En caso de que no pongamos el do tendremos que inicializar la variable porque su primer uso sera de lectura
	printf("Elige una opcion");
	scanf("%d", &opcion);
	}	
	while (opcion != 4){
		printf("Has elegido algo distinto de 4");
		return 0;		
		}

}
