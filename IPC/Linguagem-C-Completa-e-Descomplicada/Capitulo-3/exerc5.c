#include <stdio.h>

int main(){
  int idade, anoAtual = 0;
  char jaFezAniversario;
  printf("Voce ja fez aniversario esse ano?(S ou N) ");
  scanf("%s", &jaFezAniversario);
  printf("Qual sua idade? ");
  scanf("%d", &idade);
  printf("Qual o ano atual? ");
  scanf("%d", &anoAtual);
  
  if(jaFezAniversario == 'S'){
    printf("O ano de nascimento eh: %d", anoAtual - idade);
  } else {
    printf("O ano de nascimento eh: %d", anoAtual - idade - 1);
  }
  
  return 0;
}