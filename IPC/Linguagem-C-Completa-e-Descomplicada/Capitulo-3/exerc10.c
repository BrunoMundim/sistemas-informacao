#include <stdio.h>

int main(){
  float importancia = 780000.00;
  printf("O primeiro ganhador recebera R$ %.2f\n", importancia * 0.46);
  printf("O segundo ganhador recebera R$ %.2f\n", importancia * 0.32);
  printf("O terceiro ganhador recebera R$ %.2f\n", importancia * 0.22);
  
  return 0;
}