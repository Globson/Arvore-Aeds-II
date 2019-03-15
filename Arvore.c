#include "Arvore.h"

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
