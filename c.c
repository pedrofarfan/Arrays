//1. Escribir un programa que declare un array de tipo int que almacene los primeros diez n ́umeros naturales. Imprimir el array un elemento por lınea.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int array[11];
  for (int i = 0; i < 11; i++) {
    array[i] = i;
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
