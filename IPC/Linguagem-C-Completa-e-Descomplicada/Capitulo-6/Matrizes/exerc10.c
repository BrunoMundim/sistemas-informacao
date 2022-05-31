#include <stdio.h>

int main()
{
  float matriz[10][3], piorNotaAtual;
  int piorNota[3];
  for (int i = 0; i < 10; i++){
    printf("Notas do aluno %d: ", i + 1);
    for (int j = 0; j < 3; j++) {
      scanf("%f", &matriz[i][j]);
      if (j == 0) {
        piorNota[i] = j + 1;
        piorNotaAtual = matriz[i][j];
      }
      if (matriz[i][j] < piorNotaAtual){
        piorNota[i] = j + 1;
        piorNotaAtual = matriz[i][j];
      }        
    }
  }
  
  for(int i = 0; i < 10; i++){
    printf("A pior nota do aluno %d foi a da %d prova!\n", i+1, piorNota[i]);
  }
  return 0;
}