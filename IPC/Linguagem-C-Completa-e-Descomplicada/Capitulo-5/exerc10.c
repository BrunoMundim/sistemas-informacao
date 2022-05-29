#include <stdio.h>

int main(){
  int N, soma = 0;
  
  for(int i = 0; i < 10;){
    scanf("%d", &N);
    if(N > 0){
      soma += N;
      i++;
    }
  }
  printf("A media eh: %.2f", soma / 10.0);

  return 0;
}