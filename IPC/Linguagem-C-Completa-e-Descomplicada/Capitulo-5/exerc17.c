#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  int floyd = 1;

  for(int i = 1; i <= N; i++){
    for(int j = 0; j < i; j++){
      printf("%d ", floyd);
      floyd++;
    }      
    printf("\n");
  }

  return 0;
}