// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#define TAM 2

int main()
{
  int A[TAM][TAM], B[TAM][TAM], C[TAM][TAM];
  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      A[i][j] = 3*(i+1) + 4*(j+1);
      B[i][j] = - 4*(i+1) - 3*(j+1);
      C[i][j] = A[i][j] + B[i][j];
    }
  }

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      printf("%d ", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}