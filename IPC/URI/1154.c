#include <stdio.h>

int main(){
  int idade, contador = 0, soma = 0;
  while(1){
    scanf("%d", &idade);
    if(idade < 0)
      break;
    soma += idade;
    contador++;
  }
  if(contador > 0)
    printf("%.2f\n", (float)soma/contador);

  return 0;
}