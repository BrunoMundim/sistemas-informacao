#include <stdio.h>
#define TAMANHO 3

int main(){
  float matriz[TAMANHO][TAMANHO], soma = 0;
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o numero na posicao [%d][%d]: ", i+1, j+1);
      scanf("%f", &matriz[i][j]);
      if(j + i == TAMANHO - 1)
        soma += matriz[i][j];
    }
  printf("A soma da diagonal secundaria eh: %.2f!\n", soma);    

  return 0;
}