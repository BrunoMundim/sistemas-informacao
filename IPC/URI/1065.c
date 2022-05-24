#include <stdio.h>

int main()
{
  int entrada, contador = 0, i = 0;

  while(i < 5){
    scanf("%d", &entrada);
    if(entrada % 2 == 0){
      contador++;
    }
    i++;
  }
  printf("%d valores pares\n", contador);

  return 0;
}
