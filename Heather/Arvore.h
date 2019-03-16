#include <stdlib.h>
#include <stdio.h>
#ifndef ARVORE_H
#define ARVORE_H
typedef struct Arvore* Pont;
typedef struct Arvore{
  int Chave;
  struct Arvore *Dir;
  struct Arvore  *Esq;
}T_Arvore;

void Inicializa(Pont *No);

void Insere(Pont *No,int V);

Pont MaiorDireita(Pont *No);

Pont MenorEsquerda(Pont *No);

int Pesquisa(Pont No,int V);

void Remover(Pont *No,int V);

void Ordem(Pont No);

void PreOrdem(Pont No);

void PosOrdem(Pont No);

int ContarNos(Pont No);

int ContarFolhas(Pont No);

int Maior(int a,int b);

int Altura(Pont No);

int SomaPares(Pont No);

int MaiorNo(Pont No);

#endif
