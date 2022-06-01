#include <stdio.h>

int main(){
  int golsGremio, golsInter, vGremio = 0, vInter = 0, jogos = 0, repetir;
  while(1){
    repetir = golsInter = golsGremio = 0;
    scanf("%d %d", &golsInter, &golsGremio);
    if(golsInter > golsGremio)
      vInter++;
    else
      vGremio++;
    while(repetir != 1 && repetir != 2){
      printf("Novo grenal (1-sim 2-nao)\n");
      scanf("%d", &repetir);
    }
    jogos++;
    if(repetir == 2)
      break;
  }
  printf("%d grenais\n", jogos);
  printf("Inter:%d\n", vInter);
  printf("Gremio:%d\n", vGremio);
  printf("Empates:%d\n", jogos - vGremio - vInter);
  if(vInter > vGremio)
    printf("Inter venceu mais\n");
  else if(vGremio > vInter)
    printf("Gremio venceu mais\n");
  else
    printf("Nao houve vencedor\n");

  return 0;
}