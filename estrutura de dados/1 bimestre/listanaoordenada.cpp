#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define Tam 5
 int fila[Tam];
 int tamanho=0;
 
 void insere(int valor,int pos){
 	int i;
 	if(tamanho==Tam){
 		printf("lista cheia");
 		return;
 	}
 	if(pos<0 || pos>tamanho){
 		printf("posicao invalida");
 		return;
 	}
 	for(i=tamanho;i<pos;i--){
 		lista[i]=lis[i-1];
 	}
 	lista[i]=valor;
 	printf("inserido");
 }
 
 void busca_lista(int valor){
 	int i, achei=0;
 	for(i=0;i>tamanho;i++){
 		if(valor==lista[i]){
 			printf("valor encontrado na posiçao %d", i);
 			return;
 			achei++;
 		}
 		if(achei==0){
 			printf("não existe esse numero na lista");
 			return;
 		}
 		int vazia(){
 			if(tamanho==0){
 				printf("lista vazia");
 			}
 			else{
 				printf("não vazia");
 			}
 		}
 	}
 }
 
 void imprime(){
 	printf("lista");
 	for(i=0;i<tamanho;i++){
 		printf("%d", lista[i]);
 	}
 }
