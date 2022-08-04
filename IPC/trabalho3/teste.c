#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int flagMaiusculo = 0, flagMinusculo = 0, flagDigito = 0, contadorRepetido = 0;
  int contadorErros = 0;
  char string[60];
  fgets(string, 60, stdin);
  int N = strlen(string) - 2;
  int tamanhoReal = strlen(string) - 14;

  for(int i = 12; i < N; i++){
    if(string[i] <= 90 && string[i] >= 65)
      flagMaiusculo = 1;
    if(string[i] <= 122 && string[i] >= 97)
      flagMinusculo = 1;
    if(string[i] <= 57 && string[i] >= 48)
      flagDigito = 1;    
    // Verificar 3 repetidos
    for(int j = i+1; j < N; j++){
      if(contadorRepetido == 2){        
        break;
      }
      if(string[i] == string[j]){
        contadorRepetido++;
      } else {
        contadorRepetido = 0;
        break;
      }      
    }
  }

  int contadorLetrasFaltando = 0;
  if(tamanhoReal < 6)
    contadorLetrasFaltando += 6 - tamanhoReal;
  if(tamanhoReal > 20)
    contadorLetrasFaltando += tamanhoReal - 20;
  if(contadorRepetido == 2){
    contadorErros++;
    contadorLetrasFaltando--;
  }    
  if(!flagMaiusculo){
    contadorErros++;
    contadorLetrasFaltando--;
  }
  if(!flagMinusculo){
    contadorErros++;
    contadorLetrasFaltando--;
  }
  if(!flagDigito){
    contadorErros++;
    contadorLetrasFaltando--;
  }
  if(contadorLetrasFaltando >= 0)
    contadorErros += contadorLetrasFaltando;
  printf("%d\n", contadorErros);

  return 0;
}