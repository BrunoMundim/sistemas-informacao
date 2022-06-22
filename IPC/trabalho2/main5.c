// Bruno Mundim Franco Rocha Gonçalves
// Matricula: 12121BSI246
#include <stdio.h>

int main()
{
  int P, Q;
  printf("Digite o numero de linhas: ");
  scanf("%d", &P);
  printf("Digite o numero de colunas: ");
  scanf("%d", &Q);

  float matriz[P][Q];
  float L[P], C[Q];

  for(int i = 0; i < P; i++){
    for(int j = 0; j < Q; j++){
      printf("Digite o valor da posicao [%d][%d]: ", i, j);
      scanf("%f",  &matriz[i][j]);
    }
  }
  
  for(int i = 0; i < P; i++){
    float soma = 0;
    for(int j = 0; j < Q; j++){
      soma += matriz[i][j];
    }
    L[i] = soma;
  }

  for(int i = 0; i < Q; i++){
    float soma = 0;
    for(int j = 0; j < P; j++){
      soma += matriz[j][i];
    }
    C[i] = soma;
  }

  printf("\nO somatorio das linhas eh:\n");
  for(int i = 0; i < P; i++)
    printf("Linha %d: %.2f\n", i+1, L[i]);

  printf("\nO somatorio das colunas eh: \n");
  for(int i = 0; i < Q; i++)
    printf("Coluna %d: %.2f\n", i+1, C[i]);

  return 0;
}