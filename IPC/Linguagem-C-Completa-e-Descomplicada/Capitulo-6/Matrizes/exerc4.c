#include <stdio.h>
#define TAMANHO 4

int main(){
  int matriz[TAMANHO][TAMANHO], contador = 0;
  for(int i = 0; i < TAMANHO; i++){
    for(int j = 0; j < TAMANHO; j++){
      printf("Digite o numero na posicao [%d][%d]: ", i+1, j+1);
      scanf("%d", &matriz[i][j]);
      if(matriz[i][j] > 10)
        contador++;
    }
  }
  printf("A matriz possui %d numeros maiores do que 10.\n", contador);

  return 0;
}