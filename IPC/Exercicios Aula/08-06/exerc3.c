#include <stdio.h>
#define TAMANHO 8

int main(){
  float matriz[TAMANHO][TAMANHO], soma = 0;

  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++){
      scanf("%f", &matriz[i][j]);
      if(i == j)
        soma += matriz[i][j];
    }
  }
  printf("A soma eh: %.2f\n", soma);
  
  return 0;
}