#include <stdio.h>

int main()
{
  float entrada, soma = 0;
  int contador = 0, i = 0;

  while(i < 6){
    scanf("%f", &entrada);
    if(entrada > 0){
      contador++;
      soma += entrada;
    }
    i++;
  }
  printf("%d valores positivos\n", contador);
  printf("%.1f\n", soma / contador);

  return 0;
}
