#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main() {
	    int n;

	        printf("Introduce el tamaño que quieres que tenga el cuadrado: ");
		    scanf("%d", &n);

	    for (int i = 0; i < n; i++) {
	    for (int j = 0; j < n; j++) {
		printf("* ");
		}
		printf("\n");
		}
  	    return 0;
	}
