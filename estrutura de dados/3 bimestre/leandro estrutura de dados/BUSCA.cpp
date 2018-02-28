#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 5

int vetor[TAM] = {3, 6, 2, 7, 9};

struct no{
	int dado;
	struct no *prox;;
};

struct no *lista = NULL; //inicio da lista
 

void insere_alocado(int valor){
	struct no *aux;
	aux = new (struct no);
	aux->dado = valor;
	aux->prox = lista;
	lista = aux;
}

void imprime_alocado(){
	struct no *atual = lista;
	printf("IMPRIME ALOCADO: ");
	while(atual!=NULL){
		printf("%d ", atual->dado);
		atual = atual -> prox;
	}
}

void moverfrente_alocado(int valor){
	struct no *atual, *anterior;
	atual = lista;
	while(atual!=NULL){
		if(atual->dado == valor){
			printf("COM ALOCACAO: ELEMENTO %d ENCONTRADO!!!",valor);
			if(atual!=lista){
				anterior -> prox = atual -> prox;
				atual -> prox = lista;
				lista = atual;
			}
			return;
		}
		
		anterior = atual;
		atual = atual -> prox;
	}
	printf("COM ALOCACAO: ELEMENTO %d NAO ENCONTRADO",valor);
}

void moverfrente_vetor(int valor){
	int i,j;
	
	for(i=0;i<TAM;i++){
		if(vetor[i] == valor){
			printf("COM VETOR: ELEMENTO %d ENCONTRADO", valor);
			for(j=i;j>0;j--){
				vetor[j] = vetor[j-1];
			}
			vetor[0] = valor;
			return;
		}
	}
	printf("COM VETOR: ELEMENTO %d NAO ENCONTRADO!!!", valor);
}

void imprime_vetor(){
	printf("IMPRIME VETOR: ");
 
	for(int i=0;i<TAM;i++){
		printf("%d ", vetor[i]);
	}
	
}
void pula(){
	printf("\n");
}


void transposicao_alocado(int valor){
	
	struct no *atual, *anterior;
	atual = lista;
	while(atual!=NULL){
		if(atual->dado == valor){
			printf("COM TRANSPOSICAO: ELEMENTO %d ENCONTRADO!!!",valor);
			if(atual!=lista){
				int aux = anterior  -> dado;
				anterior->dado = atual->dado;
				atual->dado = aux;
			}
			return;
		}
		
		anterior = atual;
		atual = atual -> prox;
	}
	printf("COM TRANSPOSICAO: ELEMENTO %d NAO ENCONTRADO",valor);
}

void transposicao_vetor(int valor){
	int i;
	
	for(i=0;i<TAM;i++){
		if(vetor[i] == valor){
			printf("COM VETOR: ELEMENTO %d ENCONTRADO", valor);
			 
				int aux = vetor[i];
				vetor[i] = vetor[i-1];
				vetor[i-1] = aux;
				return;
			
		}
	}
	printf("COM VETOR: ELEMENTO %d NAO ENCONTRADO!!!", valor);
}


int main(){
	printf("\t\t========== MOVER PRA FRENTE TESTE COM VETOR ==========");
	pula();
	imprime_vetor();
	pula();
	moverfrente_vetor(7);
	pula();
	imprime_vetor();
	pula();
	moverfrente_vetor(9);
	pula();
	imprime_vetor();
	pula();
	pula();
	pula();
	
	printf("\t\t========== MOVER PRA FRENTE TESTE COM ALOCACAO ==========");
	pula();
	insere_alocado(9);
	insere_alocado(5);
	insere_alocado(2);
	insere_alocado(8);
	insere_alocado(1);
	pula();
	imprime_alocado();
	pula();
	moverfrente_alocado(8);
	pula();
	imprime_alocado();
	
	pula();
	pula();
	pula();
	
	printf("\t\t========== TRANSPOSICAO TESTE COM ALOCACAO ==========");
	pula();
	pula();
	imprime_alocado();
	pula();
	transposicao_alocado(2);
	pula();
	imprime_alocado();
	
	pula();
	pula();
	pula();
	
	printf("\t\t========== TRANSPOSICAO TESTE COM VETOR ==========");
	pula();
	imprime_vetor();
	pula();
	transposicao_vetor(2);
	pula();
	imprime_vetor();
	pula();

	
	 
}
