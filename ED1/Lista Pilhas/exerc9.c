#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>

#define MAX 100

struct pilha
{
  int elemento[MAX];
  int topo;
};
typedef struct pilha Pilha;

void criarPilha(Pilha *p)
{
  p->topo = -1;
}

void destruirPilha(Pilha *p)
{
  p->topo = -1;
}

bool pilhaVazia(Pilha p)
{
  if (p.topo == -1)
    return true;
  return false;
}

bool pilhaCheia(Pilha p)
{
  if (p.topo == (MAX - 1))
    return true;
  return false;
}

bool empilhar(Pilha *p, int c)
{
  if (pilhaCheia(*p) == true)
    return false;
  else
  {
    p->topo++;
    p->elemento[p->topo] = c;
    return true;
  }
}

bool desempilhar(Pilha *p, int *c)
{
  if (pilhaVazia(*p) == true)
    return false;
  else
  {
    *c = p->elemento[p->topo];
    p->topo--;
    return true;
  }
}

int decimalOctalBinario(int decimal, int tipo)
{
  // Funciona com octal e binario
  Pilha convertido;
  criarPilha(&convertido);
  int atualDecimal = decimal;
  double contador = 0;

  // Transformando de decimal para binario
  while (atualDecimal > (tipo - 1))
  {
    empilhar(&convertido, (atualDecimal % tipo));
    atualDecimal = atualDecimal / tipo;
    contador++;
  }
  empilhar(&convertido, atualDecimal);
  int convertidoFinal = 0;

  // Definindo o bit mais forte
  int multiplicador = 1;
  for (int i = 0; i < contador; i++)
    multiplicador *= 10;

  if (tipo == 2 || tipo == 8)
  {
    // Transformando a pilha em int
    for (int i = 0; i <= contador; i++)
    {
      int aux;
      desempilhar(&convertido, &aux);
      convertidoFinal += aux * multiplicador;
      multiplicador /= 10;
    }
  }

  return convertidoFinal;
}

void decimalHexa(int decimal, char *hexa)
{
  // Funciona com octal e binario
  Pilha convertido;
  criarPilha(&convertido);
  int atualDecimal = decimal;
  int contador = 0;

  // Transformando de decimal para binario
  while (atualDecimal > 16)
  {
    empilhar(&convertido, (atualDecimal % 16));
    atualDecimal = atualDecimal / 16;
    contador++;
  }
  empilhar(&convertido, atualDecimal);

  for (int i = 0; i <= contador; i++)
  {
    int aux;
    desempilhar(&convertido, &aux);
    if (aux >= 0 && aux <= 9)
      hexa[i] = aux + 48;
    else
    {
      hexa[i] = aux + 55;
    }
  }
  hexa[contador+1] = '\n';
}

int main()
{
  int decimal = 90;
  int binario = decimalOctalBinario(decimal, 2);
  int octal = decimalOctalBinario(decimal, 8);
  char hexa[20];
  decimalHexa(decimal, hexa);

  printf("Binario: %d\n", binario);
  printf("Octal: %d\n", octal);
  printf("Hexadecimal: %s\n", hexa);
}
