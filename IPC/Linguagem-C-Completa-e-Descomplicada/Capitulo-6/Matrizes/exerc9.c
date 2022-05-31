#include <stdio.h>
#define TAMANHO 3

int main(){
  float matriz[TAMANHO][TAMANHO], soma, vetorSoma[TAMANHO];
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j < TAMANHO; j++)
      scanf("%f", &matriz[i][j]);

  for(int j = 0; j < TAMANHO; j++){
    soma = 0;
    for(int i = 0; i < TAMANHO; i++)
      soma += matriz[i][j];
    vetorSoma[j] = soma;
  }
  printf("O vetor soma eh: ");
  for(int i = 0; i < TAMANHO; i++)
    printf("%.1f ", vetorSoma[i]);

  return 0;
}