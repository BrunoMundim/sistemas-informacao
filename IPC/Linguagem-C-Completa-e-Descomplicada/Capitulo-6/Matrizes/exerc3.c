#include <stdio.h>
#define TAMANHO 5

int main(){
  int matriz[TAMANHO][TAMANHO];
  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++){
      if(i == j)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++)
      printf("%d ", matriz[i][j]);
    printf("\n");
  }    

  return 0;
}