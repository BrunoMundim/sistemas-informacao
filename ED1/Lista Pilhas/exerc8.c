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

bool copiarPilha(Pilha *original, Pilha *copia)
{
  Pilha aux;
  criarPilha(&aux);
  char itemAux;
  while(pilhaVazia(*original) == false){
    desempilhar(original, &itemAux);
    empilhar(&aux, itemAux);
  }
  while(pilhaVazia(aux) == false){
    desempilhar(&aux, &itemAux);
    empilhar(original, itemAux);
    empilhar(copia, itemAux);
  }
}

int main()
{
  Pilha pilha1;
  criarPilha(&pilha1);
  Pilha pilha2;
  criarPilha(&pilha2);

  for (int i = 0; i < 10; i++)
  {
    empilhar(&pilha1, 'a');
  }
  copiarPilha(&pilha1, &pilha2);
  empilhar(&pilha2, 'b');
}
