#include <stdio.h>

int main(){
  int T;
  int PA, PB;
  double G1, G2;

  scanf("%d", &T);
  for(int i = 0; i < T; i++){
    scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
    int cont = 0;
    while(PA <= PB && cont < 101){
      PA = (int)((PA*(100+G1))/100);
      PB = (int)((PB*(100+G2))/100);
      cont++;
    }
    if(cont > 100){
      printf("Mais de 1 seculo.\n");
    } else {
      printf("%d anos.\n", cont);
    }
  }

  return 0;
}