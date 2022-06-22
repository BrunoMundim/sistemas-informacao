#include <stdio.h>
 
int main() {
  int par[5], impar[5], contPar = 0, contImpar = 0, numeroAtual;
  for(int i = 0; i < 15; i++){
    scanf("%d", &numeroAtual);
    if(numeroAtual % 2 == 0){
      if(contPar < 5){
        par[contPar] = numeroAtual;
        contPar++;
      } else {
        for(int j = 0; j < 5; j++){
          printf("par[%d] = %d\n", j, par[j]);
        }          
        contPar = 0;
        par[contPar] = numeroAtual;
        contPar++;
      }
    } else {
      if(contImpar < 5){
        impar[contImpar] = numeroAtual;
        contImpar++;
      } else {
        for(int j = 0; j < 5; j++)
          printf("impar[%d] = %d\n", j, impar[j]);
        contImpar = 0;
        impar[contImpar] = numeroAtual;
        contImpar++;
      }
    }
  }
  for(int i = 0; i < contImpar; i++){
    printf("impar[%d] = %d\n", i, impar[i]);
  } 
  for(int i = 0; i < contPar; i++){
    printf("par[%d] = %d\n", i, par[i]);
  } 
  
  return 0;
}