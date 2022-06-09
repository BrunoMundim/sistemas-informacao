#include <stdio.h>

int main(){
  int tamanho, n1 = 0, n2 = 1, aux;
  scanf("%d", &tamanho);
  printf("%d %d ", n1, n2);
  for(int i = 0; i < tamanho - 2; i++){
    if(i == tamanho - 3)
      printf("%d", n1 + n2);
    else
      printf("%d ", n1 + n2);
    aux = n1 + n2;
    n1 = n2;
    n2 = aux;
  }
  printf("\n");

  return 0;
}