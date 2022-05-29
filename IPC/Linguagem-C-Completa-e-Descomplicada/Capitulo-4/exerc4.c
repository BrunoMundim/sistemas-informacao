#include <stdio.h>

int main(){
  float salario, emprestimo;
  scanf("%f %f", &salario, &emprestimo);
  
  if(emprestimo > 0.2 * salario)
    printf("Emprestimo nao concedido!\n");
  else
    printf("Emprestimo concedido!\n");

  return 0;
}