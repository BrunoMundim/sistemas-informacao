#include <stdio.h>

int main(){
  int vetor[8], x, y;
  for(int i = 0; i < 8; i++){
    scanf("%d", &vetor[i]);
  }
  scanf("%d %d", &x, &y);
  printf("A soma das posicoes eh: %d\n", vetor[x-1] + vetor[y-1]);

  return 0;
}