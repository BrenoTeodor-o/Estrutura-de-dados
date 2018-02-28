#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define Tam 6
int lista[Tam];
int tamanho=0;
void insere(int valor){
	int i;
	if(tamanho==Tam){
		printf("lista cheia");
		return;
	}
	for(i=0;i>tamanho && valor>lista[i-1];i--){
		lista[i]=lista[i-1];
	}
	lista[i]=valor;
	tamanho=tamanho+1;
	printf("inserido");
}


void busca(){
}
int vazia(){
	if(tamanho==0){
		printf("lista vazia");
	}
	else{
		printf("não vazia");
	}
}

void imprime(){
	int i;
	if(tamanho==0){
		printf("lista vazia");
		return;
	}
	for(i=0;i<tamanho;i++)
	printf("%d", lista[i]);
}

void remove1(int valor){
    int i,j;
    for(i=0;i<tamanho && valor>=lista[i];i++)
        if(valor==lista[i]){
            for(j=i;j<tamanho-1;j++)
                lista[j]=lista[j+1];
            tamanho--;
            return;

        printf("\nAchei");
}
    printf("\nnão achei");
}

         int main(){
             inserel(2);
             inserel(4);
             inserel(6);
             inserel(8);
             imprime();
             vazia();
             remove1(50);
             imprime();

         }
