#include <stdio.h>

int main(){
  int numero, verificarSeEhValido = 1, primo = 1;
  while(verificarSeEhValido){
    scanf("%d", &numero);
    if(numero > 1)
      verificarSeEhValido = 0;
  }
  for(int i = 2; i < numero; i++){
    if(numero % i == 0)
      primo = 0;
  }
  if(primo == 0){
    printf("Nao eh primo!\n");
  } else
    printf("Eh primo!\n");


  return 0;
}