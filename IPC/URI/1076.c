#include <stdio.h>

int main()
{
  int numero, i;
  scanf("%d", &numero);

  for(i = 1; i <= 10; i++){
    printf("%d x %d = %d\n", i, numero, (numero*i));
  }

  return 0;
}
