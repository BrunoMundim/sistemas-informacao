#include <stdio.h>

int main()
{
  int numeroDeCasos, i;
  float nota1, nota2, nota3;
  scanf("%d", &numeroDeCasos);

  for(i = 0; i < numeroDeCasos; i++){
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("%.1f\n", (nota1 * 2 + nota2 * 3 + nota3 * 5)/10);
  }

  return 0;
}
