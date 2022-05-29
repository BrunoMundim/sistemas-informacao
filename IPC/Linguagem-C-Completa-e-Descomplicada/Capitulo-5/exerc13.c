#include <stdio.h>

int main(){
  int soma = 0;
  for(int i = 1; i <= 1000; i++)
    if(i % 3 == 0 && i % 5 == 0){
      continue;
    } else if(i % 3 == 0){
      soma += i;
    } else if(i % 5 == 0){
      soma += i;
    }
  printf("A soma dos multiplos 3 ou 5 eh: %d", soma);

  return 0;
}