#include <stdio.h>

int main()
{
  int numeroDeEntradas, x, y, i, j, soma, auxiliar;
  scanf("%d", &numeroDeEntradas);

  for(i = 0; i < numeroDeEntradas; i++){
    soma = 0;
    scanf("%d %d", &x, &y);

    if(x > y){
      auxiliar = x;
      x = y;
      y = auxiliar;
    }

    for(j = x + 1; j < y; j++){
      if(j % 2 != 0) soma += j;
    }
    printf("%d\n", soma);
  }

  return 0;
}
