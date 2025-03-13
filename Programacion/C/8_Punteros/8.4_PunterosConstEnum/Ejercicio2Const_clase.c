#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 
 * 
 * Autor: Ainhoa Leonor
 *
 */

int main() {
    int numero = 10;
    int trampa = 30;
    const int *ptr = &numero;  // El valor apuntado es constante. Apunta al contenido de ptr

    printf("Valor: %d\n", *ptr);

    // *ptr = 20;  // Esto daría un error porque el valor es constante
    numero = 20;   // Cambiar el valor directamente es válido
    printf("Nuevo valor: %d\n", *ptr);

    //VAMOS A TRAMPEAR
    ptr=&trampa;
    printf("Nuevo valor: %d\n")

    return 0;
}