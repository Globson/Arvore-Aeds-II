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

int ContarNos(Pont No){
  if(No == NULL){
    return 0;
  }else{
    return 1 + ContarNos(No->Esq) + ContarNos(No->Dir);
  }
}

int ContarFolhas(Pont No){
  if(No == NULL){
    return 0;
  }
  if(No->Esq == NULL && No->Dir == NULL){
    return 1;
  }
  return ContarFolhas(No->Esq) + ContarFolhas(No->Dir);
}

int Maior(int a,int b){
  if(a >b){
    return a;
  }else{
    return b;
  }
}

int Altura(Pont No){
  if((No == NULL) || (No->Esq == NULL) || (No->Dir = NULL)){
    return 0;
  }else{
    return 1 + Maior(Altura(No->Esq),Altura(No->Dir));
  }
}

int SomaPares(Pont No){
  if(No == NULL){
    return 0;
}else{
    if(No->Chave % 2 == 0){
      return No->Chave + SomaPares(No->Esq) + SomaPares(No->Dir);
    }else{
      return SomaPares(No->Esq) + SomaPares(No->Dir);
    }
  }
}

int MaiorNo(Pont No){
  if(No == NULL){
    return 0;
  }else{
    Pont Aux = No;
    int k=0,M;
    while(Aux->Dir != NULL){
      k++;
      Aux = Aux->Dir;
    }
    Aux = No;
    M=Aux->Chave;
    Aux= Aux->Dir;
    for(int i=0;i<k;i++){
      if(M < Aux->Chave){
        M = Aux->Chave;
        Aux = Aux->Dir;
        }
      }
      return M;
    }
  }
