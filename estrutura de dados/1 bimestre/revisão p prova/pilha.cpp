#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define Tam 4
int pilha[Tam];
int topo=-1;
void push(int valor){
	if(topo==Tam-1){
		printf("pilha cheia");
		return;
	}
	pilha[topo]=valor;
	topo=topo+1;
	printf("elemento inserido");
}

void pop(){
	if(topo==-1){
		printf("pilha vazia");
		return;
	}
	topo=topo-1;
	printf("elemento removido");
}

void imprime (){
     int i;
     if(topo==-1){
                 printf("pilha vazia");
                 return;
                 }
     for (i=0;i<=topo;i++)
     printf("%d", pilha[i]);
     }
     
     void topo_pilha() {
     if(topo==-1){
                  printf("Pilha vazia");
                  return;
                  }
                  printf("%d",pilha[topo]);
     }
