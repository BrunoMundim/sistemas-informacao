#include <stdio.h>

int main(){
  int numero1, numero2;
  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &numero1, &numero2);
  printf("Ou exclusivo: %d\n", numero1 ^ numero2);
  printf("Ou bit a bit: %d\n", numero1 | numero2);
  printf("E bit a bit: %d\n", numero1 & numero2);

  return 0;
}