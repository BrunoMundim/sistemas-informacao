#include <stdio.h>
 
int main() {
  double N[100], X;
  scanf("%lf", &X);
  N[0] = X;
  printf("N[0] = %.4lf\n", N[0]);
  for(int i = 1; i < 100; i++){
    N[i] = N[i-1] / 2;
    printf("N[%d] = %.4lf\n", i, N[i]);
  }
  
  return 0;
} 