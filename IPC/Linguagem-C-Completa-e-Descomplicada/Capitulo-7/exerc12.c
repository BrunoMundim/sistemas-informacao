#include <stdio.h>
#include <string.h>

int main(){
  char product[100];
  printf("Digite o nome do produto: ");
  fgets(product, 100, stdin);
  
  printf("Digite o preco do produto: ");
  float price;
  scanf("%f", &price);

  printf("Qual a quantidade de produtos comprados: ");
  int qtd;
  scanf("%d", &qtd);

  printf("\n");
  float total = price * qtd, discount = total * 0.1;
  printf("Produto: %sValor total: R$%.2f\nValor desconto: R$%.2f\nValor a vista: R$%.2f\n", product, total, discount, total - discount);

  return 0;
}