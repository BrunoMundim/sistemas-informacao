#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);

  if(N % 3 == 0 && N % 5 != 0)
    printf("Divisel por 3!\n");
  else if(N % 3 != 0 && N % 5 == 0)
    printf("Divisivelo por 5!");

  return 0;
}