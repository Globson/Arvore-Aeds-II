#include <stdlib.h>
#include <stdio.h>
#ifndef ARVORE_H
#define ARVORE_H
typedef struct Arvore* Apontador;

typedef struct Arvore{
  int Chave;
  Apontador Dir;
  Apontador Esq;
}T_Arvore;

void Inicializa(Apontador *No);

Apontador Insere(Apontador *No,int V);

int Pesquisa(Apontador No,int V);


#endif
