#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include "lis.h"

int tamanho=0, lista[TAM];

void insereInicio(int valor) {
	int i;

	if(tamanho==TAM-1) {	//verifica se a lista nao esta cheia
		printf("\n\tERRO: A lista esta cheia\n");
		return;
	}

	for(i=TAM; i>0 ; i--) {// faz com que os elementos deem um passo para tras
		lista[i]=lista[i-1];
	}

	lista[0]=valor;//elemento � inserido na posi��o que o loop parou
	tamanho++;
	printf("\nElemento inserido com sucesso!\n\n");
}

void insereFim(int valor) {
	int i;

	if(tamanho==TAM-1) {	//verifica se a lista nao esta cheia
		printf("\n\tERRO: A lista esta cheia\n");
		return;
	}

	for(i=tamanho; i>0 && valor<lista[i-1]; i--) {// faz com que os elementos deem um passo para tras
		lista[i]=lista[i-1];
	}

	lista[i]=valor;//elemento � inserido na posi��o que o loop parou
	tamanho++;
	printf("\nElemento inserido com sucesso!\n\n");
}

void insereMeio(int valor,int pos) {
	int i;

	if(tamanho==TAM-1) {	//verifica se a lista nao esta cheia
		printf("\n\tERRO: A lista esta cheia\n");
		return;
	}

	for(i=0; i<TAM ; i++) {// faz com que os elementos deem um passo para tras
    if(i == pos){
    for(i=TAM; i>pos ; i--) // faz com que os elementos deem um passo para tras
		lista[i]=lista[i-1];
	    lista[pos]=valor;
    }
	}
	tamanho++;
	printf("\nElemento inserido com sucesso!\n\n");
}




void remover(int valor) {
	int i,j,cont=0;

	if(tamanho==0) {
		printf("\n\tErro: Lista vazia!");
		return;

	}

	for(i=0; i<tamanho  ;i++) {
		if(valor==lista[i]) {
			for(j=i;j<tamanho-1;j++) {
				lista[j]=lista[j+1];//faz os elementos darem um passo a frente
			}
			tamanho--;
			i--;//faz o i voltar para o caso de haver numero repetidos
			cont++;
		}
	}
	if(cont!=0)
		printf("\nElemento removido com sucesso!");
	else
		printf("\n\tERRO: valor nao esta na lista");
}

void exibir() {// Exibe a lista
	int i;

	if(tamanho==0){
		printf("\n\tErro: Lista vazia!");
		return;
	}

	for(i=0;i<=tamanho-1;i++) {
		printf("\nElemento[ %d ] - posi\207\706o na lista %d ", lista[i],i+1);
	}
	printf("\n\n");
	if(lista[1]==NULL)
	printf("inicio = %d | final = %d",lista[0],lista[0]);
	else
	printf("inicio = %d | final = %d",lista[0],lista[tamanho-1]);

}

void buscar(int valor) {//modificado em sala
	int i,aux=0;
	if(tamanho==0) {
		printf("\n\tERRO: Lista vazia");
		return;
	}

	for(i=0;i<tamanho ;i++) {
		if(valor==lista[i]) {
			printf("\nValor [ %d ] esta na posi\207\706o [%d]", valor,i+1);
			aux++;
		}
	}
	if(aux==0)
		printf("\n\tERRO: valor nao esta na lista");
}

void menu() {
	printf("\n                                       ");
	printf("\n	Digite a op\207\706o desejada        ");
	printf("\n=======================================");
	printf("\n	1 = Inserir elemento Inicio          ");
    printf("\n	2 = Inserir elemento Fim             ");
    printf("\n	3 = Inserir elemento Meio            ");
	printf("\n	4 = Remover elemento                 ");
	printf("\n	5 = Buscar elemento                  ");
	printf("\n	6 = Exibir lista                     ");
	printf("\n	7 = Sair                             ");
	printf("\n                                       ");
	printf("\n\n");
}
