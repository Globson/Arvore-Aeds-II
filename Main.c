#include "Heather/Arvore.h"

int main(int argc, char const *argv[]) {
  Pont Raiz;
  printf("+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n\n");
  printf("------------------BEM-VINDO A ARVORE DO GROBS---------------\n");
  while(1){
    int a=0;
    printf("\n+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n");
    printf("1->Inicializa\n2->Insere\n3->Ordem\n4->PreOrdem\n5->PosOrdem\n6->Pesquisa\n7->Remover\n8->ContarNos\n9->ContarFolhas\n10->Altura\n11->SomaPares\n12->MaiorNo\n13->Primos\n14->Largura\n15->Finalizar\n");
    while(a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9 && a != 10 && a != 11 && a != 12 && a != 13 && a != 14 && a != 15){
      printf("Digite a opcao desejada:");
      scanf("%d",&a);
      if(a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9 && a != 10 && a != 11 && a != 12 && a != 13 && a != 14 && a != 15){
        printf("Opcao invalida!\n");}}

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
    if(a==13){
      Primos(Raiz);
    }
    if(a==14){}//TODO
    if(a==15){
      printf("\n\t\t  ---------ARVORE DO GROBS---------\n\n\t\t   Desenvolvedor:\n\t\t    Samuel Sena - 3494\n\n\t\t  OBRIGADO POR UTILIZAR O PROGRAMA!");
      printf("\n+=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=++=+=+\n");
      break;
    }
  }
  return 0;
}
