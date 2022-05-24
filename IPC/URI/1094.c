#include <stdio.h>

int main()
{
  int numeroDeExperimentos, numeroDeCobaias, i, totalDeCobaias;
  int rato = 0, sapo = 0, coelho = 0;
  char tipoDeCobaia;

  scanf("%d", &numeroDeExperimentos);

  for(i = 0; i < numeroDeExperimentos; i++){
    scanf("%d %c", &numeroDeCobaias, &tipoDeCobaia);
    if(tipoDeCobaia == 'R') rato += numeroDeCobaias;
    else if(tipoDeCobaia == 'S') sapo += numeroDeCobaias;
    else if(tipoDeCobaia == 'C') coelho += numeroDeCobaias;
  }

  totalDeCobaias = rato + sapo + coelho;
  printf("Total: %d cobaias\n", totalDeCobaias);
  printf("Total de coelhos: %d\n", coelho);
  printf("Total de ratos: %d\n", rato);
  printf("Total de sapos: %d\n", sapo);
  printf("Percentual de coelhos: %.2f %%\n", (float)coelho * 100.0 / totalDeCobaias);
  printf("Percentual de ratos: %.2f %%\n", (float)rato * 100.0 / totalDeCobaias);
  printf("Percentual de sapos: %.2f %%\n", (float)sapo * 100.0 / totalDeCobaias);

  return 0;
}
