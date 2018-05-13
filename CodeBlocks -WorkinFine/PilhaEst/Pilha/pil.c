#include <stdio.h>
#include <stdlib.h>
#include "pil.h"

Ppilha cria(){
    Ppilha p = (Ppilha)malloc(sizeof(Tpilha));
    p->topo=-1;
    return p;
}

int push(Ppilha p,int val){
if(p==NULL)
return -1;
if(p->topo>=MAX-1)
return -1;
(p->topo)++;
p->valor[p->topo]=val; //chamando a variavel ''valor'' da struct,com endereçamento de ''p->topo'',que aumentará
return 1;
}
void pop(Ppilha p){
    int aux;
    if(p==NULL)
    return -1;
    if(p->topo<0) //pilha vazia
    return -1;
    aux =  p->valor[p->topo];
    p->topo--;
}

int peek(Ppilha p){
    return p->valor[p->topo];
}

void libera(Ppilha p){
int i;
for(i=0;i<p->topo;i++)
    free(p->valor[i]);

free(p);
}

void mostra(Ppilha p){
int i;
if(p==NULL){
printf("pilha vazia\n");
return;
}
for(i=p->topo;i>=0;i--){
    printf("pilha[%d] = %d\n",i,p->valor[i]);
   }
}
