#include <stdio.h>

int main(){
  float N, soma = 1.0;
  scanf("%f", &N);

  for(int i = 2; i <= N; i++)
    soma += 1.0 / i;
  
  printf("Harmonico de N = %.2f\n", soma);

  return 0;
}