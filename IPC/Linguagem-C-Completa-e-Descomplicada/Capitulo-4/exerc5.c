#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);
  
  if(n > 0)
    printf("O numero ao quadrado eh: %d\nA raiz do numero eh: %.2f\n", n*n, sqrt(n));

  return 0;
}