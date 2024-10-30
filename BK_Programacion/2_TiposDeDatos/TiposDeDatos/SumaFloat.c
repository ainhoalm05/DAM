#include <stdio.h>
#include <stdlib.h>

int main (){
	float num1;
	float num2;
	printf("Dame un numero entero: ");
	scanf("%f", &num1);
	printf("Dame otro numero entero: ");
	scanf("%f", &num2);
	printf("La suma de los dos numero es de: %.2f\n",num1+num2);
	printf("La resta de los dos numero es de: %.2f\n",num1-num2);
	printf("La multiplicacion de los dos numero es de: %.2f\n",num1*num2);
	printf("La division de los dos numero es de: %.2f\n",num1/num2);
	
	
	
	return 0;

}
