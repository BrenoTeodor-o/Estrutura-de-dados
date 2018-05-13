/* Desenvolvimento do Código */
/* Feito por Luiz Gustavo Nunes */

#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"
#define Tam 8
int lista[Tam];
int tamanho=0;

void insere(int valor,int pos){
    int i;
	if(pos<0|| pos>tamanho){
	printf("\nPosição Inválida.");
	return;
	}
	for(i=tamanho;i>pos;i--)
	lista[i]=lista[i-1];
	lista[pos]=valor;
	tamanho=tamanho+1;
	printf("\nInserção OK!");
	}
	
	void removel(int posicao){
	int i, pos=posicao;
	if(pos<0 || pos>=tamanho){
	    printf("\nPosição Inválida.");
	    return;
	    }
	for(i=pos;i<tamanho-1;i++){
	   lista[i]=lista[i+1];
	}
	tamanho=tamanho-1;
	printf("\nElemento Removido.");
	}
	
	void busca_lista(int valor){
		int i;
		int achei=0;
		for(i=0;i<tamanho;i++){
			if(valor==lista[i]){
				printf("\nValor encontrado na posição %d.", i);
				achei++; 
			}
		}
		if(achei==0){
			printf("\nNão existe esse valor na lista.");
		}
	}

	void imprime(){
		int i;
		printf("\nVetor: ");
		for(i=0;i<tamanho;i++){
		    printf("[%d]", lista[i]);
		}
	}
	void alterar(int posicao,int valor) {
	int i, pos=posicao, antigo, novo;
	if(pos<0 || pos>=tamanho){
  	  printf("\nPosição Inválida.");
  	  return;
  	}
  	for (i = 0; lista[i] >= lista[Tam-1]; i++) {
        if (lista[i] == posicao){
            lista[i] = valor;
		}
    }  
}
