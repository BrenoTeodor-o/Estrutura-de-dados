#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define TAM 10

struct no{
	int dado;
	struct no *prox;
};

struct no *tabela[TAM];

int espalha(int x) {
	return x%TAM;
}

void insere(int valor){
	int pos;
	struct no *aux;
	pos = espalha(valor);
	aux = new(struct no);
	aux -> dado = valor;
	aux -> prox = tabela[pos];
	tabela[pos] = aux;
	printf("\n Elemento inserido");
}

void busca(int valor){
	int pos;
	struct no *aux;
	pos=espalha(valor);
	for (aux = tabela[pos]; aux != NULL ; aux=aux-> prox){
		if(aux -> dado == valor){
		printf("\n Achei o elemento ");
		return;		
		}
	}
	printf("\n Nao achei o elemento !");
}

void inicia_null() {
	for (int i=0; i<TAM; i++){
		tabela[i] = NULL;
	}
}

void busca_USANDO_FOR(int valor)
{
	int pos;
	struct no *aux;
	pos = espalha(valor);
	aux = tabela[pos];
	while(aux != NULL)
	{
		if(aux -> dado == valor)
		{
			printf("Elemento Encontrado com Sucesso!");
			return;
		}
	}
	printf("Elemento nao Encontrado");


int main(){
	struct no *aux;
	aux = new (struct no);
	
	inicia_null();
	insere(10);
	insere(11);
	insere(54);
	insere(25);
	insere(80);
	
for(int i=0; i<TAM; i++){
	aux = tabela[i];
	printf("\n i = %d ",i);
	while(aux != NULL){
		printf("%d ",aux->dado);
		aux = aux->prox;
	}
}
printf("\n");
	busca(10);

}
