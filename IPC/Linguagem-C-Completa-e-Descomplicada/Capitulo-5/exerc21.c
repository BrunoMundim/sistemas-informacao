#include <stdio.h>

int main(){
  int N, contador = 0;
  float numero, maior, menor;
  printf("Quantos numeros deseja digitar? ");
  scanf("%d", &N);
  for(int i = 1; i <= N; i++){
    printf("Digite o %d numero: ", i);
    scanf("%f", &numero);
    if(i == 0){
      maior = numero;
      menor = numero;
      contador = 1;
    }
    if(numero > maior){
      maior = numero;
      contador = 0;
    }
    if(numero < menor){
      menor = numero;
    }      
    if(numero == maior){
      contador++;
    }
  }
  printf("O maior numero digitado foi: %.2f, que foi digitado %d vezes!\n", maior, contador);

  return 0;
}