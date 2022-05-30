#include <stdio.h>

int main(){
  float vetor[10], auxiliar;
  for(int i = 0; i < 10; i++){
    scanf("%f", &vetor[i]);
  }
  for(int i = 0; i < 10; i++){
    if(vetor[i] > vetor[i+1]){
      auxiliar = vetor[i];
      vetor[i] = vetor[i+1];
      vetor[i+1] = auxiliar;
    }     
  }
  for(int i = 0; i < 10; i++){
    printf("%.1f ", vetor[i]);
  }
  return 0;
}