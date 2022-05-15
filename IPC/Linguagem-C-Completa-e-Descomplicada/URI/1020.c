#include <stdio.h>
 
int main() {
    int idadeEmDias, anos, meses;
    anos = meses = 0;
    scanf("%d", &idadeEmDias);
    while(idadeEmDias >= 365){
      anos++;
      idadeEmDias -= 365;
    }
    while(idadeEmDias >= 30){
      meses++;
      idadeEmDias -= 30;
    }
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, idadeEmDias);
    
    return 0;
}
