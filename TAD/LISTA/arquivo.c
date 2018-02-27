
#include "arquivo.h"
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Tam 10

/*
 void helloWorld()
 {
    printf("Hello World!");
 }
 */

int vetor[Tam];
int tamanho=0;

void insere(int valor,int pos){
	int i;
	if(tamanho==Tam){
		printf("\n Vetor Cheio \n");
		return;
	}
	if(pos<0|| pos>tamanho){
		printf("\n Posicao invalida \n");
		return;
	}
	for(i=tamanho;i>pos;i--)
		vetor[i]=vetor[i-1];
	vetor[pos]=valor;
	tamanho=tamanho+1;
	printf("\n insercao ok! \n");
}


void exclui(int posicao)
{
	int i, pos=posicao;
	if(pos<0 || pos>=tamanho)
    {
		printf("\n Posicao invalida \n");
		return;
	}
	for(i=pos;i<tamanho-1;i++)
	{
		vetor[i]=vetor[i+1];
	}
	tamanho=tamanho-1;
	printf("\n elemento removido \n");
}


void busca_vetor(int valor)
{
	int i;
	int achei=0;
	for(i=0;i<tamanho;i++){
		if(valor==vetor[i]){
			printf("\n valor encontrado na posicao %d \n", i);
			achei++;
		}
	}
	if(achei==0){
		printf("\n Não existe esse valor no vetor \n");
	}
}
int vazio (){
	if(tamanho==0){
		printf("\n vazio \n");
	}
	else{
		printf("\n nao esta vazio\n");
	}
}


void imprime(){
	int i;
	printf("\n vetor: \n");
	for (i = 0; i < tamanho; i++)
	{
		printf ("| %d | ", vetor[i]);
	}
}
