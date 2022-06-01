#include <stdio.h>

int main(){
  float nota, media;
  int repetir, contador = 0;
  while(contador != 2){
    repetir = 0;
    if(contador == 0)
      media = 0;
    scanf("%f", &nota);
    if(nota >= 0 && nota <= 10){
      media += nota;
      contador++;
    }      
    else
      printf("nota invalida\n");
    if(contador == 2){
      printf("media = %.2f\n", media/2);
      while(repetir != 1 && repetir != 2){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &repetir);
      }
      if(repetir == 1)
        contador = 0;
    }           
  }  

  return 0;
}