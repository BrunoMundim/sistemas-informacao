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

// Exercício 4
bool verificarXY(char palavra[MAX])
{
  // Verifica se o numero de caracteres da palavra é par
  if((strlen(palavra)-1) % 2 != 0) return false;
  Pilha pilha;
  criarPilha(&pilha);

  char charAtual;
  for (int i = 0; i < ((strlen(palavra) - 1)/2); i++)
  {
    charAtual = palavra[i];
    empilhar(&pilha, charAtual);
  }
  for(int i = ((strlen(palavra) - 1)/2); i < (strlen(palavra)-1); i++){
    desempilhar(&pilha, &charAtual);
    if(palavra[i] != charAtual) return false;
  }

  return true;
}

int main()
{
  char palavra[MAX];
  printf("Digite sua frase no formato xy: ");
  fgets(palavra, MAX, stdin);
  
  if (verificarXY(palavra) == true)
  {
    printf("A palavra segue a regra!\n");
  }
  else
  {
    printf("A palavra nao segue a regra!\n");
  }

  printf("Palavra: %s \n", palavra);
}
