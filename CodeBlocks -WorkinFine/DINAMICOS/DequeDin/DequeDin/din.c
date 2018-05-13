#include <stdio.h>
#include <stdlib.h>
#include "din.h"

struct elemento{
    struct elemento *ant;
    struct aluno dados;
    struct elemento *prox;

};
typedef struct elemento Elem;

struct Deque{
    struct elemento *inicio;
    struct elemento *final;
    int qtd;
};

Deque *cria(){
    Deque *dq = (Deque*)malloc(sizeof(Deque));
    if(dq != NULL){
        dq->inicio=NULL;
        dq->final=NULL;
        dq->qtd=0;
    }
    return dq;
}

void libera(Deque* dq){
    if(dq!=NULL){
        Elem* no;
        while(dq->inicio!=NULL){
            no = dq->inicio;
            dq->inicio=dq->inicio->prox;
            free(no);
        }
        free(dq);
    }
}

int tamanho(Deque* dq){
    if(dq==NULL)
        return 0 ;
    return dq->qtd;
}

int vazio(Deque* dq){
    if(dq==NULL)
        return 1;
        if(dq->inicio==NULL)
            return 1;
        return 0;
}

int insereInicio(Deque* dq,struct aluno al){
    if(dq == NULL) return 0;
    Elem *no= (Elem*)malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados=al;
    no->prox=dq->inicio;
    no->ant=NULL;
    if(dq->inicio==NULL)
        dq->final=no;
    else
        dq->inicio->ant=no;
    dq->inicio=no;
    dq->qtd++;
    return 1;
}

int insereFinal(Deque* dq,struct aluno al){
    if(dq == NULL) return 0;
    Elem *no= (Elem*)malloc(sizeof(Elem));
    if(no == NULL) return 0;
    no->dados=al;
    no->prox=NULL;
    if(dq->final==NULL){
    no->ant=NULL;
    dq->final=no;
    }else{
        no->ant=dq->final;
        dq->final->prox=no;
    }
    dq->final=no;
    dq->qtd++;
    return 1;
}

int removeInicio(Deque* dq){
     if(dq == NULL) return 0;
     if(dq->inicio==NULL) return 0;//primeiro teste de deque vazio
     Elem *no= dq->inicio;
     dq->inicio=dq->inicio->prox;
     if(dq->inicio==NULL)//deque se tornou vazio agora
        dq->final=NULL;
     else
        dq->inicio->ant=NULL;
     free(no);
     dq->qtd--;
     return 1;
}

int removeFinal(Deque* dq){
     if(dq == NULL) return 0;
     if(dq->inicio==NULL) return 0;//primeiro teste de deque vazio
     Elem *no= dq->final;
     if(no == dq->inicio){//final é o primeiro tambem
        dq->inicio=NULL;
        dq->final=NULL;
    }else{
        no->ant->prox=NULL;
        dq->final = no->ant;
     }
     free(no);
     dq->qtd--;
     return 1;
}

void exibir(Deque* dq){
  Elem *tmp = dq->inicio;
  while (tmp != NULL){
    printf("%d ", tmp->dados.mat);
    tmp = tmp->prox;
  }
  printf("\"\n");
}
