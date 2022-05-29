#include <stdio.h>

int main(){
  float valorDoProduto;
  char estado[2];
  printf("Valor do produto: ");
  scanf("%f", &valorDoProduto);
  printf("Estado(MG, SP, RJ, MS): ");
  scanf("%s", &estado);

  if(estado[0] == 'M' && estado[1] == 'G')
    printf("Preco final: R$ %.2f\n", valorDoProduto * 1.07);
  else if(estado[0] == 'S' && estado[1] == 'P')
    printf("Preco final: R$ %.2f\n", valorDoProduto * 1.12);
  else if(estado[0] == 'R' && estado[1] == 'J')
    printf("Preco final: R$ %.2f\n", valorDoProduto * 1.15);
  else if(estado[0] == 'M' && estado[1] == 'S')
    printf("Preco final: R$ %.2f\n", valorDoProduto * 1.08);
  else
    printf("Estado invalido!\n");

  return 0;
}