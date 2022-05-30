#include <stdio.h>

int main(){
  int vetor[10], maior, menor;
  for(int i = 0; i < 10; i++){
    scanf("%d", &vetor[i]);
    if(i == 0){
      maior = vetor[i];
      menor = vetor[i];
    }
    if(vetor[i] < menor)
      menor = vetor[i];
    if(vetor[i] > maior)
      maior = vetor[i];    
  }
  printf("O maior numero: %d\nO menor numero: %d\n", maior, menor);

  return 0;
}