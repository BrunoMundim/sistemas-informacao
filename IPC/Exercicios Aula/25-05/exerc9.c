#include <stdio.h>

int main(){
  int entrada;
  printf("Digite o numero que voce quer saber os divisores: ");
  scanf("%d", &entrada);

  printf("Divisores: ");
  for(int i = 1; i <= entrada; i++){    
    if(entrada % i == 0){
      printf("%d ", i);
    }    
  }

  return 0;
}