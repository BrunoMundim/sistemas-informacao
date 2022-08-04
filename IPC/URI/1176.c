#include <stdio.h>
 
int main() {
  long long int fib[61];
  fib[0] = 0, fib[1] = 1;
  for(int i = 2; i < 61; i++){
    fib[i] = fib[i-1] + fib[i-2];
  }
  
  int N;
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    long long int X;
    scanf("%lld", &X);
    printf("Fib(%lld) = %lld\n", X, fib[X]);
  }

  return 0;
} 