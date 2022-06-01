#include <stdio.h>

int main(){
  int N, contador = 1;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    for(int j = 0; j < 4; j++, contador++){
      if(contador % 4 == 0)
        printf("PUM\n");
      else
        printf("%d ", contador);
    }    
  }

  return 0;
}