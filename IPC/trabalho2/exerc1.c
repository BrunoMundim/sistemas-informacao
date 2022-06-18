#include <stdio.h>

int main()
{
  int linha1, coluna1, linha2, coluna2;
  printf("Digite as linhas e colunas da primeira matriz: ");
  scanf("%d %d", &linha1, &coluna1);
  printf("Digite as linhas e colunas da segunda matriz: ");
  scanf("%d %d", &linha2, &coluna2);

  if (linha1 != coluna2 || coluna1 != linha2)
    printf("Nao eh possivel multiplicar essas matrizes!\n");
  else
  {
    float matriz1[linha1][coluna1], matriz2[linha2][coluna2];

    // Ler matriz 1
    for (int i = 0; i < linha1; i++)
      for (int j = 0; j < coluna1; j++)
      {
        printf("Digite o valor da posicao [%d][%d]: ", i, j);
        scanf("%f", &matriz1[i][j]);
      }

    // Ler matriz 2
    for (int i = 0; i < linha2; i++)
      for (int j = 0; j < coluna2; j++) {
        printf("Digite o valor da posicao [%d][%d]: ", i, j);
        scanf("%f", &matriz2[i][j]);
      }

    float soma;
    for (int i = 0; i < linha1; i++) {
      for (int j = 0; j < coluna2; j++) {
        soma = 0;
        for (int k = 0; k < linha2; k++) {
          soma += matriz1[i][k] * matriz2[k][j];
        }
        printf("%.2f ", soma);
      }
      printf("\n");
    }
  }

  return 0;
}