#include <stdio.h>
#include <string.h>

int main(){
  char str[100];
  printf("Digite sua frase: ");
  fgets(str, 100, stdin);
  // Para remover o \n o contador deve começar com -1
  int contador = -1;
  for(int i = 0; i < 100; i++){
    if(str[i] == '\0')
      break;
    if(str[i] == ' ')
      continue;
    contador++;
  }  
  printf("A frase tem %d letras.\n", contador);

  return 0;
}