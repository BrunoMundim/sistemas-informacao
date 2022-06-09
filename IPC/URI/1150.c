#include <stdio.h>

int main(){
  int X, Z, soma = 0, contador = 0;
  scanf("%d", &X);
  while(1){
    scanf("%d", &Z);
    if(Z > X)
      break;
  }
  for(int i = X; soma <= Z; i++){
    soma += i;
    contador++;
  }
  printf("%d\n", contador);

  return 0;
}