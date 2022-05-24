#include <stdio.h>

int main()
{
  int entrada, i;
  scanf("%d", &entrada);
  
  for(i = 1; i <= entrada; i++){
    if(i % 2 == 0){
      printf("%d^2 = %d\n", i, (i * i));
    }
  }

  return 0;
}
