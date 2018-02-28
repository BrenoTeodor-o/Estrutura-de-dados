#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define Tam 8
int lista[Tam];
int tamanho=0;

void insere(int valor,int pos){
    int i;
	if(tamanho==Tam){
	printf("\n Lista Cheia");
	return;
	}
	if(pos<0|| pos>tamanho){
	printf("\n Posicao invalida");
	return;
	}
	for(i=tamanho;i>pos;i--)
	lista[i]=lista[i-1];
	lista[pos]=valor;
	tamanho=tamanho+1;
	printf("\n insercao ok!");
	}
	

	void removel(int posicao){
	int i, pos=posicao;
	if(pos<0 || pos>=tamanho){
	    printf("\n Posicao invalida");
	    return;
	    }
	for(i=pos;i<tamanho-1;i++){
	   lista[i]=lista[i+1];
	}
	tamanho=tamanho-1;
	printf("\n elemento removido");
	}
	

	void busca_lista(int valor){
		int i;
		int achei=0;
		for(i=0;i<tamanho;i++){
			if(valor==lista[i]){
				printf("\n valor encontrado na posição %d", i);
				achei++; 
			}
		}
		if(achei==0){
			printf("\n Não existe esse valor na lista");
		}
	}
	int vazia (){
		if(tamanho==0){
		    printf("\n vazia");
		}
		else{
		    printf("\n nao esta vazia\n");
		}
	}


	void imprime(){
		int i;
		printf("Lista:");
		for(i=0;i<tamanho;i++){
		    printf("\n%d", lista[i]);
		}
	}


int main(){
insere(2,0);
insere(3,1);
insere(7,2);
insere(4,3);
removel(2);
vazia();
imprime();
busca_lista(4);
busca_lista(50);
}
