// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(){
  // Criando e lendo a matriz
  float **matriz = (float**) malloc(SIZE*sizeof(float*));
  for(int i = 0; i < SIZE; i++){
    matriz[i] = (float*) malloc(SIZE*sizeof(float));
    for(int j = 0; j < SIZE; j++){
      printf("Digite a posicao [%d][%d]: ", i+1, j+1);
      scanf("%f", &matriz[i][j]);
    }
  }

  // Buscando na matriz
  float valorBuscado;
  while(1){
    // Lendo o valor a ser buscado
    printf("Digite o valor que deseja buscar: ");
    scanf("%f", &valorBuscado);
    // Definindo quando deve ser quebrado o looping
    if(valorBuscado == 0){
      printf("Finalizando busca...\n");
      break;
    }
    // Fazendo a busca do valor na matriz
    int contador = 1;
    for(int i = 0; i < SIZE; i++){
      for(int j = 0; j < SIZE; j++){
        if(matriz[i][j] == valorBuscado){
          printf("%d encontrado: [%d][%d]\n", contador, i+1, j+1);
          contador++;
        }
      }
    }
    // Caso o valor digitado não seja encontrado
    if(contador == 1)
      printf("Nenhum valor encontrado!\n");
  }  

  // Liberando a matriz
  for(int i =0; i < SIZE; i++)
    free(matriz[i]);
  free(matriz);

  return 0;
}