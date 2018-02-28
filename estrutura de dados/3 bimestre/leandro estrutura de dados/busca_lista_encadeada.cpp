#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#define Tam 5
struct no {
	int dado;
	struct no *prox;
};
struct no *lista;

void imprime(){
	struct no *atual=lista;
	while(atual!=NULL){
		printf("%d", atual-> dado);
		atual=atual->prox;
	}
	
}
void insere(int valor){
	struct no *aux;
	aux=new(struct no);
	aux->dado=valor;
	aux->prox=lista;
	lista=aux;
}

void moverfrente(int valor){
	struct no *atual, *anterior;
	atual=lista;
	while(atual!=NULL){
		if(atual->dado==valor){
			printf("elemento encontrado");
			if(atual!=lista){
				anterior->prox=atual->prox;
				atual->prox=lista;
				lista=atual;
			}
			return;
		}
		anterior=atual;
		atual=atual->prox;
	}
	printf("elemento não encontrado");
}

//usando moverfrente usando vetor
void moverfrente2(int valor){
	int i,j;
	for (i=0; i<Tam; i++){
		if(vetor[i]==valor){
			printf("elemento encontrado");
			for(j=i; j>0; j--)
			lista[j]=lista[j-1];
			lista[0]=valor;
			return;
		}
	}
	printf("elemento não encontrado");
}

void transp(int valor){
	struct no *aux, *anterior;
	atual = lista;
	while(atual!=NULL){
		if(atual->dado==valor){
			printf("elemento encontrado");
			if(atual!=lista){
				int aux= anterior->dado;
				anterior->dado=atual->dado;
				atual->dado=aux;
			}
			return;
		}
		anterior=atual;
		atual=atual->prox;
	}
	printf("elemento não encontrado");
}

//transp usando vetor
void transp2(int valor){
	int i;
	for (i=0; i<Tam; i++){
		if(lista[i]==valor){
			printf("elemento encontrado");
			int aux=lista[i];
			lista[i]=lista[i+1];
			lista[i-1]=aux;
			return;
		}
	}
	printf("elemento não encontrado");
} 
main (){
	insere(1);
	insere(4);
	insere(5);
	insere(8);
	insere(9);
	insere(10);
	insere(12;
	insere(14;
	insere(15);
	
	moverfrente(8);
	imprime();
	moverfrente2(14);
	imprime();
	transp(15);
	imprime();
	transp2(8);
}
}
