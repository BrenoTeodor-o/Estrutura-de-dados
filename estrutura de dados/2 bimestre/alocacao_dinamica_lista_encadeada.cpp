#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct no{ //struct é uma variavel composta que tem dois campos
       int dado;
       struct no *prox;
};
struct no *lista=NULL;
int tamanho=0;

void insere(int valor, int pos){
     struct no *atual;
     struct no *aux;
     if(pos<0 || pos>tamanho){ //verifica se posição é valida
     printf("inválida");
     return;
     }
     aux= new(struct no);
     aux-> dado=valor;
     if(pos==0){
                aux->prox=lista;
                lista=aux;
                }
                else{
                     atual=lista;
                     for(int i=0;i<pos-1;i++){
                     atual=atual->prox; //vá para o proximo
                     }
                     aux->prox=atual->prox;
                     }
                     tamanho++;
                     printf("inserido");
                     }
                     
void acessaposicao(int pos){
     struct no *atual;
     if(pos<0||pos>=tamanho){
                             printf("invalida");
                             return;
                             }
                             
                             atual=lista;
                             for(int i=0; i<pos; i++)
                             atual=atual->prox;
                             printf("%d", atual->dado);
                             }
