/*
|UNIVERSIDADE ESTADUAL DE PONTA GROSSA
| Breno Ribeiro Teodoro
| 15059823
| Estrutura de Dados
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
	struct no *esquerda;
	struct no *direita;
	int valor;
}no;

int maior(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}//maior

int altura(no *raiz){
   if((raiz == NULL) || (raiz->esquerda == NULL && raiz->direita == NULL))
       return 0;
   else
       return 1 + maior(altura(raiz->esquerda), altura(raiz->direita));
	printf("%d", altura);
}

int imprimeRaiz (no *raiz) {  // Imprime primeiro a raiz seguindo do filho esquerdo e depois o filho direito.
	
	if (raiz == NULL) {
		return 0;
	} else {
	printf(" - %d", raiz -> valor);
	}
}


void inserirNo (no **raiz, int elemento) {
	
	if (*raiz == NULL) {  					// Verifica se existe raiz
		no *aux = (no*) malloc (sizeof(no));  		// Alocação de variavel auxiliar
		aux -> valor = elemento;  			// Passa o valor elemento para variavel auxiliar
		aux -> direita = aux -> esquerda = NULL;  	// Coloca esq e dir como vazio
		*raiz = aux; 					// Adiciona a raiz
		printf("\tO elemento %d foi inserido com sucesso.", elemento);
		return;
	}
	
	if (elemento < (*raiz) -> valor) { 			// Verifica se o elemento inserido é menor que a raiz
		inserirNo(& (*raiz) -> esquerda, elemento);	// Adiciona um filho a esquerda 	
		return;
	}else if (elemento > (*raiz) -> valor) { 		// Verifica se o elemento inserido é maior que a raiz 
		inserirNo(& (*raiz) -> direita, elemento);	// Adiciona um filho a direita
		return;
	} else {						// Colisão de valores
		printf("\tO elemento %d NÃO foi inserido pois já existe na árvore", elemento);
	}
}

no *doisFilhos (no *root) {
	if (root == NULL) {
		return NULL;
	} else if (root -> esquerda == NULL) {
		return root;
	} else {
		return doisFilhos(root -> esquerda);
	}
}


void removerNo (no **raiz, int elemento) {
	
	if (elemento < (*raiz) -> valor) {
		removerNo(& (*raiz) -> esquerda, elemento);
		
		
	} else if (elemento > (*raiz) -> valor) {
		removerNo (& (*raiz) -> direita, elemento); 
		
		
	} else if ((*raiz) -> esquerda != NULL && (*raiz) -> direita != NULL) {	
		no *aux = NULL;
		aux = doisFilhos ((*raiz) -> direita);
		(*raiz) -> valor = aux -> valor;
		removerNo (&(*raiz) -> direita, (*raiz) -> valor);
		
		
	} else {
		no *aux = (*raiz);
		if ((*raiz) -> esquerda == NULL) { 	// Se não existe filho esquerdo então filho direito se torna raiz.
			(*raiz) = (*raiz) -> direita;
		} else {				// Se não existe filho direito então filho esquerdo se torna raiz.
			*raiz = (*raiz) -> esquerda;
		}
		free(aux);
		printf("\t Elemento removido da árvore.");
	}
}


void exibir_Pre_Ordem (no *raiz) {  // Imprime primeiro a raiz seguindo do filho esquerdo e depois o filho direito.
	
	if (raiz == NULL) {
		return;
	}
	printf(" - %d", raiz -> valor);
	exibir_Pre_Ordem(raiz -> esquerda);
	exibir_Pre_Ordem(raiz -> direita);
}

void exibir_Em_Ordem (no *raiz) {  // Imprime ordenadamento primeiro filho esquerdo, raiz e direito.
	
	if (raiz == NULL) {
		return;
	}
	exibir_Em_Ordem(raiz -> esquerda);
	printf(" - %d", raiz -> valor);
	exibir_Em_Ordem(raiz -> direita);
}

void exibir_Pos_Ordem (no *raiz) {  // Imprime primeiro o filho esquerdo seguido do direito e por ultimo a raiz.
	
	if (raiz == NULL) {
		return;
	}
	exibir_Pos_Ordem(raiz -> esquerda);
	exibir_Pos_Ordem(raiz -> direita);
	printf(" - %d", raiz -> valor);
}

int buscar(no *raiz, int elemento)
{
	int direita, esquerda;
	if(raiz==NULL)
		return 0;
	if(raiz->valor==elemento) //Localizou o noh
	{
		return 1;
	}
	if(elemento<raiz->valor) //Percorre pela esquerda, caso o numero seja menor do que a raiz
	{
		esquerda=buscar(raiz->esquerda,elemento);
	}
	else
	{
		direita=buscar(raiz->direita,elemento);
	}
	return esquerda+direita;
}

// int busca(no *raiz, int elemento) {
  
//   /* O operador lógico || interrompe a busca quando o elemento for encontrado */
//   return raiz->valor, num || busca(raiz->esquerda, num) || busca(raiz->direita, num);
// }

int estbinaria(no *raiz){
	if (raiz != NULL){
		if((raiz->direita == NULL && raiz->esquerda != NULL) || (raiz->direita != NULL && raiz->esquerda == NULL)){
			return 0;
		}else{
			return estbinaria(raiz->esquerda) && estbinaria(raiz->direita);
		}
	} else return 1;
}