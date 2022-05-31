#include <stdio.h>
#define TAMANHO 5

int main(){
  float matriz[TAMANHO][TAMANHO], somaDiagonais = 0, somaNaoDiagonais = 0;
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
      if(i == j || i + j == TAMANHO - 1)
        somaDiagonais += matriz[i][j];
      else{
        somaNaoDiagonais += matriz[i][j];
      }
        
    }
  printf("A diferenca entre diagonais e nao diagonais eh: %f\n", somaDiagonais - somaNaoDiagonais);

  return 0;
}
