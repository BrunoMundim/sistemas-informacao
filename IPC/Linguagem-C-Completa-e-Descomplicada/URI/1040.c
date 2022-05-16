#include <stdio.h>

int main()
{
  double n1, n2, n3, n4, media, novoExame, novaMedia;
  scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);

  media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
  printf("Media: %.1f\n", media);
  if (media >= 7.0)
    printf("Aluno aprovado.\n");
  else if (media >= 5.0)
  {
    printf("Aluno em exame.\n");
    scanf("%lf", &novoExame);
    printf("Nota do exame: %.1f\n", novoExame);
    novaMedia = (media + novoExame) / 2;
    if (novaMedia > 5.0)
      printf("Aluno aprovado.\n");
    else
    {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", novaMedia);
  }
  else
    printf("Aluno reprovado.\n");

  return 0;
}