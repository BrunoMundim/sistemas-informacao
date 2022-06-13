#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  printf("Digite a sua frase: ");
  fgets(str, 100, stdin);
  printf("As primeiras 4 letras sao: ");
  for(int i = 0; i < 4; i++)
    printf("%c", str[i]);
  printf("\n");

  return 0;
}