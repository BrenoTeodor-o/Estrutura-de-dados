/*
|UNIVERSIDADE ESTADUAL DE PONTA GROSSA
| Breno Ribeiro Teodoro
| 15059823
| Estrutura de Dados
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ArvoreBinaria.h"

int main () {
	int elemento = 0, qtd_nos = 0, i = 0, num = 0;
	
	no *raiz = NULL;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t ARVORE BINARIA DE BUSCA\n\n");
		
	printf("Quantos elementos voce deseja inserir na Arvore? ");
	scanf("%d", &qtd_nos);
	
	for (i = 0; i < qtd_nos; i++) {
		printf("\n- Insira o %d elemento na arvore: ", i + 1);
		scanf("%d", &elemento);
		
		printf("\n");
		inserirNo(&raiz, elemento);
		printf("\n");
	}
	
	printf("\n\n================================\n\n");
	
	printf("Imprime Raiz: %d\n\n", imprimeRaiz(raiz));
	
	printf("\n\n================================\n\n");
	
	printf("Arvore sendo percorrida em Pre-Ordem\n\n");
	exibir_Pre_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("Arvore sendo percorrida em Ordem\n\n");
	exibir_Em_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("Arvore sendo percorrida em Pos-Ordem\n\n");
	exibir_Pos_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("\tRemoão de elementos\n\n");
	
	printf("Quantos elementos você deseja remover da arvore? ");
	scanf("%d", &qtd_nos);
	
	for (i = 0; i < qtd_nos; i++) {
		printf("\n- Digite o elemento a ser removido da arvore: ", i + 1);
		scanf("%d", &elemento);
		
		printf("\n");
		removerNo(&raiz, elemento);
		printf("\n");
	}
	
	printf("\n\n================================\n\n");
	
	printf("Imprime Raiz: %d\n\n", imprimeRaiz(raiz));
	
	printf("\n\n================================\n\n");
	
	printf("Arvore sendo percorrida em Pre-Ordem\n\n");
	exibir_Pre_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("Arvore sendo percorrida em Ordem\n\n");
	exibir_Em_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("Arvore sendo percorrida em POs-Ordem\n\n");
	exibir_Pos_Ordem(raiz);
	
	printf("\n\n================================\n\n");

	printf("Altura da arvore: %d\n\n", altura(raiz));

	printf("\n\n================================\n\n");

	printf("eh estritamente binaria? ", estbinaria(raiz));
	if (estbinaria(raiz) == 1) printf("sim");
	
	else printf("nao");
	
	printf("\n\n================================\n\n");
	// qtde_nos(raiz);
	printf("\n");
	printf("item buscado -> %d", buscar(raiz, 74));
	printf("\n");

	return 0;
}
