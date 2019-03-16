#include "Heather/Arvore.h"

int main(int argc, char const *argv[]) {
  Pont Raiz;
  printf("+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n\n");
  printf("------------------BEM-VINDO A ARVORE DO GROBS---------------\n");
  while(1){
    int a=0;
    printf("\n+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n");
    printf("1->Inicializa\n2->Insere\n3->Ordem\n4->PreOrdem\n5->PosOrdem\n6->Pesquisa\n7->Remover\n8->ContarNos\n9->ContarFolhas\n10->Altura\n11->SomaPares\n12->MaiorNo");
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
    if(a==8){
      int c;
      c=ContarNos(Raiz);
      printf("Quantidade de Nos: %d",c);
    }
    if(a==9){
      int c;
      c=ContarFolhas(Raiz);
      printf("Quantidade de Folhas: %d",c);
    }
    if(a==10){
      int c;
      c=Altura(Raiz);
      printf("Altura da Arvore: %d",c);
    }
    if(a==11){
      int c;
      c=SomaPares(Raiz);
      printf("A soma dos nos pares é: %d",c);
    }
    if(a==12){
      int c;
      c=MaiorNo(Raiz);
      printf("O maior No: %d",c);
    }
  }
  return 0;
}
