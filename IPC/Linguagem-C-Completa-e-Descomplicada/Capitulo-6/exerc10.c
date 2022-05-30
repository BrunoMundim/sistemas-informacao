#include <stdio.h>

int main(){
  int vetor[100], numeroAtual = 0;
  for(int i = 0; i < 100; i++){
    if(numeroAtual % 7 == 0)
      numeroAtual++;
    vetor[i] = numeroAtual;
    numeroAtual++;
    printf("%d ", vetor[i]);
  }

  return 0;
}