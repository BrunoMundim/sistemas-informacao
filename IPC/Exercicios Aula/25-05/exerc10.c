#include <stdio.h>

int main(){
  int entrada, soma = 0;
  printf("Digite o numero: ");
  scanf("%d", &entrada);  
  printf("Divisores: ");
  for(int i = 1; i < entrada; i++){
    if(entrada % i == 0){
      printf("%d ", i);
      soma += i;
    }
  }
  printf("%d\n", entrada);
  printf("A soma dos divisores eh: %d", soma);

  return 0;
}