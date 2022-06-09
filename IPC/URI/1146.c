#include <stdio.h>

int main(){
  int numero;
  while(1){
    scanf("%d", &numero);
    if(numero == 0)
      break;
    for(int i = 1; i <= numero; i++){
      if(i == numero)
        printf("%d", i);
      else
        printf("%d ", i);
    }
    printf("\n");
  }
  
  return 0;
}