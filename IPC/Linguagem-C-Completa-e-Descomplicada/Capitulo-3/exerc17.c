#include <stdio.h>

int main(){
  int numero;
  printf("Digite um numero: ");
  scanf("%d", &numero);
  printf("Complemento bit a bit: %d\n", ~numero);

  return 0;
}