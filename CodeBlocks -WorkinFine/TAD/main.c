/* Programa Usu�rio do TAD */
/* Feito por Luiz Gustavo Nunes */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "vetor.h"

int main() {
setlocale(LC_ALL, "Portuguese");
printf("Inserindo valores nos vetores: \n");
printf("Inserindo o n�mero 0:");
insere(0,0);
printf("\nInserindo o n�mero 1:");
insere(1,1);
printf("\nInserindo o n�mero 2:");
insere(2,2);
printf("\nInserindo o n�mero 3:");
insere(3,3);
printf("\nInserindo o n�mero 4 em uma posi��o inexistente:");
insere(4,8);
printf("\n\nImprimindo o vetor ap�s inserir valores: ");
imprime();
printf("\n");
printf("\nRemovendo o n�mero 3 na quarta posi��o do vetor:");
removel(3);
printf("\n\nImprimindo o vetor ap�s remover valores: ");
imprime();
printf("\n");
printf("\nRemovendo o n�mero 3 ap�s o mesmo j� ter sido removido: ");
removel();
printf("\n");
printf("\nBuscando o n�mero 2 no vetor: ");
busca_lista(2);
printf("\n");
printf("\nBuscando o n�mero 3 no vetor: ");
busca_lista(4);
printf("\n");
printf("\nAdicionando o n�mero 7 na posi��o 2:");
alterar(2,7);
imprime();

return 0;
}
