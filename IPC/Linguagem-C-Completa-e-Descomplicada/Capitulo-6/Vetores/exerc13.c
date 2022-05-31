#include <stdio.h>

int main(){
  int vetor[10], N, flag;
  for(int i = 0; i < 10;){
    flag = 0;
    printf("Digite o numero da posicao %d: ", i+1);
    scanf("%d", &N);
    for(int j = 0; j < i; j++){
      if(N == vetor[j])
        flag = 1;
    }
    if(flag == 0){
      vetor[i] = N;
      i++;
    }else{
      printf("Numero repetido!\n");
    }   
  }
  for(int i = 0; i < 10; i++)
    printf("%d ", vetor[i]);

  return 0;
}