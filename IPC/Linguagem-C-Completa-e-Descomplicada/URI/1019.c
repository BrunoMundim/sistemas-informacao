#include <stdio.h>
 
int main() {
    int tempoEmSegundos, horas, minutos;
    horas = minutos = 0;
    scanf("%d", &tempoEmSegundos);
    while(tempoEmSegundos >= 3600){
      horas++;
      tempoEmSegundos -= 3600;
    }
    while(tempoEmSegundos >= 60){
      minutos++;
      tempoEmSegundos -= 60;
    }
    printf("%d:%d:%d\n", horas, minutos, tempoEmSegundos);

    return 0;
}
