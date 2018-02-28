#include<conio.h>
#include<stdio.h>
#define Tam 4
int pilha[Tam];
int topo=-1;

void push(int valor){
	if(topo==Tam-1){
		printf("pilha cheia");
		return;
	}
	topo=topo+1;
	pilha[topo]=valor;
	printf("inserido");
}

void pop(){
	if(topo==0){
		printf("pilha vazia");
		return;
	}
	topo=topo-1;
	printf("elemento removido");
}

void imprime(){
	int i;
	if(topo==0){
		printf("pilha vazia");
		return;
	}
	for(i=0;i<=topo;i++){
		printf("%d",pilha[i]);
	}
}

void topo_pilha(){
	printf("pilha:");
	if(topo==0){
		printf("pilha vazia");
		return;
	}
	printf("%d",pilha[topo])
}

int main(){
	push(1);
	push(2);
	push(3);
	push(4);
	pop(2);
	imprime();
	topo_pilha();
}
