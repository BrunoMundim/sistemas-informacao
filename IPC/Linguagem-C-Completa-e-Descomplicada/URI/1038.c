#include <stdio.h>

int main()
{
  int codigo, quantidade;
  scanf("%d %d", &codigo, &quantidade);
  if(codigo == 1) printf("Total: R$ %.2f\n", (4.00*quantidade));
  if(codigo == 2) printf("Total: R$ %.2f\n", (4.50*quantidade));
  if(codigo == 3) printf("Total: R$ %.2f\n", (5.00*quantidade));
  if(codigo == 4) printf("Total: R$ %.2f\n", (2.00*quantidade));
  if(codigo == 5) printf("Total: R$ %.2f\n", (1.50*quantidade));

  return 0;
}
