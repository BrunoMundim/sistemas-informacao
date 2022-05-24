#include <stdio.h>

int main()
{
  float salario, novoSalario;
  int percentual;
  scanf("%f", &salario);
  if (salario > 2000) {
    percentual = 4;
    novoSalario = salario * 1.04;
  } else if (salario > 1200) {
    percentual = 7;
    novoSalario = salario * 1.07;
  } else if (salario > 800) {
    percentual = 10;
    novoSalario = salario * 1.1;
  } else if (salario > 400) {
    percentual = 12;
    novoSalario = salario * 1.12;
  } else {
    percentual = 15;
    novoSalario = salario * 1.15;
  }
  printf("Novo salario: %.2f\n", novoSalario);
  printf("Reajuste ganho: %.2f\n", novoSalario - salario);
  printf("Em percentual: %d %%\n", percentual);

  return 0;
}
