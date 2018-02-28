#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

struct no{
	int dado;
	struct no *esq;
	struct no *dir;
};

struct no *raiz=NULL;

void insere(int valor){ //preciso de um ponteiro que mostre quem é o primeiro (raiz)
	struct no *aux, *atual; //ponteiros auxiliares
	aux= new(struct no); //essa nova variavel criada é apontada por aux
	aux-> dado=valor;
	aux->esq=NULL;
	aux->dir=NULL;
	if(raiz==NULL){//verifica se a raiz da arvore aponta p null se sim ela esta vazia
		raiz=aux;
		return;
	}
	atual=raiz;
	
	while(1){
		if(valor < atual->dado){ //verifico o valor que quero inserir, comparando aos elementos da arvore; atual aponta p primeiro elemento
			if(atual->esq==NULL){ //se o filho esquerdo do elemento que estou indo for nulo então faço outra coisa
				atual->esq=aux;
				printf("elemento inserido com sucesso\n");
				return;		
			}else{
				atual=atual->esq;
			}	
		}else{
			if(atual->dir==NULL){
				atual->dir=aux;
				printf("elemento inserido com sucesso\n");
				return;
			}else{
				atual=atual->dir;
			}
		}			
	}	
}

//********************não cai na prova***************///////////
void em_ordem(struct no *aux){
	if(aux!=NULL){
		em_ordem(aux->esq);
		printf("%d", aux->dado); //imprime o elemento que esta na arvore
		em_ordem(aux->dir); 
	}
}

void busca(int valor){
	struct no *atual;
	atual=raiz;
	while(atual!=NULL){
		if(atual->dado==valor){
			printf("achei\n");
			return;
		}
		if(valor<atual->dado){
		atual=atual->esq;
	}else{
		atual = atual->dir;
	}
}
	printf("nao achei\n");
}

int main(){
	insere(1);
	insere(7);
	insere(4);
	insere(3);
	insere(7);
	em_ordem(raiz);
	busca(3);
	busca(9);
}
