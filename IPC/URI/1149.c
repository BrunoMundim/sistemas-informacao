#include <stdio.h>

int main(){
  int numero, A, soma = 0;
  scanf("%d", &A);
  while(1){
    scanf("%d", &numero);
    if(numero > 0){
      for(int i = 0; i < numero; i++){
        soma += A + i;
      }
      printf("%d\n", soma);
      break;
    }      
  }
  
  return 0;
}