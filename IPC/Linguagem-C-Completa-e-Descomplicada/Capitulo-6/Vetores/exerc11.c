#include <stdio.h>

int main(){
  float reais[20], quadradro[20];
  int N;
  printf("Quantos numeros voce deseja digitar? ");
  scanf("%d", &N);
  for(int i = 0; i < N; i++){
    scanf("%f", &reais[i]);
    quadradro[i] = reais[i]*reais[i];
  }
  for(int i = 0; i < N; i++){
    printf("%.2f ", reais[i]);
  }
  printf("\n");
  for(int i = 0; i < N; i++){
    printf("%.2f ", quadradro[i]);
  }

  return 0;
}