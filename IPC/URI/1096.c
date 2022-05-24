#include <stdio.h>

int main()
{
  int i, j;

  for(i = 1; i <= 9; i+=2){
    j = 7;
    while(j >= 5){
      printf("I=%d J=%d\n", i, j);
      j--;
    }
  }

  return 0;
}
