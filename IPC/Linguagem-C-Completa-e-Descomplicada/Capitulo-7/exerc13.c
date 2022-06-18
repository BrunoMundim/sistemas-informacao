#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  printf("Digite a sua frase: ");
  fgets(str, 100, stdin);
  int i, j;
  printf("O que esta escrito entre as posicoes: ");
  scanf("%d %d", &i, &j);

  if (i > 0 && i < j && j < strlen(str)) {
    for (i = i - 1; i < j; i++) {
      printf("%c", str[i]);
    }
    printf("\n");
  }
  else
    printf("Posicoes invalidas!\n");

  return 0;
}