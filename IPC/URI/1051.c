#include <stdio.h>

int main()
{
  float salario, taxa;
  scanf("%f", &salario);
  if(salario <= 2000){
    printf("Isento\n");
  } else if(salario <= 3000){
    taxa = (salario - 2000) * 0.08;
    printf("R$ %.2f\n", taxa);
  } else if(salario <= 4500){
    taxa = ((3000-2000) * 0.08) + ((salario-3000) * 0.18);
    printf("R$ %.2f\n", taxa);
  } else{
    taxa = ((3000-2000)* 0.08) + ((4500-3000)* 0.18) + ((salario-4500)* 0.28);
    printf("R$ %.2f\n", taxa);
  }

  return 0;
}
