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

int diferencaTamanhoPilhas(Pilha *p1, Pilha *p2){
  // 0 - Pilhas iguais
  // > 0 - Pilha 1 maior que pilha 2
  // < 0 - Pilha 2 maior que pilha 1
  Pilha p;
  criarPilha(&p);  

  // Contando tamanho pilha 1
  // Removendo valores pilha 1
  int tamanhoPilha1 = 0;
  while(pilhaVazia(*p1) == false){
    char item;
    desempilhar(p1, &item);
    tamanhoPilha1++;
    empilhar(&p, item);
  }
  // Reinserindo valores pilha 1
  while(pilhaVazia(p) == false){
    char item;
    desempilhar(&p, &item);
    empilhar(p1, item);
  }

  // Contando tamanho pilha 2
  // Removendo valores pilha 2
  int tamanhoPilha2 = 0;
  while(pilhaVazia(*p2) == false){
    char item;
    desempilhar(p2, &item);    
    empilhar(&p, item);
    tamanhoPilha2++;
  }
  // Reinserindo valores pilha 2
  while(pilhaVazia(p) == false){
    char item;
    desempilhar(&p, &item);
    empilhar(p2, item);
  }

  return (tamanhoPilha1 - tamanhoPilha2);
}

int main()
{
  Pilha pilha1;
  criarPilha(&pilha1);
  Pilha pilha2;
  criarPilha(&pilha2);
  char letra = 'a';


  for(int i = 0; i < 10; i++){
    empilhar(&pilha1, letra);
    empilhar(&pilha2, letra);
  }
  empilhar(&pilha2, 'b');
  printf("%d\n", diferencaTamanhoPilhas(&pilha1, &pilha2));

}
