#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX 100

struct pilha
{
  char elemento[MAX];
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

bool empilhar(Pilha *p, char c)
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

bool desempilhar(Pilha *p, char *c)
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

bool pilhasIguais(Pilha *p1, Pilha *p2)
{
  if (pilhaVazia(*p1) == true && pilhaVazia(*p2) == true)
    return true;
  else if (pilhaVazia(*p1) == true || pilhaVazia(*p2) == true)
    return false;

  Pilha guardarP1;
  criarPilha(&guardarP1);
  Pilha guardarP2;
  criarPilha(&guardarP2);
  char item1;
  char item2;

  for (int i = 0; pilhaVazia(*p1) == false && pilhaVazia(*p2) == false; i++)
  {
    desempilhar(p1, &item1);
    desempilhar(p2, &item2);
    if (item1 != item2)
    {
      while (pilhaVazia(guardarP1) == false)
      {
        desempilhar(&guardarP1, &item1);
        desempilhar(&guardarP2, &item2);
        empilhar(p1, item1);
        empilhar(p2, item2);
      }
      return false;
    }
    empilhar(&guardarP1, item1);
    empilhar(&guardarP2, item2);
  }

  if (pilhaVazia(*p1) == true && pilhaVazia(*p2) == true)
  {
    while (pilhaVazia(guardarP1) == false)
    {
      desempilhar(&guardarP1, &item1);
      desempilhar(&guardarP2, &item2);
      empilhar(p1, item1);
      empilhar(p2, item2);
    }
    return true;
  }
  else
  {
    while (pilhaVazia(guardarP1) == false)
    {
      desempilhar(&guardarP1, &item1);
      desempilhar(&guardarP2, &item2);
      empilhar(p1, item1);
      empilhar(p2, item2);
    }
    return false;
  }
}

int main()
{
  Pilha pilha1;
  criarPilha(&pilha1);
  Pilha pilha2;
  criarPilha(&pilha2);
  char letra = 'a';

  for (int i = 0; i < 10; i++)
  {
    empilhar(&pilha1, letra);
    empilhar(&pilha2, letra);
  }
  empilhar(&pilha2, letra);
  if(pilhasIguais(&pilha1, &pilha2) == true){
    printf("As pilhas sao iguais\n");
  }
  else {
    printf("As pilhas nao sao iguais\n");
  }
}
