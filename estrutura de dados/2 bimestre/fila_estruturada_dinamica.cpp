#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

struct no {
int dado;
struct no *prox;
};
//ponteiros que serao armazenados na memoria em uma posição qualquer 
//e no inicio não apontam p lugar nenhum pq a fila esta vazia
struct no *inicio= NULL; 
struct no *fim= NULL;

// inserção
	void insere(int valor){
		struct no *aux;aux=new(struct no); //variavel dinamica composta que armazena um espaço de memoria
//ponteiro aux diz qual a posição da proxima variavel
		aux->dado=valor;  //quando ele ler o aux ele vai ler o numero que contem nessa posição, esse numero se torna a proxima posição onde se encontra o prox valor
		aux->prox=NULL; //aponta p null pq depois dele ñ vem mais ngm
		if (fim==NULL){
			fim=aux; //fim aponta p mesmo lugar que aux aponta
			inicio=aux;
		}else{
			fim->prox=aux;
			fim=aux;
		}
	}
	
//Imprime
	void imprime(){
		struct no *aux;
		if(inicio==NULL){
			printf("fila vazia");
			return;
		}
		aux=inicio;
		while(aux!=NULL){
			printf("%d", aux->dado);
			aux=aux->prox; //recebe o campo prox do proprio elemento que ele ta apontando
		}
	}
	
	void removef(){
		struct no *aux;
		if(inicio==NULL){
		printf("fila vazia");
		return;
		
	}
		aux=inicio;
		inicio=inicio->prox;
		if(inicio==NULL)
		fim=NULL;
		delete(aux); //apago a variavel que aponta p aux	
}
	
	int main() {
	}
