#include <stdio.h>

int main()
{
  int i = 0;
  int contador = 0;
  float numero;
  for (i; i <= 5; i++)
  {
    scanf("%f", &numero);
    if(numero >= 0){
      contador++;
    }
  }
  printf("%d valores positivos", contador);

  return 0;
}