#include <stdio.h>

int main(){
  float a, b, c, delta;
  scanf("%f %f %f", &a, &b, &c);
  delta = b * b - 4 * a * c;

  if(a == 0)
    printf("Nao eh uma equacao de 2 grau!\n");
  else if(delta < 0)
    printf("Nao existe raiz!\n");
  else if(delta == 0)
    printf("Possui uma raiz: %.2f", -b/(2*a));
  else
    printf("Possui duas raizes: %.2f %.2f", ((-b+sqrt(delta))/(2*a)), ((-b-sqrt(delta))/(2*a)));


  return 0;
}