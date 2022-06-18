// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>

int main()
{
  float vetor[10];
  
  // Lendo o vetor
  for(int i = 0; i < 10; i++){
    printf("Digite o %d numero: ", i + 1);
    scanf("%f", &vetor[i]);
    for(int j = 0; j < i; j++)
      if(vetor[i] == vetor[j])
        i--;
  }

  // Mostrando o vetor na tela
  printf("[ ");
  for(int i = 0; i < 10; i++){
    printf("%.2f", vetor[i]);
    if(i < 9)
      printf(", ");
  }
  printf(" ]\n");
  
  return 0;
}