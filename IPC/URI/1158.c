#include <stdio.h>

int main(){
  int N, X, Y, contador, soma;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    contador = soma = 0;
    scanf("%d %d", &X, &Y);
    if(X % 2 == 0)
      X++;
    while(contador < Y){
      soma += X;
      contador++;
      X += 2;
    }
    printf("%d\n", soma);
  }
  
  return 0;
}