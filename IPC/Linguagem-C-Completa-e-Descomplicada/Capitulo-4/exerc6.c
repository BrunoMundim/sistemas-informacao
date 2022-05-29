#include <stdio.h>

int main(){
  float altura;
  char sexo;
  printf("Qual sua altura em cm? ");
  scanf("%f", &altura);
  printf("Qual seu sexo biologico (M/F)? ");
  scanf("%s", &sexo);

  if(sexo == 'M' || sexo == 'm')
    printf("Seu peso ideal eh: %.1f kg\n", (altura * 72.7)/100 - 58);
  else if(sexo == 'F' || sexo == 'f')
    printf("Seu peso ideal eh: %.1f kg\n", (altura * 62.1) - 44.7);
  else{
    printf("Entrada de genero invalida!\n");
  }

  return 0;
}