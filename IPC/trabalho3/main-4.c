// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#include <stdlib.h>

int main(){
  // Lendo a matriz
  float **A = (float**) malloc(3*sizeof(float*));
  for(int i = 0; i < 3; i++){
    A[i] = (float*) malloc(3*sizeof(float));
    for(int j = 0; j < 3; j++){
      printf("Digite a posicao [%d][%d]: ", i+1, j+1);
      scanf("%f", &A[i][j]);
    }
  }

  // Calculando o determinante
  // dp = Diagonal Principal
  // ds = Diagonal Secundaria
  float dp1 = A[0][0] * A[1][1] * A[2][2];
  float dp2 = A[0][1] * A[1][2] * A[2][0];
  float dp3 = A[0][2] * A[1][0] * A[2][1];
  float ds1 = A[0][2] * A[1][1] * A[2][0];
  float ds2 = A[0][0] * A[1][2] * A[2][1];
  float ds3 = A[0][1] * A[1][0] * A[2][2];

  // Imprimindo o determinante
  printf("O determinante eh: %.2f\n", (dp1+dp2+dp3) - (ds1+ds2+ds3));

  // Liberando matriz
  for(int i = 0; i < 3; i++)
    free(A[i]);
  free(A);

  return 0;
}