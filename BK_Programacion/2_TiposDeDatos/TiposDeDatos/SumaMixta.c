#include <stdio.h>
#include <stdlib.h>

int main (){
	int num1;
	int num2;

	float resultado_suma;
	float resultado_resta;
	float resultado_multiplicacion;
	float resultado_division;

	printf("Dame un numero entero: ");
	scanf("%d", &num1);
	printf("Dame otro numero entero: ");
	scanf("%d", &num2);

	resultado_suma=num1+num2;
	resultado_resta=num1-num2;
	resultado_multiplicacion=num1*num2;
	resultado_division=num1/num2;

	printf("La suma de los dos numero es de%.2f\n",resultado_suma);
	printf("La resta de los dos numero es de: %.2f\n",resultado_resta);
	printf("La multiplicacion de los dos numero es de: %.2f\n",resultado_multiplicacion);
	printf("La division de los dos numero es de: %.2f\n",resultado_division);
	
	
	
	return 0;
}
