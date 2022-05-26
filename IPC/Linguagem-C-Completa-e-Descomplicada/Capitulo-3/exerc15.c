// Melhorar usando loop for
#include <stdio.h>

int main(){
  int numero, primeiro, segundo, terceiro, auxiliar;
  scanf("%d", &numero);

  primeiro = numero / 100;
  segundo = (numero - (100 * primeiro)) / 10;
  terceiro = (numero - (100 * primeiro) - (10 * segundo));

  auxiliar = primeiro;
  primeiro = terceiro;
  terceiro = auxiliar;  

  printf("%d%d%d\n", primeiro, segundo, terceiro);
  printf("%d", sizeof(numero));

  return 0;
}