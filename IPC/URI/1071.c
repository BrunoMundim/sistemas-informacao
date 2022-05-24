#include <stdio.h>

int main()
{
  int x, y, i, auxiliar, soma = 0;
  scanf("%d %d", &x, &y);
  if(x > y) {
    auxiliar = y;
    y = x;
    x = auxiliar;
  }

  for(i = x + 1; i < y; i++){
    if(i % 2 != 0) soma += i;
  }
  printf("%d\n", soma);

  return 0;
}
