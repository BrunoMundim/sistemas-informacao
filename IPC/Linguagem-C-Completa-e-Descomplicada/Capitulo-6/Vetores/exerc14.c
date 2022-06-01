#include <stdio.h>
#include <math.h>

int main(){
  int N;
  printf("Digite o tamanho de seu vetor: ");
  scanf("%d", &N);
  float vetor[N], soma = 0, desvio, somatorio = 0;
  for(int i = 0; i < N; i++){
    printf("Digite o numero da posicao %d: ", i);
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }
  float media = soma / N;
  for(int i = 0; i < N; i++){
    somatorio += (media - vetor[i])*(media - vetor[i]);
  }
  desvio = sqrt(somatorio/(N-1));
  printf("O desvio padrao eh: %f", desvio);
  
  return 0;
}