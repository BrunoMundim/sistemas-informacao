#include <stdio.h>

int main(){
  int vetor[3], contador = 0, soma = 0;
  for(int i = 0; i < 3; i++){
    scanf("%d", &vetor[i]);
    if(vetor[i] > 0)
      soma += vetor[i];
    if(vetor[i] < 0)
      contador++;    
  }
  printf("O vetor tem %d numeros negativos\nA soma dos positivos: %d\n", contador, soma);

  return 0;
}