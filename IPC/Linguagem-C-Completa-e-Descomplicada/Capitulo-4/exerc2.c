#include <stdio.h>

int main(){
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  if(n1 > n2)
    printf("O primeiro numero eh o maior!\n");
  else if(n2 > n1)
    printf("O segundo numero eh o maior!\n");
  else
    printf("Os dois numeros sao iguais!\n");

  return 0;
}