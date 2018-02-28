#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct no{
int dado;
struct no *prox;
};
struct no *topo=NULL;

void push(int valor){
	struct no *aux;
	aux=new(struct no);
	aux->dado=valor;
	aux->prox=topo;
	topo=aux;
	printf("OK!");
}

void pop(int valor){
	struct no *aux;
	if(topo==NULL){
	printf("Pilha vazia!");
	return;
}
aux=topo;
topo=topo->prox;
delete(aux);
printf("OK!");
}

int main(){
	push(2);
	pop(3);
	
	
}

//exercicio no email
