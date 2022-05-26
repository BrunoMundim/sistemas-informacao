#include <stdio.h>

int main()
{
  char letra;
  printf("Digite a letra que deseja converter: ");
  scanf("%c", &letra);

  if (letra >= 65 && letra <= 90)
    printf("Nova letra: %c", letra += 32);
  else
    printf("Nova letra: %c", letra -= 32);

  return 0;
}