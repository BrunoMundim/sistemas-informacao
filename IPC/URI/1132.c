#include <stdio.h>

int main(){
  int A, B, maior, menor, soma = 0;
  scanf("%d %d", &A, &B);
  if(A > B){
    maior = A;
    menor = B;
  } else {
    maior = B;
    menor = A;
  }
  for(int i = menor; i <= maior; i++){
    if(i % 13 != 0)
      soma += i;
  }
  printf("%d\n", soma);
  
  return 0;
}