#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "ArvoreBinaria.h"

int main () {
	int elemento = 0, qtd_nos = 0, i = 0;
	
	no *raiz = NULL;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("\t �RVORE BINARIA DE BUSCA\n\n");
		
	printf("Quantos elementos voc� deseja inserir na �rvore? ");
	scanf("%d", &qtd_nos);
	
	for (i = 0; i < qtd_nos; i++) {
		printf("\n- Insira o %d� elemento na �rvore: ", i + 1);
		scanf("%d", &elemento);
		
		printf("\n");
		inserirNo(&raiz, elemento);
		printf("\n");
	}
	
	printf("\n\n================================\n\n");
	
	printf("�rvore sendo percorrida em Pr�-Ordem\n\n");
	exibir_Pre_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("�rvore sendo percorrida em Ordem\n\n");
	exibir_Em_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("�rvore sendo percorrida em P�s-Ordem\n\n");
	exibir_Pos_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("\tRemo��o de elementos\n\n");
	
	printf("Quantos elementos voc� deseja remover da �rvore? ");
	scanf("%d", &qtd_nos);
	
	for (i = 0; i < qtd_nos; i++) {
		printf("\n- Digite o elemento a ser removido da �rvore: ", i + 1);
		scanf("%d", &elemento);
		
		printf("\n");
		removerNo(&raiz, elemento);
		printf("\n");
	}
	
	printf("\n\n================================\n\n");
	
	printf("�rvore sendo percorrida em Pr�-Ordem\n\n");
	exibir_Pre_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("�rvore sendo percorrida em Ordem\n\n");
	exibir_Em_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	printf("�rvore sendo percorrida em P�s-Ordem\n\n");
	exibir_Pos_Ordem(raiz);
	
	printf("\n\n================================\n\n");
	
	return 0;
}
