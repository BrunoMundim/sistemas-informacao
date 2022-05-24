#include <stdio.h>

int main()
{
  double dinheiro;
  scanf("%lf", &dinheiro);
  // NOTA
  int cem, cinquenta, vinte, dez, cinco, dois;
  //  Valor restante após a operação NOTAS
  int restoCem, restoCinquenta, restoVinte, restoDez, restoCinco, restoDois;
  // MOEDAS
  int moedas100, moedas50, moedas25, moedas10, moedas5, moedas1;
  //  Valor restante após a operação NOTAS
  int restoMoedas, restoMoedas50, restoMoedas25, restoMoedas10, restoMoedas5;

  restoCem = (int)dinheiro;
  dinheiro -= restoCem;
  restoMoedas = dinheiro * 100;

  cem = restoCem / 100;
  restoCinquenta = restoCem % 100;
  cinquenta = restoCinquenta / 50;
  restoVinte = restoCinquenta % 50;
  vinte = restoVinte / 20;
  restoDez = restoVinte % 20;
  dez = restoDez / 10;
  restoCinco = restoDez % 10;
  cinco = restoCinco / 5;
  restoDois = restoCinco % 5;
  dois = restoDois / 2;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", cem);
  printf("%d nota(s) de R$ 50.00\n", cinquenta);
  printf("%d nota(s) de R$ 20.00\n", vinte);
  printf("%d nota(s) de R$ 10.00\n", dez);
  printf("%d nota(s) de R$ 5.00\n", cinco);
  printf("%d nota(s) de R$ 2.00\n", dois);

  // MOEDAS
  moedas100 = restoDois % 2;
  restoMoedas50 = restoMoedas % 100;
  moedas50 = restoMoedas50 / 50;
  restoMoedas25 = restoMoedas50 % 50;
  moedas25 = restoMoedas25 / 25;
  restoMoedas10 = restoMoedas25 % 25;
  moedas10 = restoMoedas10 / 10;
  restoMoedas5 = restoMoedas10 % 10;
  moedas5 = restoMoedas5 / 5;
  moedas1 = restoMoedas5 % 5;

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", moedas100);
  printf("%d moeda(s) de R$ 0.50\n", moedas50);
  printf("%d moeda(s) de R$ 0.25\n", moedas25);
  printf("%d moeda(s) de R$ 0.10\n", moedas10);
  printf("%d moeda(s) de R$ 0.05\n", moedas5);
  printf("%d moeda(s) de R$ 0.01\n", moedas1);

  return 0;
}
