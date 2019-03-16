#include "../Heather/Arvore.h"

void Inicializa(Pont *No){
  *No = NULL;
}

void Insere(Pont *No,int V){
  if(*No == NULL){
    *No=(Pont)malloc(sizeof(T_Arvore));
    (*No)->Esq = NULL;
    (*No)->Dir = NULL;
    (*No)-> Chave = V;
    }
  else{
    if (V < ((*No)->Chave)) Insere(&((*No)->Esq),V);
    else Insere(&((*No)->Dir),V);
    }
  }

Pont MaiorDireita(Pont *No){
  if((*No)->Dir != NULL){
    return MaiorDireita(&(*No)->Dir);}
  else{
    Pont Aux = *No;
    if ((*No)->Esq != NULL){
      *No = (*No)->Esq;
    }else{
      *No = NULL;}
    return Aux;
  }
}

Pont MenorEsquerda(Pont *No){
  if((*No)->Esq != NULL){
    return MenorEsquerda(&(*No)->Esq);}
  else{
    Pont Aux = *No;
    if((*No)->Dir != NULL){
      *No = (*No)->Dir;}
    else{
      *No = NULL;}
    return Aux;
  }
}

int Pesquisa(Pont No,int V){
  if(No != NULL){
    if(No->Chave == V) return 1;
    else if(No->Chave < V){
      return (Pesquisa(No->Dir, V));}
    else if(No->Chave > V){
      return (Pesquisa(No->Esq, V));}
  }
  return 0;
}

void Remover(Pont *No,int V){
  if(Pesquisa(*No,V) == 0){
    printf("%d Nao encontrado na Arvore!\n",V);
    return;
  }
  if(V < (*No)->Chave){
    Remover(&(*No)->Esq,V);
  }else//{
    if(V > (*No)->Chave){
      Remover(&(*No)->Dir,V);
    }else{
      Pont Aux = *No;
      if(((*No)->Esq == NULL) && ((*No)->Dir == NULL)){
        free(Aux);
        *No = NULL;
      }else{
        if((*No)->Esq == NULL){
          (*No) = (*No)->Dir;
          Aux->Dir = NULL;
          free(Aux);
          Aux = NULL;
        }else{
          if((*No)->Dir == NULL){
            (*No) =(*No)->Esq;
            Aux->Esq = NULL;
            free(Aux);
            Aux = NULL;
          }else{
            Aux = MaiorDireita(&(*No)->Esq);
            Aux->Esq = (*No)->Esq;
            Aux->Dir = (*No)->Dir;
            (*No)->Esq = (*No)->Dir = NULL;
            free((*No));
            *No = Aux;
            Aux = NULL;
          }
        }
      }
    }
  //}
}

void Ordem(Pont No){
  if(No != NULL){
    Ordem(No->Esq);
    printf("\n%d",No->Chave);
    Ordem(No->Dir);
  }
}

void PreOrdem(Pont No){
  if(No != NULL){
    printf("\n%d",No->Chave);
    PreOrdem(No->Esq);
    PreOrdem(No->Dir);
  }
}

void PosOrdem(Pont No){
  if(No != NULL){
    PosOrdem(No->Esq);
    PosOrdem(No->Dir);
    printf("\n%d",No->Chave);
  }
}
