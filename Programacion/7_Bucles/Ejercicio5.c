#include <stdio.h>
/*
 *
 *	Author: Ainhoa Leonor
 *
 */


int main() {
	int n;
	int factorial = 1;

	printf("Introduce un número positivo: ");
	scanf("%d", &n);

	if (n < 0) {
		printf("El nunero no puede ser negativo.\n");
	} else {
		for (int i = 1; i <= n; i++) {
			factorial *= i;
	}
	printf("El factorial de %d es %d\n", n, factorial);
	}

	return 0;
}
