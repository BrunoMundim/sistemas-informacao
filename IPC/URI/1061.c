#include <stdio.h>

int main()
{
  int dataInicial, dataFinal, horaInicial, horaFinal, minutoInicial, minutoFinal, segundoInicial, segundoFinal;

  scanf("Dia %d", &dataInicial);
  scanf("%d : %d : %d\n", &horaInicial, &minutoInicial, &segundoInicial);
  scanf("Dia %d", &dataFinal);
  scanf("%d : %d : %d\n", &horaFinal, &minutoFinal, &segundoFinal);

  dataFinal = dataFinal - dataInicial;
  horaFinal = horaFinal - horaInicial;
  minutoFinal = minutoFinal - minutoInicial;
  segundoFinal = segundoFinal - segundoInicial;

  if (segundoFinal < 0)
  {
    segundoFinal += 60;
    minutoFinal--;
  }
  if (minutoFinal < 0)
  {
    minutoFinal += 60;
    horaFinal--;
  }
  if (horaFinal < 0)
  {
    horaFinal += 24;
    dataFinal--;
  }

  printf("%d dia(s)\n", dataFinal);
  printf("%d hora(s)\n", horaFinal);
  printf("%d minuto(s)\n", minutoFinal);
  printf("%d segundo(s)\n", segundoFinal);

  return 0;
}
