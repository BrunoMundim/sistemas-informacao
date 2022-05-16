#include <stdio.h>
#include <math.h>

int main()
{
  double a, b, c, delta, r1, r2, negativeB;
  scanf("%lf %lf %lf", &a, &b, &c);
  delta = b * b - 4 * a * c;
  negativeB = b * (-1);

  if(delta < 0 || a == 0) printf("Impossivel calcular");
  else{
    r1 = (negativeB + sqrt(delta)) / (2 * a);
    r2 = (negativeB - sqrt(delta)) / (2 * a);
    printf("R1 = %.5f\nR2 = %.5f\n", r1, r2);
  }

  return 0;
}
