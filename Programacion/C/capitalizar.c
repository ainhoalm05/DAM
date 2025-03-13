#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void capitalizar(char *p) {
    if (p[0] >= 'a' && p[0] <= 'z') {
        p[0] -= ('a' - 'A');  // Capitalizar la primera letra
    }
    
}

int main() {
    int tamaño;
    printf("Tamaño de la palabra: ");
    scanf("%d", &tamaño);
    

    char *palabra = (char *)malloc(sizeof(char) * (tamaño + 1)); // +1 para el '\0'
    if (palabra == NULL) {
        printf("Error de asignación de memoria\n");
        return 1;
    }

    printf("Ingrese la palabra: ");
    scanf("%s", palabra); // Usar scanf para leer una palabra
for (int i = 0; i < tamaño; i++) {
        capitalizar(&palabra[i]);  // Pasamos la dirección de cada carácter
    }
printf("%s",palabra);

    free(palabra);
    return 0;
}
