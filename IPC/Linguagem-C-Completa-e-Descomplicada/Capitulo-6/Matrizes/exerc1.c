#include <stdio.h>

int main(){
  float matriz[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("Digite o numero na posicao [%d][%d]: ", i+1, j+1);
      scanf("%f", &matriz[i][j]);
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      printf("%.2f ", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}