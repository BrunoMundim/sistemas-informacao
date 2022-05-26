#include <stdio.h>

int main(){
  int numero;
  scanf("%d", &numero);
  printf("Antecessor: %d\nSucessor: %d\n", numero - 1, numero + 1);

  return 0;
}