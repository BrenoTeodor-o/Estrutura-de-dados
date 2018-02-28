#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 10

int vetor[TAM];

void inicia(){
	for(int i=0; i<TAM; i++){
		vetor[i] = -1;
	}
}

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
	} 
	else
	{
		printf("Vetor cheio!");
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
		printf("\nAchei posicao: %d", pos);
		return;
	}
	else
	{
		printf("\nValor não encontrado");
	}
}

void imprime(){
	printf("\nIMPRIME: ");
	for(int i=0;i<TAM;i++){
		printf("%d ", vetor[i]);
	}
	printf("\n\n");
}

main()
{
	for(int i = 0; i < TAM; i++)
	{
		vetor[i] = -1;
	}
	
	insere(1);
	insere(5);
	insere(10);

	for(int i = 0; i < TAM; i++)
	{
		printf(" (%d) ", vetor[i]);
	}
	busca(1);
	busca(5);
	busca(10);
	busca(3);
}
