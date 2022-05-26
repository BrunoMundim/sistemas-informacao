#include <stdio.h>

int main(){
  float a, b;
  printf("Digite o valor dos dois catetos: ");
  scanf("%f %f", &a, &b);
  printf("A hipotenusa mede: %.2f", sqrt(a * a + b * b));

  return 0;
}