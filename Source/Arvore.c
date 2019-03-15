#include "../Heather/Arvore.h"

void Inicializa(Apontador *No){
  *No = NULL;
}

Apontador Insere(Apontador *No,int V){
  int t;
  if(*No == NULL){
    Apontador Aux = (Apontador)malloc(sizeof(T_Arvore));
    Aux->Chave = V;
    Aux->Esq = (*No)->Dir = NULL;
    return Aux;
  }
  t = (*No)->Chave;
  if(V<t)
    (*No)->Esq = Insere(&((*No)->Esq),V);
  else
    (*No)->Dir = Insere(&((*No)->Dir),V);
  return *No;
}

int Pesquisa(Apontador No,int V){
  if(No == NULL) return 0;
  else if(No->Chave == V) return 1;
  else if(No->Chave < V) return (Pesquisa(No->Dir, V));
  else return (Pesquisa(No->Esq, V));
}
