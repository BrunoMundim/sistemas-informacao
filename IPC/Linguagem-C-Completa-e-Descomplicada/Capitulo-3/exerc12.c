#include <stdio.h>
#define pi 3.141529

int main(){
  float raio, altura;
  printf("Qual a altura do cilindro? ");
  scanf("%f", &altura);
  printf("Qual o raio do cilindro? ");
  scanf("%f", &raio);
  printf("O volume do cilindro eh: %.2f", pi * raio * raio * altura);

  return 0;
}