#include <stdio.h>

int main(){
  int N, soma = 0;
  scanf("%d", &N);

  for(int i = 1; i < N; i++)
    if(N % i == 0)
      soma += i;
  printf("A soma dos divisores eh: %d", soma);

  return 0;
}