#include <stdio.h>
#define pi 3.141592

int main(){
  float raio;
  printf("Qual o raio do circulo? ");
  scanf("%f", &raio);
  printf("A area do circulo eh: %.2f", pi * raio * raio);

  return 0;
}