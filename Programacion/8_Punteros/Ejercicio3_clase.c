#include <stdio.h>

int main()
{
  int arr[5] = {10, 20, 30, 40, 50};
  int *p = arr+5;
//int *p = &arr[5]; con esto accedes a la 6ª posicion, y esa memoria puede ser una memoria reservada
//por lo tanto puede explotar
  for (int i = 5; i >0; i--) {
    printf("Elemento %d: %d\n", i, *(p - i));
  }
}
