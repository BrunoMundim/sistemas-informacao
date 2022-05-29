#include <stdio.h>

int main(){
  int N, contador = 0;
  scanf("%d", &N);
  for(int i = 0; contador < N; i++)
    if(i % 2 != 0){
      printf("%d\n", i);
      contador++;
    }      

  return 0;
}