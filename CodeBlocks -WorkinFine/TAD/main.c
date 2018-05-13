/* Programa Usuário do TAD */
/* Feito por Luiz Gustavo Nunes */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetor.h"

int main() {
setlocale(LC_ALL, "Portuguese");
printf("Inserindo valores nos vetores: \n");
printf("Inserindo o número 0:");
insere(0,0);
printf("\nInserindo o número 1:");
insere(1,1);
printf("\nInserindo o número 2:");
insere(2,2);
printf("\nInserindo o número 3:");
insere(3,3);
printf("\nInserindo o número 4 em uma posição inexistente:");
insere(4,8);
printf("\n\nImprimindo o vetor após inserir valores: ");
imprime();
printf("\n");
printf("\nRemovendo o número 3 na quarta posição do vetor:");
removel(3);
printf("\n\nImprimindo o vetor após remover valores: ");
imprime();
printf("\n");
printf("\nRemovendo o número 3 após o mesmo já ter sido removido: ");
removel();
printf("\n");
printf("\nBuscando o número 2 no vetor: ");
busca_lista(2);
printf("\n");
printf("\nBuscando o número 3 no vetor: ");
busca_lista(4);
printf("\n");
printf("\nAdicionando o número 7 na posição 2:");
alterar(2,7);
imprime();

return 0;
}
