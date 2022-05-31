#include <stdio.h>
#define TAMANHO 5

int main(){
  float A[TAMANHO][TAMANHO], B[TAMANHO][TAMANHO];
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%f", &A[i][j]);
      B[i][j] = A[i][j] * A[i][j];        
    }
  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++)
      printf("%.1f ", B[i][j]);
    printf("\n");
  }
    

  return 0;
}
