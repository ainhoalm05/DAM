#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int calcularRaiz(){

	double raiz;
	int valor;

	printf("Introduzca un número para calcular su raiz \n");
	scanf("%d", &valor);
	raiz = sqrt(valor);
	printf("La raiz cuadrada de %d es %.2lf\n",valor,raiz);


}

int main(){

	
	double radio,area;

	calcularRaiz();

	printf ("Introduzca el radio del circulo para calcular su area\n");
	scanf("%lf",&radio);
	area = radio * radio * M_PI;
	printf("El area del circulo: %.2lf\n",area);

	return 0;


}
