#include <stdio.h>

int main(){
  int linhas, colunas;
  printf("Quantas linhas tera a matriz? ");
  scanf("%d", &linhas);
  printf("Quantas colunas tera a matriz? ");
  scanf("%d", &colunas);
  float A[linhas][colunas];
  
  for(int i = 0; i < linhas; i++){
    for(int j = 0; j < colunas; j++){
      printf("[%d][%d]: ", i, j);
      scanf("%f", &A[i][j]);
    }
  }

  float vetor[colunas];
  for(int i = 0; i < colunas; i++){
    printf("Posicao %d vetor: ", i);
    scanf("%f", &vetor[i]);
  }
  
  float soma, resultado[linhas];
  for(int i = 0; i < linhas; i++){
    soma = 0;
    for(int j = 0; j < colunas; j++){
      soma += A[i][j] * vetor[j];
    }
    resultado[i] = soma;
    printf("%.2f ", resultado[i]);
  }
  printf("\n");
  
  return 0;
}