#include <stdio.h>

int main()
{
  int M, N, maior, menor, soma;
  while (1)
  {
    soma = 0;
    scanf("%d %d", &M, &N);
    if (M <= 0 || N <= 0)
      break;
    if (M > N) {
      maior = M;
      menor = N;
    }
    else {
      maior = N;
      menor = M;
    }
    for (int i = menor; i <= maior; i++) {
      printf("%d ", i);
      soma += i;
    }
    printf("Sum=%d\n", soma);
  }

  return 0;
}