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
  for(int i = menor + 1; i < maior; i++){
    if(i % 5 == 2 || i % 5 == 3)
      printf("%d\n", i);
  }
  
  return 0;
}