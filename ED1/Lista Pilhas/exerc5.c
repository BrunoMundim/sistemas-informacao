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

bool verificarParenteses(char string[100]){
  Pilha p;
  criarPilha(&p);
  char item;

  for(int i = 0; i < strlen(string); i++){
    if(string[i] == '(')
      empilhar(&p, string[i]);
    if(string[i] == ')'){
      if(pilhaVazia(p) == true) return false;
      desempilhar(&p, &item);
    }
  }
  return true;
}

int main()
{
  char palavra[MAX];
  printf("Digite sua expressao: ");
  fgets(palavra, MAX, stdin);

  if(verificarParenteses(palavra) == true)
    printf("Os parenteses da expressao estao corretos!\n\n");
  else
    printf("Os parenteses da expressao nao estao corretos!\n\n");
}
