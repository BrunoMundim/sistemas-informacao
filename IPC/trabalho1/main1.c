#include <stdio.h>

int main()
{
  float A[3] = {170, 151.3, 139.2}, 
        B[3] = {153, 136.17, 125.28}, 
        C[3] = {139.23, 123.91, 112.76}, 
        D[3] = {128.09, 117.84, 104.88};
  int quebrados;
  char tipo[1];

  printf("Qual o tipo do trigo? ");
  scanf("%c", &tipo[0]);
  printf("Quantos graos quebrados por amostra? ");
  scanf("%d", &quebrados);

  if(quebrados < 3 || quebrados > 5)
    printf("Quantidade de graos quebrados invalido!\n");
  else{
    if(tipo[0] == 'A')
      printf("O preco da saca eh: R$%.2f\n", A[quebrados - 3]);
    else if(tipo[0] == 'B')
      printf("O preco da saca eh: R$%.2f\n", B[quebrados - 3]);
    else if(tipo[0] == 'C')
      printf("O preco da saca eh: R$%.2f\n", C[quebrados - 3]);
    else if(tipo[0] == 'D')
      printf("O preco da saca eh: R$%.2f\n", B[quebrados - 3]);
    else
      printf("Tipo invalido!\n");
  }
  

  return 0;
}