#include <stdio.h>

int main(){
  int X, Y, atual = 1;
  scanf("%d %d", &X, &Y);
  while(atual <= Y){
    for(int j = 0; j < X; j++){
      if(j == X - 1){
        printf("%d", atual);
        atual++;
      } else{
        printf("%d ", atual);
        atual++;
      }        
    }
    printf("\n");
  }
  
  return 0;
}