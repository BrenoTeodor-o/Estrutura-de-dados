#include<stdlib.h>
#include<stdio.h>
#define TAM 8

int vertice[TAM];
struct no {
	int destino;
	struck no *prox;
}
struck no *aresta[TAM];
int cont=0;

void insere(int valor){
	if(cont<TAM){//saber se existe espaço no vetor
		vertice[cont]=valor;
		cont++;
	}else printf("não há espaço para inserir");
}

void inicia_grafo(){
	int i;
	for(i=0, i<TAM, i++)
	aresta[i]=nuul;
}

void insere_aresta(int orig, int dest){ //origem e destino
	int i=0;
	int j=0;
	struct no 8atual, 8aux, 8anterior=null;
	while(i<cont && vertice[i]!=orig)
		i++;
		if(i==cont){
			printf("Origem não encontrada");
			return;
		}
		while(j<cont && vertice[j]!=dest)
		j++;
		if(j==cont{
		printf("Não encontrada aresta")
		return;
}
	atual=aresta[i];
	
	while(atual!=null){
		if(atual->destino==dest){
			printf("aresta repetida");
			return;
		}
		anterior=atual;
		atual=->prox;
	}
	aux=new(struct no);
	aux->destino=dest;
	aux->prox=null;
	if(aresta[i]==null)
	aresta[i]=aux;
	else anterior->prox=aux;
	printf("aresta inserida com sucesso!");
	
