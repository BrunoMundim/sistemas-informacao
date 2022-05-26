#include <stdio.h>

int main(){
  int numero1, numero2;
  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &numero1, &numero2);
  printf("O deslocamento para direita do primeiro pelo segundo eh: %d\n", numero1 >> numero2);
  printf("O deslocamento para esquerda do primeiro pelo segundo eh: %d\n", numero1 << numero2);

  return 0;
}