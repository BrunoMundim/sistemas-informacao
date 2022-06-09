#include <stdio.h>

int main(){
  int A[2][3] = { {15, 52, 29}, {47, 34, 85} },
      B[2][3] = { {5, 13, 11}, {8, 7, -10} },
      C[2][3];
  
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      printf("%d ", A[i][j] + B[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}