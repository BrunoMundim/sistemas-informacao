// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  // Criando seed
  srand(time(NULL));

  // Criando o cubo
  // Altura: 7, Largura: 6, Profundidade: 5
  int altura = 7, largura = 6, profundidade =5;
  int ***cubo = (int***) malloc(largura*sizeof(int**));
  for(int i = 0; i < largura; i++){
    cubo[i] = (int**) malloc(altura*sizeof(int*));
    for(int j = 0; j < altura; j++){
      cubo[i][j] = (int*) malloc(profundidade*sizeof(int));
      for(int k = 0; k < profundidade; k++){
        cubo[i][j][k] = rand() % 100 + 1;
      }
    }
  }

  // Imprimindo as matrizes
  for(int i = 0; i < profundidade; i++){ // Esse loop define a ordem das camadas
    printf("Camada %d:\n", i+1);
    for(int j = 0; j < largura; j++){    // linhas
      for(int k = 0; k < altura; k++){   // colunas
        // j k i precisa estar nessa ordem pra imprimir corretamente
        printf("%d ", cubo[j][k][i]); 
      }
      printf("\n");
    }
    printf("\n\n");
  }

  // Liberando a matriz
  for(int i = 0; i < largura; i++){
    for(int j = 0; j < altura; j++)
      free(cubo[i][j]);
    free(cubo[i]);
  }
  free(cubo);

  return 0;
}