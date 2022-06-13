#include <stdio.h>
#include <string.h>

int main(){
  char frase[20];
  printf("Digite sua frase: ");
  fgets(frase, 20, stdin);
  for(int i = 0; i < strlen(frase); i++){
    if(frase[i] >= 97 && frase[i] <= 122){
      frase[i] = frase[i] - 32;
    }
  }
  printf("Sua frase uppercased eh: %s\n", frase);

  return 0;
}