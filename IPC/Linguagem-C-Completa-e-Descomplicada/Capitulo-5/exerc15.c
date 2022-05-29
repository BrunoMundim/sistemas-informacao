#include <stdio.h>

int main(){
  int numero, menor, maior;
  for(int i = 0; ; i++){
    scanf("%d", &numero);
    if(i == 0){
      menor = numero;
      maior = numero;
    }
    if(numero > maior)
      maior = numero;
    if(numero < menor)
      menor = numero;
    if(numero < 0)
      break;
  }
  printf("O maior numero eh: %d\nO menor numero eh: %d\n", maior, menor);
  
  return 0;
}