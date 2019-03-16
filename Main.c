#include "Heather/Arvore.h"

int main(int argc, char const *argv[]) {
  Pont Raiz;
  printf("+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n\n");
  printf("------------------BEM-VINDO A ARVORE DO GROBS---------------\n\n");
  printf("+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n");
  while(1){
    int a=0;
    printf("\n1->Inicializa\n2->Insere\n3->Ordem\n4->PreOrdem\n5->PosOrdem\n6->Pesquisa\n7->Remover");
    printf("\n\nEntre com a opção desejada:");
    scanf("%d",&a);
    if(a==1){
      Inicializa(&Raiz);
    }
    if(a==2){
      int b;
      printf("Entre com o numero:");
      scanf("%d",&b);
      Insere(&Raiz,b);
    }
    if(a==3){
      Ordem(Raiz);
    }
    if(a==4){
      PreOrdem(Raiz);
    }
    if(a==5){
      PosOrdem(Raiz);
    }
    if(a==6){
      int c,d;
      printf("Entre com o numero a ser procurado:");
      scanf("%d",&c);
      d=Pesquisa(Raiz,c);
      if(d == 0){
        printf("%d não encontrado na arvore!\n",c);
      }else if(d == 1){
        printf("%d encontrado na arvore!\n",c);
      }
    }
    if(a==7){
      int c;
      printf("Entre com o numero a ser removido:");
      scanf("%d",&c);
      Remover(&Raiz,c);
    }
  }
  return 0;
}
