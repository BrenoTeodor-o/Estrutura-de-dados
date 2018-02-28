/*

LEANDRO SANTANA
LUANA BERNARDES

2º ANO ENGENHARIA DE SOFTWARE

*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct no{
	int dado;
	struct no *prox;
	
};
struct no *lista=NULL;
int tam=0;

void insere (int valor){
	struct no *aux;
	struct no *atual;
	struct no *anterior;
	
	aux = new(struct no);
	aux -> dado = valor;
	atual = lista;

	while (atual != NULL && atual -> dado <= valor ){
	
	if(atual -> dado == valor){
		printf("\nINSERE: O numero ja foi inserido!\n");
		return;
	}
		anterior = atual;
		atual = atual -> prox;
	}
	if (atual == lista){
		aux -> prox = atual;
		lista = aux ;		
		
	}else {
		aux -> prox = anterior -> prox ;
		anterior -> prox = aux ;
	}
	tam++;
	printf("\nINSERE: Valor Inserido!! \n");
	}

void busca (int valor){
	int i = 0;
	int encontrei;
	struct no *atual;
	while(atual != NULL && atual-> dado<=valor){
		if(atual->dado==valor){
			printf("\nBUSCA: O valor %d foi encontrado na posicao %d", valor, encontrei);
			encontrei=0;
			break;
		}
		atual=atual->prox;
		encontrei++;
		if(encontrei==0){
			printf("\nBUSCA: Valor nao encontrado!");
		}
	}
}

void removel (int valor){
	struct no *aux;
	struct no *atual;
	struct no *anterior;
	
	atual = lista;
	while (atual != NULL && atual -> dado < valor ){
		anterior = atual;
		atual = atual -> prox;			
}
	if(atual != NULL && atual->dado == valor){
		if (atual == lista){
			lista = atual -> prox;
		}else{
			anterior -> prox = atual -> prox;		
		}
		delete (atual);
		tam = tam - 1;
		printf("\nREMOVE: Elemento removido da lista! \n ");
	}else{
		printf("\nREMOVE: Valor não encontrado na lista! \n");
	}
}

void imprime (){
	struct no *aux;
	printf("\nIMPRIME: ");
	for(aux = lista; aux != NULL ; aux=aux->prox )
		printf("%d " ,aux->dado);
}

int main() {
		
		insere(9);
		insere(6);
		insere(3);
		insere(2);
		insere(5);
		insere(8);
		insere(7);
		insere(4);
		insere(1);
		insere(0);
		insere(4);
		insere(1);
		
		imprime();
		
		busca(3);
		busca(1);
		busca(9);
		
		removel(0);
	 	removel(7);
	
		imprime();
		
 
		
	}
