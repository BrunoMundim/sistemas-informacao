#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int flagMaiusculo = 0, flagMinusculo = 0, flagDigito = 0, contadorRepetido = 0, contadorRepetidoFinal = 0;
  int contadorErros = 0, grupos = 0, contRep = 0, jAtual = 0;
  char password[60];
  fgets(password, 60, stdin);
  int N = strlen(password) - 2;
  int tamanhoReal = strlen(password) - 14;

  for(int i = 12; i < N; i++){
    if(password[i] <= 90 && password[i] >= 65)
      flagMaiusculo = 1;
    if(password[i] <= 122 && password[i] >= 97)
      flagMinusculo = 1;
    if(password[i] <= 57 && password[i] >= 48)
      flagDigito = 1;    
    // Verificar 3 repetidos
    for(int j = i+1; j < N; j++){
      if(j < jAtual)
        break;
      if(password[i] == password[j]){
        jAtual = j;
        contRep++;
      } else if(contRep >= 3){
        grupos++;
        contadorRepetido += (int) contRep/3.0;
        contRep = 0;
        break;
      } else {
        contRep = 0;
        break;
      }
    }
  }
  printf("%d\n", contadorRepetido);
  printf("%d\n", grupos);

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

  printf("%d\n", contadorErros);

  return 0;
}