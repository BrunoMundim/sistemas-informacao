// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>
#include <math.h>

int main()
{
  int n;
  printf("Quantos numeros deseja digitar? ");
  scanf("%d", &n);

  // Lendo o vetor e fazendo a soma dos valores digitados
  float vetor[n], soma = 0;
  for(int i = 0; i < n; i++){
    scanf("%f", &vetor[i]);
    soma += vetor[i];
  }

  // Fazendo a media e zerando a soma para fazer o somatorio
  float media = soma / n;
  soma = 0;

  // Calculando o somatorio
  for(int i = 0; i < n; i++)
    soma += (vetor[i] - media) * (vetor[i] - media);

  float desvio = sqrt(soma / n);

  printf("O desvio eh: %.2f\n", desvio);

  return 0;
}