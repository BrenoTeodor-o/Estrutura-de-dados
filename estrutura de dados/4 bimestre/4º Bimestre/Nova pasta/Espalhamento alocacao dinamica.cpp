#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TAM 10

struct no
{
	int dado;
	struct no *prox;
};

struct no *tabela[TAM];

void iniNull()
{
	int pos = 0;
	while(pos < TAM)
	{
		tabela[pos] = NULL;
		pos++;
	}
}

int espalha(int x)
{
	return x % TAM;
}

void insere(int valor)
{
	int pos;
	struct no *aux;
	pos = espalha(valor);
	aux = new(struct no);
	aux -> dado = valor;
	aux -> prox = tabela[pos];
	tabela[pos] = aux;
	printf("Elemento Inserido com Sucesso!\n");
}

void busca(int valor)
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
}

main()
{
	iniNull();
	insere(1);
	insere(2);
	insere(5);
	insere(3);
	busca(5);
}






