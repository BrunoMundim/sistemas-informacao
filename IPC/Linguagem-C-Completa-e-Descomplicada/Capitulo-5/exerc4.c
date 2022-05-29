#include <stdio.h>

int main(){
  int contador = 0;

  for(int i = 1; contador < 5; i++)
    if(i % 3 == 0){
      printf("%d\n", i);
      contador++;
    }
  
  return 0;
}