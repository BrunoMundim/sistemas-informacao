#include <stdio.h>

int main(){
  int soma = 0;

  for(int i = 1; i < 1000; i++){
    if(i % 3 == 0) soma += i;
    else if(i % 5 == 0) soma += i;
  }

  printf("A soma de 1 a 1000 eh: %d\n", soma);

  return 0;
}