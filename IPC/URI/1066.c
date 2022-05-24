#include <stdio.h>

int main()
{
  int entrada, i = 0;
  int pares = 0, impares = 0, positivos = 0, negativos = 0;

  while(i < 5){
    scanf("%d", &entrada);
    if(entrada % 2 == 0) pares++;
    else impares++;

    if(entrada > 0) positivos++;
    else if(entrada < 0)negativos++;

    i++;
  }
  printf("%d valor(es) par(es)\n", pares);
  printf("%d valor(es) impar(es)\n", impares);
  printf("%d valor(es) positivo(s)\n", positivos);
  printf("%d valor(es) negativo(s)\n", negativos);

  return 0;
}
