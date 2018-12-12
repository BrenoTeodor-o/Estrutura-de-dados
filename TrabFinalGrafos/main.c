#include <stdlib.h>
#include <stdio.h>

int main(){


    lerGrafo();
	printf("\n ---------------- LISTA IMPRESSA IMPRESSA ---------------- \n");
	ImprimeLista();
	printf("\n ---------------- CRIANDO ARQUIVO DE SAIDA ---------------- \n");
	criarArquivo();
	printf("\n ---------------- BUSCANDO O ELEMENTO EM PROFUNDIDADE ---------------- \n");
	buscaProfundidade(2);
	printf("\n ---------------- MATRIZ IMPRESSA ---------------- \n");
	ImprimeMatriz();
	printf("\n ---------------- ARQUIVO DE SAIDA AGORA ESTÁ POPULADO ---------------- \n");
    Imprimir();

    return 0;
}
