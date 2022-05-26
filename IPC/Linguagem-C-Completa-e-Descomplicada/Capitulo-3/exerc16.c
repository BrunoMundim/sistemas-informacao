#include <stdio.h>

int main(){
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  printf("Divisao por 2: %d\n", numero >> 1);
  printf("Multiplicacao por 2: %d\n", numero << 1);

  return 0;
}