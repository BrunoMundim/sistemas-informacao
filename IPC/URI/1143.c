#include <stdio.h>

int main(){
  int N, soma;
  scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    soma = i;
    int contador = 3;
    while (contador){
      printf("%d", soma);
      soma = soma * i;
      contador--;
      if(contador != 0)
        printf(" ");
    }
    printf("\n");
  }

  return 0;
}