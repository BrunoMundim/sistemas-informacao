#include <stdio.h>
 
int main() {
  int N, X;
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    scanf("%d", &X);
    int soma = 0;
    for(int j = 1; j < X; j++){
      if(X % j == 0){
        soma += j;
      }
    }
    if(soma == X){
      printf("%d eh perfeito\n", X);
    } else {
      printf("%d nao eh perfeito\n", X);
    }
  }  
 
  return 0;
}