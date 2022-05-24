#include <stdio.h>

int main()
{
  int a, b, c, constA, constB, constC, coringa;
  scanf("%d %d %d", &a, &b, &c);
  constA = a;
  constB = b;
  constC = c;
  
  if(a > b) {
    coringa = a;
    a = b;
    b = coringa;
  }
  if(b > c) {
    coringa = b;
    b = c;
    c = coringa;
  }
  if(a > b) {
    coringa = a;
    a = b;
    b = coringa;
  }
  printf("%d\n%d\n%d\n\n", a, b, c);
  printf("%d\n%d\n%d\n", constA, constB, constC);  

  return 0;
}
