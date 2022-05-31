#include <stdio.h>
#define TAMANHO 5

int main(){
  float matriz[TAMANHO][TAMANHO], soma = 0;
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
      if(i != j && i + j != TAMANHO - 1)
        soma += matriz[i][j];
    } 
  printf("A soma dos valores que nao estao na diagonal principal nem na secundaria eh: %f\n", soma);
}