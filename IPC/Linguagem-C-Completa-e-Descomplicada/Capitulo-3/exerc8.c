#include <stdio.h>

int main(){
  float celsius, fahrenheit;
  printf("Digite a temperatura em graus celsius: ");
  scanf("%f", &celsius);

  printf("A temperatura em Fahrenheit eh de: %.2f\n", celsius*9/5 + 32);

  return 0;
}