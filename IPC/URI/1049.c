#include <stdio.h>

int main()
{
  char filo[20], classe[20], ordem[20];
  scanf("%s %s %s", &filo, &classe, &ordem);

  if (filo[0] == 'v')
  {
    if (classe[0] == 'a')
    {
      if (ordem[0] == 'c')
        printf("aguia\n");
      else
        printf("pomba\n");
    }
    else
    {
      if (ordem[0] == 'o')
        printf("homem\n");
      else
        printf("vaca\n");
    }
  }
  else
  {
    if (classe[0] == 'i')
    {
      if (ordem[2] == 'm')
        printf("pulga\n");
      else
        printf("lagarta\n");
    }
    else
    {
      if (ordem[0] == 'h')
        printf("sanguessuga\n");
      else
        printf("minhoca\n");
    }
  }

  return 0;
}
