#include <stdio.h>

int main()
{
  int i, j, n;
  j = 7;

  for(i = 1; i <= 9; i+=2){
    n = 3;    
    while(n){
      printf("I=%d J=%d\n", i, j);
      j--;
      n--;
    }
    j+=5;
  }

  return 0;
}
