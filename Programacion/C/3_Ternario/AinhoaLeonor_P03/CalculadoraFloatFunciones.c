#include <stdio.h>
#include <stdlib.h>


float suma(float num1, float num2){
	return num1+num2;
}

float resta(float num1, float num2){
	return num1-num2;
}
float multiplicacion(float num1, float num2){
	return num1*num2;
}
float division(float num1, float num2){
	return num1/num2;
}

int main (){

	float num1;
	float num2;

	printf("Dame un nuemero:\n ");
	scanf("%f", &num1);

	printf("Dame un segundo nuemero:\n ");
	scanf("%f", &num2);

	printf("La suma de los dos numeros es: %f\n",suma(num1,num2));
	printf("La resta de los dos numeros es: %f\n",resta(num1,num2));
	printf("La multiplicacion de los dos numeros es: %f\n",multiplicacion(num1,num2));
	printf("La division de los dos numeros es: %f\n",division(num1,num2));

	return 0;
}
