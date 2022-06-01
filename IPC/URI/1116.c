#include <stdio.h>

int main(){
  int A, B, N;
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%d %d", &A, &B);
    if(B == 0)
      printf("divisao impossivel\n");
    else
      printf("%.1f\n", (float)A/B);
  }

  return 0;
}