#include <stdio.h>
#include <stdlib.h>


int main() {
    float x = 10;
    float *p;
    p = &x;

    printf("Valor de x: %f\n", x);
    printf("Dirección de x: %p\n", &x);
    printf("Valor de p (dirección de x): %p\n", p);
    printf("Valor apuntado por p (contenido de p): %f\n", *p);

    return 0;
}
