#include <stdio.h>

int main(){
  int tipo = 0, alcool = 0, gasolina = 0, diesel = 0;
  while(tipo != 4){
    scanf("%d", &tipo);
    switch (tipo) {
    case 1:
      alcool++;
      break;
    case 2:
      gasolina++;
      break;
    case 3:
      diesel++;
      break;
    default:
      break;
    }
  }
  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);

  return 0;
}