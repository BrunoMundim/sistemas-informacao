#include <stdio.h>
#include <stdlib.h>
#include "aritmetica.c" // Inclui nossa biblioteca

int main(){
  int x,y,z;
  char ch;
  printf("Digite uma operacao matematica (+, -, /, *): ");
  ch = getchar();
  printf("Digite 2 numeros: ");
  scanf("%d %d",&x,&y);
  switch (ch){
  case '+': z = soma(x, y); break;
  case '-': z = subtracao(x, y); break;
  case '*': z = produto(x, y); break;
  case '/': z = divisao(x, y); break;  
  default: z = soma(x,y); break;
  }
  printf("Resultado = %d\n", z);

  system("pause");
  return 0;
}