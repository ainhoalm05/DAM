#include <stdio.h>
#include <stdlib.h>

/*
*
*	Author: Ainhoa Leonor
*
*/

//Declaramos la funcion que efectuara nuestro ejercicio
int main (){
//Declaramos las variables donde se almacenaran los datos que introduzca el usuario
	int num1;
	int num2;
	char operador;

	printf("Elige tu primer numero entero para operar:\n");
	scanf("%d", &num1);
	printf("Elige el siguiente numero entero para operar: \n");
	scanf("%d", &num2);
	printf("Elige que operacion vas a hacer (+, -, *, /):\n");
	scanf(" %c", &operador);

//En este condicional segun el signo qu e eliga el usuario realizaremos una operacion u otra los los valores que tambien nos ha proporcionado el usuario; 
	switch(operador){
		case '+':
			printf("Resultado: %d\n", num1+num2);
			break;
		case '-':
			printf("Resultado: %d\n", num1-num2);
			break;
		case '*':
			printf("Resultado: %d\n", num1*num2);
			break;
		case '/':
			printf("Resultado: %d\n", num1/num2);
			break;
		default:
			printf("Operador no valido");

	}
	
	return 0;
}
