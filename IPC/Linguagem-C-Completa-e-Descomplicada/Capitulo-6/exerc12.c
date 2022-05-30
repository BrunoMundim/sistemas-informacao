#include <stdio.h>

int main(){
  int vetor[10], repetidos[10], a = 0, flag;
  for(int i = 0; i < 10; i++)
    scanf("%d", &vetor[i]);

  for(int i = 0; i < 10; i++){
    flag = 0;
    for(int j = 0; j < 10; j++){
      if(vetor[i] == vetor[j] && i != j){
        for(int k = 0; k < 10; k++){
          if(vetor[j] == repetidos[k])
            flag = 1;
        }
        if(flag == 0){
          repetidos[a] = vetor[i];
          a++;
        }
      }
    }
  }
  for(int i = 0; i < a; i++)
    printf("%d ", repetidos[i]);

  return 0;
}