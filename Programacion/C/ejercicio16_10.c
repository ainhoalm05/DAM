#include <stdio.h>
#include <stdlib.h>


/*
 *
 *	Author: Ainhoa Leonor
 *
 */

//Esta funcion esta basada en la tabla ASCII, las condiciones estan referidas a los rangos de la letras en la tabla ASCII.
int es_mayuscula(char letra){
	if (letra >=65 && letra<=90){
		return 1;
	}else if (letra>=90 && letra<=122){
		return 0;
	}
}

//Tras una ardua investigacion he llegado a la conclusion de que la mejor forma de hacerlo siguiendo los criterios del 
//ejercicio, es hacer una funcion dentro de otra.
//
//Aun asi hay otra forma de hacerlo, que seria añadiendo la libreria math y utilizar pow, pero como no cumple los requisitos del enunciado, he investigado otra forma.
//
//La primera funcion se encargara de declarar la variable y pedirle los datos al usuario, la siguiente sera la que operara con esos datos.
void calcular_factorial(){

	int num_factorial;
 	printf("Introduce un numero positivo: \n");
	scanf("%d", &num_factorial);
//Funcion recursiva
  int factorial_recursivo(int n) {
        if (n == 0 || n == 1) {
            return 1; 
        } else {
            return n * factorial_recursivo(n - 1); // Llamada recursiva de la funcion
        }
    }
   
    printf("El factorial de %d es %d.\n", num_factorial, factorial_recursivo(num_factorial));	
	
}
//En esta funcion compararemos dos numeros que introducira el usuario y como hay dos condiciones lo hare de la siguiente forma
int encontrar_maximo(int num1, int num2){

	return (num1 > num2) ? printf("El maximo entre %d y %d es %d \n",num1, num2, num1) : printf("El maximo entre %d y %d es %d \n",num1, num2, num2);
}
//Esta funcion se podria hacer mas compleja pero en mi caso solo voy a declarar los Celsius y lo igualare a la formula del paso a Fahrenheit.
double convertir_celsius_a_fahrenheit(double celsius){
	return celsius = (celsius*1.8)+32;
}
//Este ejercicio lo realizare cambiando el orden de las variables introducidas en el ultimo printf
void intercambiar_numeros(){
	int num1_intercambiar, num2_intercambiar;

	printf("Introdice el primer numero: \n");
	scanf("%d", &num1_intercambiar);
	printf("Introdice el segundo numero: \n");
	scanf("%d", &num2_intercambiar);
	printf ("Despues de intercambiar, el primer numero es %d, el segundo numero es %d \n", num2_intercambiar, num1_intercambiar);
}
//Para este ejercicio tambien habia que hacer una funcion recursiva, asi que lo que he hecho ha sido operar como siempre pero sobre la funcion
double calcular_potencia(double base, int exponente){
	if (exponente == 0){
	 return 1;//Siempre que se eleve a 0 el resultado sera 1
	}else if (exponente > 0 ){
		return base * calcular_potencia(base, exponente - 1);//Aqui le restamos 1 porque como la estamos llamando de forma recursiva, tenemos que hacer que en algun momento llegue a 0 para que no entre en un bucle
		}else{
			return 1 / calcular_potencia(base, -exponente);//Este ultimo caso es por si el exponente es negativo
		}	
}

int main (){
	int decision;

	printf ("Selecciona una opción:\n\
			1. Verificar si un carácter es mayúscula.\n\
			2. Calcular el factorial de un número.\n\
			3. Encontrar el máximo de dos números.\n\
			4. Convertir grados Celsius a Fahrenheit.\n\
			5. Intercambiar dos números.\n\
			6. Calcular la potencia de un número.\n\
			7. Salir.\n");


	scanf("%d", &decision);

	switch (decision){
		case 1:
			char letra_main;

			printf("Introduce un caracter: \n");
			scanf(" %c", &letra_main);

			if (es_mayuscula(letra_main)==1){
				printf("Es mayuscula\n");
			} else if (es_mayuscula(letra_main)==0){
				printf("Es minusulas\n");
			}else{
			printf("ERES BOBO\n");
			}
			break;

		case 2:
			calcular_factorial();
			break;

		case 3:
			int num1_main,num2_main;
			printf("Introduce el primer numero:\n ");
			scanf("%d", &num1_main);
			printf("Introduce el segundo numero:\n ");
			scanf("%d", &num2_main);
			encontrar_maximo(num1_main,num2_main);
			break;

		case 4:
			double celsius_main;
			printf ("Introduce la temperatura en Celsius: \n");
			scanf ("%lf", &celsius_main);
			printf("La temperatura en Fahrenheit es %lf \n", convertir_celsius_a_fahrenheit(celsius_main));
	
			break;
		case 5:
		intercambiar_numeros();
			break;

		case 6:
		double base_main;
		int exponente_main;
		printf ("Introduce la base: \n");
		scanf ("%lf", &base_main);
		printf ("Introduce el exponente: \n");
		scanf ("%d", &exponente_main);
		printf("%.2lf elevado a la %d es %.2lf \n", base_main, exponente_main, calcular_potencia(base_main,exponente_main));
			break;
		
		case 7:
		printf("Saliendo del menu... \n");
			break;

		default:
			printf("ERROR (introduce un numero de 1 al 7)");//Esta opcion es por si se mete algo distinto a lo que se pide
			break;


	}
	return 0;
}

