#include <stdio.h>
#include <string.h>

int main(){
  char str[20];
  printf("Digite a sua frase: ");
  fgets(str, 100, stdin);

  int contador = strlen(str) - 2;
  int flag = 1;
  for(int i = 0; i <= contador/2; i++){
    if(str[i] != str[contador - i]){
      flag = 0;
      break;
    }
  }
  
  if(flag == 1){
    printf("Eh um palidromo!\n");
  } else {
    printf("Nao eh um palidromo!\n");
  }

  return 0;
}