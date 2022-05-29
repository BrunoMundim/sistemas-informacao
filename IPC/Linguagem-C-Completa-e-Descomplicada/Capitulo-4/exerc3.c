#include <stdio.h>

int main(){
  int n;
  scanf("%d", &n);

  if(n % 2 == 0)
    printf("O numero eh par!\n");
  else 
    printf("O numero eh impar!\n");  

  return 0;
}