#include <stdio.h>

int main(){
  int x, y, z, tipo;
  scanf("%d %d %d", &x, &y, &z);
  printf("Escolha o tipo de media: ");
  scanf("%d", &tipo);

  if(tipo == 1)
    printf("Media geometrica: %.2f\n", pow(x * y * z, 1.0/3.0));
  else if(tipo == 2)
    printf("Media ponderada: %.2f\n", ((x+2)*(y+3)*z)/6.0);
  else if(tipo == 3)
    printf("Media harmonica: %.2f\n", (3.0)/((1.0/x)+(1.0/y)+(1.0/z)));
  else if(tipo == 4)
    printf("Media aritmetica: %.2f\n", (x+y+z)/3.0);
  else
    printf("Tipo invalido!\n");


  return 0;
}