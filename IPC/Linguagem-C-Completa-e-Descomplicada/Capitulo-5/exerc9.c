#include <stdio.h>

int main(){
  float N, maior, menor;
  
  for(int i = 0; i < 10; i++){
    scanf("%f", &N);
    if(i == 0){
      menor = N;
      maior = N;
    }
    if(N < menor)
      menor = N;
    if(N > maior)
      maior = N;
  }
  printf("O menor numero eh: %.2f\nO maior numero eh: %.2f\n", menor, maior);

  return 0;
}