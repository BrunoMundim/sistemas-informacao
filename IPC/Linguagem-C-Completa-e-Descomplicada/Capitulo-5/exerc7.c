#include <stdio.h>

int main(){
  int N, soma = 0;
  
  for(int i = 0; i < 10; i++)
  {  
    scanf("%d", &N);
    soma += N;
  }
  printf("A soma eh: %d", soma);

  return 0;
}