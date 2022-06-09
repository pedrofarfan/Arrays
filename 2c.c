//Escribir un programa que haga lo mismo que el ejercicio anterior pero para los primeros n numeros naturales. El usuario ingresa n como argumento de lınea de comandos.
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n = atoi(argv[1]);
  int array[n];
  for (int i = 0; i < n; i++) {
    array [i]= i;
    printf("%d ", array[i]);
  }
  printf("\n");
  return 0;
}
