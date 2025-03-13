#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */

int main() {
	int n;
	int suma = 0;

	printf("Introduce un número positivo: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		suma += i;
	}

	printf("La suma de los números de 1 a %d es %d\n", n, suma);
	return 0;
}
