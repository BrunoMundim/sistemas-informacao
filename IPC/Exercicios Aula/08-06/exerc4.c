#include <stdio.h>
#define LINHAS 5
#define COLUNAS 4

int main(){
  float matriz[LINHAS][COLUNAS];

  for(int i = 0; i < LINHAS; i++){
    for(int j = 0; j < COLUNAS; j++){
      scanf("%f", &matriz[i][j]);
    }
  }
  
  int linha;
  printf("Qual linha voce quer imprimir? ");
  scanf("%d", &linha);
  
  for(int i = 0; i < COLUNAS; i++)
    printf("%f ", matriz[linha-1][i]);
  printf("\n");
  
  return 0;
}