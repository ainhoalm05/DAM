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
#define MAX_BUFFER 200
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

/*Funcion para imprimir un estudiante*/
void imprimirEstudiante(const estudiante * estudiante_a_imprimir){
printf("Nombre: %s\n", estudiante_a_imprimir->nombre);
printf("\tEdad: %d\n", estudiante_a_imprimir->edad);
printf("\tNota: %f\n", estudiante_a_imprimir->nota);

}
//Imprimir un estudiante
char estudianteToString_warning(const estudiante * datos){
	char retval[MAX_BUFFER];//El valor que devuelve la funcion
	// snprintf (donde, cuanto, el que [lo que harias con un printf])
	snprintf(retval,MAX_BUFFER,"El estudiante %d de %f años ja sacado un %f.", datos->edad,datos->nota);
	return retval;
}
void estudianteToString(const estudiante * datos,char *retval){
	//El valor que devuelve la funcion
	// snprintf (donde, cuanto, el que [lo que harias con un printf])
	snprintf(retval,MAX_BUFFER*sizeof(char),"El estudiante %s de %d años ha sacado un %f.", datos->nombre,datos->edad,datos->nota);
	
}
//Cambiar el nombre del estudiante
void cambiarNombre(char estudiante * nombre_modificar, char * nuevo_nombre){
	strcpy(nombre_modificar->nombre,nuevo_nombre);
}
//OTRA FORMA
/*
void cambiarNombre(estudiante * nombre_nuevo){
	printf("Nuevo nombre: ");
	scanf("%s\n", nuevo_nombre->nombre);

}
*/
int main (){
	estudiante listado[MAX_ESTUDIANTES];//Aqui se reserva la memoria para los estudiantes

	int num_estudiantes;
	printf("¿Cuantos estudiantes desea inicializar?");
	scanf("%d", &num_estudiantes);


	int edad;
	float nota;
	char nombre[MAX_NOMBRE];
	


	printf("%p\n", listado);
	printf("Sizeof listado: %lu\n",sizeof(listado));
	printf("Sizeof estudiante: %lu\n",sizeof(estudiante));

	for(int i=0;i < num_estudiantes; i++){
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

//cumpleanios(listado)
printf("Edad nueva:%d\n", listado[0].edad);
//Tambien es valido
printf("Edad nueva:%d\n", listado->edad);
printf("Edad nueva:%d\n", (*listado).edad);

//Imprimir estudiantes
imprimirEstudiante(&listado[0]);
char StringARellenar[MAX_BUFFER];
estudianteToString(&listado[0], StringARellenar);
printf("%s\n",StringARellenar);
	
//Cambia nombre de estudiante
char nombre_nuevo[MAX_NOMBRE];
cambiarNombre(&listado[0]);
printf("Cambia tu nombre: ");
scanf("%s", nombre_nuevo);
cambiarNombre(&listado[0],nombre_nuevo);
imprimirEstudiante(&listado[0]);

return 0;
}


