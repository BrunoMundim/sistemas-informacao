#include <stdio.h>

int main(){
  char tipoOperacao;
  float valor1, valor2;
  printf("Escolha uma operacao (+, -, *, /): ");
  scanf("%s", &tipoOperacao);
  printf("Escolha dois valores: ");
  scanf("%f %f", &valor1, &valor2);

  switch (tipoOperacao)
  {
  case '+':
    printf("Resultado: %.2f\n", valor1 + valor2);
    break;
  case '-':
    printf("Resultado: %.2f\n", valor1 - valor2);
    break;
  case '*':
    printf("Resultado: %.2f\n", valor1 * valor2);
    break;
  case '/':
    printf("Resultado: %.2f\n", valor1 / valor2);
    break;  
  default:
    printf("Entrada invalida!\n");
    break;
  }

  return 0;
}