#include <stdio.h>

int main(){
  float reais, cotacaoDolar;
  printf("Qual a cotacao do dolar hoje? ");
  scanf("%f", &cotacaoDolar);
  printf("Qual o valor que voce deseja converter? ");
  scanf("%f", &reais);

  printf("O valor convertido eh de: U$%.2f", reais/cotacaoDolar);

  return 0;
}