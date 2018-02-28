#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define Tam 5
int fila[Tam];
int inicio=0;
int fim=0;
int cont=0

void insere(int valor){
	int i;
	if(cont=Tam){
		printf("fila cheia");
		return;
	}
	fila[fim]=valor;
	if(fim==Tam-1){
		fim=0;
	}
	else{
		fim=fim+1
	}
	cont=cont+1
	printf("elemento inserido");
}

void remove(){
	if(cont==0){
		printf("fila esta vazia");
		return;
	}
	if(inicio==Tam-1){
		inicio=0;
	}
	else{
		inicio=inicio+1;
	}
	cont=cont-1;
	printf("elemento removido");
}

void imprime(){
	int i,j;
	if(cont==0){
		printf("fila vazia");
		return;
	}
	j=inicio;
	for(i=0;i<cont;i++){
		printf("%d",fila[j]);
	}
	if(j==Tam-1){
		j=0;
	}
	else{
		j=j+1;
	}
}
int main(){
    int numero;
    inseref(1);
    inseref(3);
    inseref(5);
    removef();
    imprimef();
     system ("pause");
}
