#include <stdio.h>
#include <string.h>

int main()
{
  char str[100], vowel[1];
  printf("Digite sua frase: ");
  fgets(str, 100, stdin);
  printf("Digite o caracter para substituir as vogais: ");
  scanf("%c", &vowel[0]);
  int vowels[30] = { 65, 69, 73, 79, 85, 97, 101, 105, 111, 117, 160, 130, 161, 162, 163, 181, 144, 214, 224, 233, 132, 137, 139, 148, 129, 142, 211, 216, 153, 154 };

  // Contar as vogais e substituir pelo caracter solicitado
  int contador = 0;
  for (int i = 0; i < strlen(str) - 2; i++)
  {
    for(int j = 0; j < 30; j++){
      if(str[i] == vowels[j]){
        str[i] = vowel[0];
        contador++;
      }
    }
  }
  printf("A frase tinha %d vogais!\n", contador);
  printf("%s", str);

  return 0;
}