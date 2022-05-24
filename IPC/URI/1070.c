#include <stdio.h>

int main()
{
  int entrada, i;
  scanf("%d", &entrada);

  if(entrada % 2 == 0) entrada++;

  for(i = 0; i < 6; i++){
    printf("%d\n", entrada);
    entrada += 2;
  }

  return 0;
}
