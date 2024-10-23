#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main() {
	int n;
       	int contador = 0;

	printf("Introduce un número positivo: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			contador++;
		}
	}

	printf("El número %d tiene %d divisores.\n", n, contador);
	return 0;
}
