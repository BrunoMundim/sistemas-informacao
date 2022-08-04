#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strongPasswordChecker(char * password){
  int flagMaiusculo = 0, flagMinusculo = 0, flagDigito = 0, contadorRepetido = 0;
  int contadorErros = 0, contadorRepetidoFinal = 0, iParaContador = 0;
  int N = strlen(password);

  for(int i = 0; i < N; i++){
    if(password[i] <= 90 && password[i] >= 65)
      flagMaiusculo = 1;
    if(password[i] <= 122 && password[i] >= 97)
      flagMinusculo = 1;
    if(password[i] <= 57 && password[i] >= 48)
      flagDigito = 1;    
    // Verificar 3 repetidos
    for(int j = i+1; j < N; j++){
      if(contadorRepetido == 2){
        break;
      }
      if(password[i] == password[j]){
        contadorRepetido++;
      } else {
        contadorRepetido = 0;
        break;
      }      
    }
    if(contadorRepetido == 2 && i > iParaContador){
       iParaContador = i+2;
       contadorRepetidoFinal++;
       contadorRepetido = 0;
    } 
  }
    printf("%d\n", contadorRepetidoFinal);

  int contadorLetrasFaltando = 0, contadorLetrasSobrando = 0;
  if(N < 6){
    contadorLetrasFaltando += 6 - N;
    contadorRepetidoFinal--;
  }    
  if(N > 20){
    contadorLetrasSobrando += N - 20;
    contadorRepetidoFinal -= contadorLetrasSobrando;
  }         
  if(flagMaiusculo != 1){
    contadorErros++;
    contadorLetrasFaltando--;
    contadorRepetidoFinal--;
  }
  if(flagMinusculo != 1){
    contadorErros++;
    contadorLetrasFaltando--;
    contadorRepetidoFinal--;
  }
  if(flagDigito != 1){
    contadorErros++;
    contadorLetrasFaltando--;
    contadorRepetidoFinal--;
  }
  printf("contadorErros: %d\n", contadorErros);
  printf("contadorRepetidoFinal: %d\n", contadorRepetidoFinal);
  if(contadorLetrasFaltando >= 0)
    contadorErros += contadorLetrasFaltando;
  if(contadorRepetidoFinal >= 0)
    contadorErros += contadorRepetidoFinal;
  contadorErros += contadorLetrasSobrando;
  printf("%d\n", N);

  return contadorErros;
}


