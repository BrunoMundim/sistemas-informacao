#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int N, menorValor, menorPosicao = 0;
  scanf("%d", &N);
  int *vetor = (int*) malloc(N*sizeof(int));
  for(int i = 0; i < N; i++){
    scanf("%d", &vetor[i]);
    if(i == 0)
      menorValor = vetor[i];
    if(vetor[i] < menorValor){
      menorValor = vetor[i];
      menorPosicao = i;
    }
  }
  printf("Menor valor: %d\n", menorValor);
  printf("Posicao: %d\n", menorPosicao);
  
  return 0;
}