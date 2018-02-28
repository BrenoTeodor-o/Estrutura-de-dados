#include <stdio.h>
#define TAM 8


int vertices[TAM];
int adj[TAM][TAM];
int cont=0;

void insere_vertice(int valor){
	if (cont < TAM){
		vertices[cont] = valor;
		cont++;
	} else {
		printf("\n Erro! ");
	}
	printf("\n Vertice inserida com sucesso !");
}



void insere_aresta(int orig, int dest){
	int i;
	int j=0;
	while (i<cont && vertices[i] != orig) {
		i++;
	}
	if(i==cont) {
		printf("\n Aresta nao inserida, nao encontrei a origem da vertice ! ");
		return;
	}
	while (j < cont && vertices[j]!= dest) {
		j++;
	}
	if (j==cont) {
		printf("\n Aresta nao inserida, nao encontrei a vertice destino !");
		return;
	}
	adj[i][j] = 1 ;
	printf("\n Inserido aresta com sucesso !");
}

void remove_aresta(int orig, int dest){
	int i= 0;
	int j=0;
	while (i<cont && vertices[i]!=orig){
		i++;
	}
	if(i==cont) {
		printf("\n Aresta nao removida, nao encontrei a origem da vertice ! ");
		return;
	}	
	while (j<cont && vertices[j] != dest){
		j++;
	}
	
	if (j==cont){
		printf("\n Aresta nao removida, nao encontrei a vestice destino !");
		return;
	}
	
	if(adj[i][j] == 1) {
		
	adj[i][j] = 0 ;	
	printf("\n Vertice removida com sucesso !");
	
	}else{
		printf("\n Vertice nao existe !");
	}
}

void zera_matriz(){
	for (int i = 0; i< cont; i++ ){
		adj[i][i] = 0;
	} 
}

void imprimi(){
	int j=0;
	int i;
	
	printf("\n \n MATRIZ \n \n");
	for(i=0; i < TAM; i++){
		for(j=0; j<TAM; j++){
				printf(" %d ", adj[i][j]);
		
	}
	printf("\n");
	}
	printf("\n VETOR \n");
		for(i=0; i<cont; i++){
			printf(" %d ", vertices[i]);
		}
	}

main(){
	zera_matriz();
	insere_vertice(10);
	insere_vertice(02);
	insere_vertice(12);
	insere_vertice(20);
	insere_vertice(16);
	insere_aresta(10,02);
	insere_aresta(12,16);
	insere_aresta(11,10);
	remove_aresta(10,02);
	remove_aresta(11,10);
	imprimi();	
}


