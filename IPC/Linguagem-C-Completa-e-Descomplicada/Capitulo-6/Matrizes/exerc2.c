#include <stdio.h>
#define TAMANHO 4

int main(){
  float matriz[TAMANHO][TAMANHO], maior;
  int posicao[2];
  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o numero na posicao [%d][%d]: ", i, j);
      scanf("%f", &matriz[i][j]);
    }
  }
  maior = matriz[0][0];
  posicao[0] = 0;
  posicao[1] = 0;
  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++){
      if(matriz[i][j] > maior)
        maior = matriz[i][j];
        posicao[0] = i;
        posicao[1] = j;
    }
  }
  printf("O maior numero eh %f e esta na posicao [%d][%d]!", maior, posicao[0], posicao[1]);

  return 0;
}