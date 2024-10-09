#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*
 *
 *	 Author: Ainhoa Leonor
 *	
 */



void es_vocal(char letra){
	if (letra=='a' || letra=='A' ||letra=='e' || letra=='E' || letra=='i' || letra=='I' || letra=='o' || letra=='O' || letra=='u' || letra=='U'){

		printf("la letra %c es una vocal\n",letra);
	}else{
		printf("La letra %c no es una vocal\n",letra);
	};
	return ;
}

void calcular_area_figura(){
	float figura;
	printf("¿Qué figura deseas calcular? (círculo=1, Cuadrado=2)\n");
	scanf("%f",&figura);

	if (figura==1){
		float radio;
		printf("Introduce el radio del círculo\n");
		scanf("%f",&radio);
		printf("El área de tu círculo de radio %f es %f\n",radio,M_PI*radio*radio);
	}else if(figura==2){
		float lado;
		printf("Introduce el lado del cuadrado\n");
		scanf("%f",&lado);
		printf("el área del cuadrado de lado %f es %f\n",lado,lado*lado);
	}else{printf("Error\n");
	}
}

void calcular_promedio(){
	float eleccion;
	double num1;//inicializamos las variables que contienen los números
	double num2;
	double num3;
	double num4;
	printf("Cuantos numeros quieres promediar 3 o 4: \n")
	scanf("%f", &eleccion);

	if (eleccion==3){//en el caso de que sean tres números les asignamos valor y llamamos a la función correspondiente
	printf("Introduce el primer número\n");
	scanf("%lf",&num1);
	printf("Introduce el segundo número\n");
	scanf("%lf",&num2);
	printf("Introduce el tercer número\n");
	scanf("%lf",&num3);
	calcular_promedio_tres_num(num1,num2,num3);
	
	}else if (eleccion==4){//asignamos valor a los 4 números y llamamos a la función correspondiente
	printf("Introduce el primer número\n");
	scanf("%lf",&num1);

	printf("Introduce el segundo número\n");
	scanf("%lf",&num2);

	printf("Introduce el tercer número\n");
	scanf("%lf",&num3);
	
	printf("Introduce el cuarto número\n");
	scanf("%lf",&num4);
double calcular_promedio_cuatro_num(num1,num2,num3,num4);

	}else{
	printf("Error\n");
	}
		return ;
	}
	
double calcular_promedio_tres_num(double num1,double num2,double num3){
	double resultado =(num1+num2+num3);
	resultado =(resultado/3);	
		return printf("El promedio de %lf,%lf y %lf es %lf",num1,num2,num3,resultado);
	}

double calcular_promedio_cuatro_num(double num1,double num2,double num3,double num4){

		return 1;
	}
	void convertir_hora_24_12(){


		return ;
	}
	void es_primo(){


		return ;
	}
	void comparar_3_numeros(){

		return ;
	}



	int main() {
		int decision;

		printf("Selecciona una función\n");
		printf("1. Verificar si una letra es una vocal\n");
		printf("2. Calcular el área de una figura (círculo o cuadrado)\n");
		printf("3. Calcular el promedio de 3 o 4 números\n");
		printf("4. Convertir una hora en formato de 24 horas a 12 horas\n");
		printf("5. Verificar si un número menor de 10 es primo\n");
		printf("6. Comparar tres números\n");
		printf("7. Salir\n");

		scanf("%d",&decision);

		switch (decision){
			case 1:	
				char letra_main;
				printf("Indroduce una letra\n");
				scanf(" %c",&letra_main);
				es_vocal(letra_main);
				break;

			case 2:
			calcular_area_figura();
				break;

			case 3:
			calcular_promedio();
				break;

			case 4:

				break;

			case 5:

				break;

			case 6:

				break;

			case 7:

				break;
			default:
				printf("Error");
		}
return 0;
}
