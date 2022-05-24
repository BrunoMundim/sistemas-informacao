#include <stdio.h>

int main()
{
  int entrada, i = 1;
  scanf("%d", &entrada);

  while(i <= entrada){
    if(i % 2 != 0){
      printf("%d\n", i);
    }
    i++;
  }
  
  return 0;
}
