#include <stdio.h>
#define TAMANHO 6

int main(){
  float matriz[TAMANHO][TAMANHO], soma = 0;
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
      if(i > j)
        soma += matriz[i][j];
    }
  printf("A soma dos valores abaixo da diagonal principal eh: %.1f\n", soma);
  
  return 0;
}