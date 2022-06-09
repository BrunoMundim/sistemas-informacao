#include <stdio.h>

int main(){
  // PRIMEIRA MATRIZ: TAMANHO
  int linhasA, colunasA;
  printf("Numeros de linhas da primeira matriz: ");
  scanf("%d", &linhasA);
  printf("Numeros de colunas da primeira matriz: ");
  scanf("%d", &colunasA);

  // PRIMEIRA MATRIZ: LENDO
  float a[linhasA][colunasA];
  for(int i = 0; i < linhasA; i++)
    for(int j = 0; j < colunasA; j++)
      scanf("%f", &a[i][j]);

  // SEGUNDA MATRIZ: TAMANHO
  int linhasB, colunasB;
  printf("Numeros de linhas da segunda matriz: ");
  scanf("%d", &linhasB);
  printf("Numeros de colunas da segunda matriz: ");
  scanf("%d", &colunasB);

  // SEGUNDA MATRIZ: LENDO
  float b[linhasB][colunasB];
  for(int i = 0; i < linhasB; i++)
    for(int j = 0; j < colunasB; j++)
      scanf("%f", &b[i][j]);
  
  // VERIFICANDO SE É POSSIVEL MULTIPLICAR AS MATRIZES
  if(linhasA != colunasB){
    printf("Nao eh possivel fazer a multiplicacao!\n");
  } else {
    float resultado[linhasA][colunasB], soma;
    for(int i = 0; i < linhasA; i++){
      for(int j = 0; j < colunasB; j++){
        soma = 0;
        for(int k = 0; k < colunasA; k++){
          soma += a[i][k] * b[k][j];
        }
        resultado[i][j] = soma;
        printf("%.2f ", resultado[i][j]);
      }
      printf("\n");
    }
  }
  
  return 0;
}