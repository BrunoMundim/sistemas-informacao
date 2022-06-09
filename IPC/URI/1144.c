#include <stdio.h>

int main(){
  int N, vetor1[3], vetor2[3];
  scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    for(int j = 0; j < 3; j++){
      if(j == 0){
        vetor1[j] = i;
        vetor2[j] = vetor1[j];
      }        
      else{
        vetor1[j] = vetor1[j-1] * i;
        vetor2[j] = vetor1[j] + 1;
      }        
    }
    printf("%d %d %d\n", vetor1[0], vetor1[1], vetor1[2]);
    printf("%d %d %d\n", vetor2[0], vetor2[1], vetor2[2]);
  }

  return 0;
}
