#ifndef GRAFO_H
#define GRAFO_H
#define TOTALVERTICES 8

#include <stdlib.h>
#include <stdio.h>

    typedef struct item{
	int campo;
	struct item* prox;
	}ITEM;

	ITEM lista[TOTALVERTICES+1];
	int num, max, min=0;
	int aux;
	int matriz[1000][1000];

void ImprimeMatriz();
void lerGrafo();
void criarArquivo(ITEM *lista);
void Imprimir(ITEM *lista);
void Inserir_Aresta(ITEM *lista, int a, int b);
void ImprimeLista();
void arquivo();
int buscaProfundidade(int valor);

#endif

