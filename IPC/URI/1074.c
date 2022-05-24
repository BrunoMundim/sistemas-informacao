#include <stdio.h>

int main()
{
  int numeroDeEntradas, entrada, i;
  scanf("%d", &numeroDeEntradas);
  
  for(i = 0; i < numeroDeEntradas; i++){
    scanf("%d", &entrada);
    if(entrada == 0){
      printf("NULL\n");
    }else if(entrada % 2 == 0){
      if(entrada > 0) printf("EVEN POSITIVE\n");
      else printf("EVEN NEGATIVE\n");
    }else{
      if(entrada > 0) printf("ODD POSITIVE\n");
      else printf("ODD NEGATIVE\n");
    }
  }

  return 0;
}
