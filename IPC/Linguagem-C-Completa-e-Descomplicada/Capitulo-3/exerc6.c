#include <stdio.h>

int main(){
  float velocidade;
  printf("Informe a velocidade em km/h: ");
  scanf("%f", &velocidade);

  printf("A velocidade me m/s eh: %.2f", velocidade/36);
}