#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct no{ //contem um inteiro e um ponteiro
       int dado;
       struct no *prox;
       };
       
struct no *topo = NULL;

void push(int valor){
     struct no *aux; //declara internamente a função push
     aux = new (struct no); //variavel dinamica chamada no, reserva uma posição qualquer na memoria para a struct eo aux vai conter a posição que ela escolheu
     aux->dado= valor; //vai até a posição que foi pega e no dado coloca o valor dentro da posição
     aux->prox= topo; //ponteiro prox aponta para o mesmo lugar que aponta o ponteiro topo
     topo=aux; //pq agora o topo mudou e aux sabe onde esta o topo
     printf("elemento inserido com sucesso");
     }
     
void pop(int valor){
     struct no *aux;
     if(topo==NULL) {
     printf("pilha vazia");
     return;
     }
     aux=topo; //aponta para o mesmo lugar que o topo aponta pra quando eu mudr o topo alguém aponta praquele lugar p ser removido
     topo=topo-> prox; //ou aux->prox
     delete(aux); //libera a memoria
     printf("elemento removido com sucesso");
     }    
     
     int main(){
     	push(1);
     	push(3);
     	pop(1);
         }
     
     
