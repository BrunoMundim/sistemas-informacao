#include <stdio.h>
#include <string.h>

int main(){
  char frase[20];
  printf("Digite sua frase: ");
  fgets(frase, 20, stdin);
  for(int i = 0; i < strlen(frase); i++){
    if(frase[i] >= 65 && frase[i] <= 90){
      frase[i] = frase[i] + 32;
    }
  }
  printf("Sua frase lowercase eh: %s\n", frase);

  return 0;
}