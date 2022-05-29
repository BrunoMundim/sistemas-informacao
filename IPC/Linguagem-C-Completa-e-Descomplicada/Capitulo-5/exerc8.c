#include <stdio.h>

int main(){
  int N, soma = 0;
  
  for(int i = 0; i < 10; i++)
  {  
    scanf("%d", &N);
    soma += N;
  }
  printf("A media eh: %.2f", soma / 10.0);

  return 0;
}