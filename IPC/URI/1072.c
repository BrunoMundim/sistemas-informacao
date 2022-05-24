#include <stdio.h>

int main()
{
  int numeroDeEntradas, entrada, in = 0, out = 0, i;
  scanf("%d", &numeroDeEntradas);

  for(i = 0; i < numeroDeEntradas; i++){
    scanf("%d", &entrada);
    if(entrada >= 10 && entrada <= 20) in++;
    else out++;  
  }

  printf("%d in\n", in);
  printf("%d out\n", out);

  return 0;
}
