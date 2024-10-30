#include <stdio.h>
/*
 *
 *	Athor: Ainhoa Leonor
 *
 */
int main() {
	int n = 10;
	int t1 = 0, t2 = 1, siguiente;

	printf("Serie de Fibonacci:\n");

	for (int i = 1; i <= n; i++) {
		printf("%d\n", t1);
		siguiente = t1 + t2;
		t1 = t2;
		t2 = siguiente;
	}

	return 0;
}
