#include <stdio.h>

int main(){
  int vetor[6], soma = 0;
  for(int i = 0; i < 6; i++){
    scanf("%d", &vetor[i]);
    soma += vetor[i];
  }
  for(int i = 0; i < 6; i++){
    printf("%d ", vetor[i]);
  }
  printf("\nA media eh: %.2f", soma / 6.0);

  return 0;
}