#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#define Tam 7
int lista[Tam];
int tamanho=0;

void inserel(int valor){
	int i;
	if(tamanho==Tam){
		printf("\nA lista esta cheia");
		return;
	}
	for(i=tamanho;i>0 && valor<lista[i-1];i--){
	lista[i]=lista[i-1];}
	lista[i]=valor;
	tamanho=tamanho+1;
	printf("\nelemento inserido");
}

void busca(){
     }
int vazia(){
    if(tamanho==0){
        printf("\n vazia");
    }
    else{
        printf("\n n vazia");
    }
    }

void imprimel(){
	int i;
	printf("\nvetor:");
	if(tamanho==0){
		printf("\nlista vazia");
		return;
	}
	for(i=0;i<tamanho;i++){
						printf("%d ",lista[i]);
}
}

void removel(int valor){
    int i,j;
      printf("\n elemento removido");
    for(i=0;i<tamanho && valor>=lista[i];i++)
        if(valor==lista[i]){
            for(j=i;j<tamanho-1;j++)
                lista[j]=lista[j+1];
            tamanho--;
            return;

        printf("\nAchei ");
}
    printf("\nnão achei");
}

int main(){
inserel(3);
inserel(4);
inserel(5);
inserel(6);
inserel(7);
inserel(8);
inserel(9);

imprimel();
removel(5);
removel(7);
removel(9);
imprimel();
}
