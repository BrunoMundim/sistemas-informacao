#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  float anterior = 1, soma = 0;
  for(int i = 1; i <= N; i++){
    anterior = i * anterior;
    soma += 1.0 / anterior;
  }
  printf("E = %f", soma);

  return 0;
}