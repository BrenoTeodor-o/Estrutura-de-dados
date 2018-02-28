#include<stdio.h>
#define TAM 8

int vertices[TAM];
int adj[TAM][TAM];
int cont=0;

void insere_vertice(int valor){
	if(cont<TAM){
		vertices[cont]=valor;
		cont ++;
	}	else printf("Erro");
}

void insere_aresta(int orig, int dest){
	int i=0;
	int j=0;
	while(i<cont && vertices[i]!=orig){
		i++;
	}
	if(i==cont){
		printf("Vertice origem não encontrada");
		return;
	}
	while(j<cont && vertices[j]!=dest){
		j++;
	}
	if(j==cont){
		printf("Vertice destino não encontrada");
		return;
	}
	adj[i][j]=1;
}

void preenche_matriz
