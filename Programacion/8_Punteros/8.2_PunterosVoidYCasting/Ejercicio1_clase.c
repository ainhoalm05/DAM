#include <stdio.h>
#include <stdlib.h>

/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

void printValor(void *ptr, char tipo){
	switch 'd':
		printf("Double %lf\n", *(double *)ptr);//cambia el tipo de variable de ptr de void a double
		break:
	case 'i':
		printf("Entero: %d\n", *(int *)ptr);
		break:
	default:
		printf("Error");

}


int main (){
	double num = 2.1;

	void *dir= &num;
	printValor(dir,'d');
	printValor(dir,'i');
	

	return 0;
}
