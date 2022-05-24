#include <stdio.h>

int main()
{
  int i, j, n;
  float iReal;
  j = 1;

  for(i = 0; i <= 20; i+=2){
    iReal = i / 10.0;
    n = 3;
    j = 1;  
    while(n){
      printf("I=%g J=%g\n", iReal, j + iReal);
      j++;
      n--;
    }
  }

  return 0;
}
