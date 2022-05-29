#include <stdio.h>

int main(){
  float soma = 0;
  for(float i = 1, j = 1; j <= 55; i+=2, j+=1){
    soma += i/j;
  }
  printf("A soma de S eh: %.2f\n", soma);

  return 0;
}