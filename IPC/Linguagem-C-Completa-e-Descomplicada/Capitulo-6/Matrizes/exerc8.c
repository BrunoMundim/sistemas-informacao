#include <stdio.h>
#define TAMANHO 10

int main(){
  float matriz[TAMANHO][TAMANHO];
  for(int i = 0; i < TAMANHO; i++)
    for(int j = 0; j< TAMANHO; j++){
      if(i < j)
        matriz[i][j] = 2 * i + 7 * j - 2;
      if(i == j)
        matriz[i][j] = 3 * i * i - 1;
      if(i > j)
        matriz[i][j] = 4*i*i*i + 5*j*j + 1;
    }

  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j< TAMANHO; j++)
      printf("%.1f ", matriz[i][j]);
    printf("\n");
  }

  return 0;
}