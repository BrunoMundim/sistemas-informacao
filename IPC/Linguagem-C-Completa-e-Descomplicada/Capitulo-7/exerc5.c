#include <stdio.h>
#include <string.h>

int main(){
  char str[20], aux[1];
  printf("Digite a sua frase: ");
  fgets(str, 100, stdin);

  int contador = strlen(str) - 2;
  for(int i = 0; i <= contador/2; i++){
    aux[0] = str[i];
    str[i] = str[contador - i];
    str[contador - i] = aux[0];
  }
  
  printf("%s\n", str);

  return 0;
}