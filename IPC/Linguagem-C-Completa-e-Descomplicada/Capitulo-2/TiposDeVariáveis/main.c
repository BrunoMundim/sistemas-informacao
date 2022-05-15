#include <stdio.h>
#include <stdlib.h>

main()
{
  char character = 'a';
  char number = 10;

  int decimal = 1459;      // Valor em decimal
  int octal = 0435;        // Valor em octal
  int hexadecimal = 0x1FA; // Valor em hexadecimal
  printf("Valor decimal: %d\n", decimal);
  printf("Valor octal: %d\n", octal);
  printf("Valor hexadecimal: %d\n", hexadecimal);

  float flutuante = 3.2;
  double flutuanteDouble = 15.673;
  printf("Valor flutuante: %f\n", flutuante);
  // Importante usar o %f no lugar do %d
  printf("Valor flutuante com dupla precisao: %f\n", flutuanteDouble);
  // Usando notação científica
  float notacao = 1.2e3;
  printf("Notacao cientifica: %f\n", notacao);

  system("pause");
  return 0;
}
