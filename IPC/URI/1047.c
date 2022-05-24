#include <stdio.h>

int main()
{
  int inicioHoras, fimHoras, horas, inicioMinutos, fimMinutos, minutos;
  scanf("%d %d %d %d", &inicioHoras, &inicioMinutos, &fimHoras, &fimMinutos);
  if(inicioHoras == fimHoras) horas = 24;
  else if(inicioHoras < fimHoras){
    horas = fimHoras - inicioHoras;
  }
  else{
    horas = (24 - inicioHoras) + fimHoras;
  }
  if(inicioMinutos == fimMinutos) minutos = 0;
  else if(inicioMinutos < fimMinutos) minutos = fimMinutos - inicioMinutos;
  else{
    horas--;
    minutos = (60 - inicioMinutos) + fimMinutos;
  }
  if(horas == 24 && minutos > 0) horas = 0;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

  return 0;
}
