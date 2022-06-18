#include <stdio.h>
#include <string.h>

int main(){
  char str1[21], str2[20];
  printf("Digite a primeira frase: ");
  fgets(str1, 21, stdin);
  printf("Digite a segunda frase: ");
  fgets(str2, 20, stdin);

  int contador, repeticoes = 0;
  int flag;
  for(int i = 0; i < strlen(str1); i++){
    if(str1[i] == str2[0]){
      contador = i;
      flag = 1;
      for(int j = 1; j < strlen(str2) - 1; j++){
        contador++;
        if(str1[contador] != str2[j]){
          flag = 0;
          break;
        }          
      }
      if(flag == 1)
        repeticoes++;
    }
  }
  
  if(repeticoes > 0){
    printf("A segunda frase esta contida na primeira %d vez(es)!\n", repeticoes);
  } else {
    printf("A segunda frase nao esta contida na primeira!\n");
  }

  return 0;
}