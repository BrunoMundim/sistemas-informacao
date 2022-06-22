// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>

int main()
{
  float vetor[20], aux;
  // Lendo o vetor
  for(int i = 0; i < 20; i++)
    scanf("%f", &vetor[i]);

  // Ordenando o vetor
  for(int i = 0; i < 20; i++){
    for(int j = i+1; j < 20; j++){
      if(vetor[j] < vetor[i]){
        aux = vetor[j];
        vetor[j] = vetor[i];
        vetor[i] = aux;
      }
    }
  }
  
  // Imprimindo o vetor ordenado
  for(int i = 0; i < 20; i++)
    printf("Posicao %d: %.1f\n", i+1, vetor[i]);
  
  return 0;
}