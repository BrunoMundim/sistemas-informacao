#include <stdio.h>

int main(){
  int X, soma;
  while(1){
    soma = 0;
    scanf("%d", &X);
    if(X == 0)
      break;
    if(X % 2 != 0)
      X++;
    for(int i = 0; i < 5; i++){
      soma += X;
      X += 2;    
    }
    printf("%d\n", soma);
  }  
  
  return 0;
}