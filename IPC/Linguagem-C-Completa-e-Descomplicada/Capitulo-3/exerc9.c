#include <stdio.h>
#define pi 3.141592

int main(){
  float graus, radianos;
  printf("Digite o angulo em graus: ");
  scanf("%f", &graus);
  printf("O angulo em radianos eh: %.3f", graus*pi/180);

  return 0;
}