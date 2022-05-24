#include <stdio.h>

int main()
{
  float a, b, c, coringa;
  scanf("%f %f %f", &a, &b, &c);
  if(b < c){
    coringa = b;
    b = c;
    c = coringa;
  }
  if(a < b){
    coringa = a;
    a = b;
    b = coringa;
  }
  if(b < c){
    coringa = b;
    b = c;
    c = coringa;
  }
  if(a >= b + c) printf("NAO FORMA TRIANGULO\n");
  else if(a*a == b*b + c*c) printf("TRIANGULO RETANGULO\n");
  else if(a*a > b*b + c*c) printf("TRIANGULO OBTUSANGULO\n");
  else if(a*a < b*b + c*c) printf("TRIANGULO ACUTANGULO\n");
  if(a >= b + c);
  else if(a == b && b == c) printf("TRIANGULO EQUILATERO\n");
  else if(a == b || b == c || a == c) printf("TRIANGULO ISOSCELES\n");

  return 0;
}
