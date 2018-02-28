#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
struct no{
	int dado;
	struct no *prox;
};
struct no *lista=NULL;

void insere(int valor){ //tenho que inserir e manter lista ordenada
	struct no *atual;
	struct no *anterior;
	struct no *aux;	
	
	aux=new(struct no);
	aux->dado=valor;
	atual= lista; //uso atual p inserir e ele vai apontar p onde lista aponta
	while(atual!=NULL && atual->dado<valor){ //percorro a lista enquanto o valor que estou percorrendo for menor que o valor que qero inserir
		anterior=atual; //para anterior apontar p mesmo lugar e e atual da um passo p frente
		atual=atual->prox; //até que atual chegue no 20 e anterior fique no 11 (olhar caderno)
	}
	if(atual==lista){ //P garantir que insira na primeira posição
		aux->prox=lista;
		lista=aux;
	}else{
			aux->prox=anterior->prox;
			anterior->prox=aux;	
	}
}

void imprime(){
	struct no *aux;
	struct no *atual;
	
	aux=new(struct no);
	atual= lista;
	
	if(lista==NULL){
		printf("lista vazia");
		return;
	}
	
		
	}
	
main(){
	insere(3);
	insere(4);
	insere(8);
	insere(10);
	insere(14);
	insere(18)
}
