#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int r;

	//srand(10) ->(Esto repite el mismo numero 4 veces)(esto provocaria que se 
	//calculara siempre el mismo numero aleatorio)
	//Cambia la semilla para cambiar la secuencia
	srand(time(NULL));//Cambia cada segundo
	srand(getpid());//Identificador de proceso

	for (int i = 0;i < 4;i++){
		r = (rand() % 5) + 1;//Hacer modulo de 8 de numeros aleatorios entre el 0 y 7
		printf("%d\n", r);
	}
	
	return 0;

}

/*
 *Haz una funcion que calcule un numero aleatorio entre dos valore dados como algumento.
 *
 *	Author: Ainhoa Leonor
 *
 */

int main (){

	int r;

	srand(time(NULL));//Cambia cada segundo
	srand(getpid());//Identificador de proceso

	for (int i = 0;i < 4;i++){
		r = (rand() % 5) + 1;//Hacer modulo de 8 de numeros aleatorios entre el 0 y 7
		printf("%d\n", r);
	}
	
	return 0;

