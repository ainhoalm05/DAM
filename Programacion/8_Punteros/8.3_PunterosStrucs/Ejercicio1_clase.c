#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */
#define MAX_NOMBRE 20
#define MAX_ESTUDIANTES 20
typedef struct {
	char nombre[MAX_NOMBRE];
	int edad;
	float nota;

}estudiante;
/*
   Estudiante * inicializar(char *nombre, int edad, float nota){
   Estudiante * estudiante_nuevo = malloc();//Reserva ed memoria dinamica

   return &estudiante_nuevo;
   }
   */
void inicializar(estudiante * estudiante_a_rellenar, char * nombre, int edad, float nota){
	//El operador -> se utiliza para acceder al contenido de un puntero que este caso es estudiante_a_rellenar
	estudiante_a_rellenar->edad=edad;
	estudiante_a_rellenar->nota=nota;
	strcpy(estudiante_a_rellenar->nombre,nombre);
	//estudiante_a_rellenar.nombre=nombre no funciona porque se estan intentando comparar
	//dos direcciones de memoria porque es una variable de tipo puntero

}
void cumpleanios(estudiante * cumpleanero){
	cumpleanero->edad++;
}
int main (){
	estudiante listado[MAX_ESTUDIANTES];//Aqui se reserva la memoria para los estudiantes

	int num_estudiantes;

	int edad;
	float nota;
	char nombre[MAX_NOMBRE];


	printf("%p\n", listado);
	printf("Sizeof listado: %lu\n",sizeof(listado));
	printf("Sizeof estudiante: %lu\n",sizeof(estudiante));

	for(int i=0;i < num_estudiantes; i++){
		printf("¿Cuantos estudiantes desea inicializar?");
		scanf("%d", &num_estudiantes);
		printf("Introduce la edad");
		scanf("%d", &edad);
		printf("Introduce la nota");
		scanf("%f", &nota);
		printf("Introduce tu nombre:");
		scanf("%s",nombre);

		inicializar(listado+i,nombre,edad,nota);//=inicializar(&listado[i],nombre,edad,nota)
	}
//El estudiante de la primera posicion ha cumplido años
printf("Edad antigua de %s: %d\n",listado[0].nombre,listado[0].edad);
cumpleanios(&listado[0]);
printf("Edad nueva: %d\n",listado[0].edad);

	return 0;
}


