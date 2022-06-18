#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  printf("Digite sua frase: ");
  fgets(str, 100, stdin);
  printf("%s\n", str);

  return 0;
}