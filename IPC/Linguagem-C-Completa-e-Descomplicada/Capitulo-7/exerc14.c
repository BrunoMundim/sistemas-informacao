#include <stdio.h>
#include <string.h>

int main()
{
  char str[100];
  printf("Digite a sua frase: ");
  fgets(str, 100, stdin);
  int cypher;
  printf("Qual sua cifra(numero inteiro): ");
  scanf("%d", &cypher);

  for(int i = 0; i < strlen(str); i++){
    // Letras minusculas
    if(str[i] >= 97 && str[i] <= 122){
      if(str[i] + cypher > 122){
        str[i] += cypher - 25;
      } else {
        str[i] += cypher;
      }
    }
    // Letras maiusculas
    if(str[i] >= 65 && str[i] <= 90){
      if(str[i] + cypher > 90){
        str[i] += cypher - 25;
      } else {
        str[i] += cypher;
      }
    }
  }
  printf("%s", str);

  return 0;
}