// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>

int main()
{
  int n;
  printf("Quantos numeros deseja digitar? ");
  scanf("%d", &n);
  float vetor[n], soma = 0;
  for(int i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
    if(vetor[i] != 0){
      soma += (i + 1) / vetor[i];
    }
  }
  printf("O somatorio eh: %f\n", soma);
  
  return 0;
}