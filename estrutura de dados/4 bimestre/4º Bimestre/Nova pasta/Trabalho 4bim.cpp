/*  Trabalho 4º bimestre | alunos: Ronald P. e Vitor A. */

// Espalhamento e reespalhamento com vetor

#include<stdio.h>
#include<stdlib.h>

#define TAM 10

int vetor[TAM];

int espalha(int x)
{
	return x % TAM;
}

int reEspalha(int pos)
{
	return (pos + 1) % TAM;
}

void insere(int valor)
{
	int pos, cont;
	cont = 0;
	pos = espalha(valor);
	while(vetor[pos] != -1 && cont != TAM)
	{
		cont++;
		pos = reEspalha(pos);
	}
	
	if(vetor[pos] == -1)
	{
		vetor[pos] = valor;
		printf("Valor inserido!\n");
	} 
	else
	{
		printf("Vetor cheio!\n");
	}
}

void busca(int valorI)
{
	int pos, cont;
	cont = 0;
	pos = espalha(valorI);
	while(vetor[pos] != -1  &&  cont != TAM  &&  vetor[pos] != valorI)
	{
		cont++;
		pos = reEspalha(pos);
	}
	if(vetor[pos] == valorI)
	{
		printf("Achei, posicao: %d\n", pos);
		return;
	}
	else
	{
		printf("Valor nao encontrado!\n");
	}
}

void ininull(){
	for(int i = 0; i < TAM; i++)
	{
		vetor[i] = -1;
	}
}

main()
{
	ininull();
	
	insere(1);
	insere(5);
	insere(10);
	
	printf("\n");
	
	busca(1);
	busca(5);
	busca(10);
	busca(3);
}
