#include <stdio.h>

int main(){
  int soma = 0, contador = 0;
  for(int i = 0; contador < 50; i++)
    if(i % 2 == 0){
      soma += i;
      contador++;
    }
  
  printf("A soma eh: %d", soma);

  return 0;
}