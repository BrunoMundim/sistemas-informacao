#include <stdio.h>

int main(){
  float vetor[10], auxiliar;
  for(int i = 0; i < 10; i++){
    scanf("%f", &vetor[i]);
  }
  for(int i = 0; i < 10; i++){
    for(int j = i+1; j < 10; j++)
      if(vetor[i] > vetor[j]){
        auxiliar = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = auxiliar;
    }     
  }
  for(int i = 0; i < 10; i++){
    printf("%.1f ", vetor[i]);
  }
  return 0;
}