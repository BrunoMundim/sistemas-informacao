#include <stdio.h>

int main(){
  int fatorial, soma = 1;
  scanf("%d", &fatorial);
  for(int i = 1; i <= fatorial; i++)
    soma *= i;
  printf("%d\n", soma);

  return 0;
}