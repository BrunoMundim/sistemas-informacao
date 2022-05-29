#include <stdio.h>

int main(){
  int numero, n1 = 0, n2 = 1, atual;
  scanf("%d", &numero);
  printf("%d %d ", n1, n2);

  for(int i = 0; i < numero; i++){
    atual = n1 + n2;
    n1 = n2;
    n2 = atual;
    printf("%d ", atual);
  }

  return 0;
}