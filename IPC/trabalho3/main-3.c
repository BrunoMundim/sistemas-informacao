// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#include <stdlib.h>

int main(){
  // Lendo a matriz
  float **A = (float**) malloc(2*sizeof(float*));
  for(int i = 0; i < 2; i++){
    A[i] = (float*) malloc(2*sizeof(float));
    for(int j = 0; j< 2; j++){
      printf("Digite a posicao [%d][%d]: ", i+1, j+1);
      scanf("%f", &A[i][j]);
    }
  }

  // Calcular o determinante
  printf("O determinante eh: %.2f\n", (A[0][0] * A[1][1])-(A[0][1] * A[1][0]));

  // Liberando a matriz
  for(int i = 0; i < 2; i++)
    free(A[i]);
  free(A);

  return 0;
}