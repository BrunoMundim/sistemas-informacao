#include <stdio.h>

int main(){
  int A, B;
  while(1){
    scanf("%d %d", &A, &B);
    if(A == 0 || B == 0)
      break;
    if(A > 0 && B > 0)
      printf("primeiro\n");
    if(A < 0 && B > 0)
      printf("segundo\n");
    if(A < 0 && B < 0)
      printf("terceiro\n");
    if(A > 0 && B < 0)
      printf("quarto\n");
  }

  return 0;
}