#include <stdio.h>
#include <stdlib.h>
 
int main() {
  int L;
  char T[2];
  double **matriz = (double**) malloc(12*sizeof(double*));  
  scanf("%d", &L);
  scanf("%s", &T);
  double soma = 0;

  for(int i = 0; i < 12; i++){
    matriz[i] = (double*) malloc(12*sizeof(double));
    for(int j = 0; j < 12; j++){
      scanf("%lf", &matriz[i][j]);
      if(i == L)
        soma += matriz[i][j];
    }    
  }
  
  if(T[0] == 'S' || T[0] == 's')
    printf("%.1lf\n", soma);
  else if(T[0] == 'M' || T[0] == 'm')
    printf("%.1lf\n", (soma/12.0));

  return 0;
}