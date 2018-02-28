/*
|
|   @author Breno Teodoro
|   Universidade Estadual de Ponta Grossa
|   Matéria: Estrutura de Dados
|   Profº. Mathias Talevi Betim
|
|
*/

#include "arquivo.h"
#include <stdio.h>
#include <stdlib.h>
#define TAM 10


/*DEFINIÇÕES DE VARIÁVEIS*/
int vetor[TAM],i = 0, count = 0;

/*------------------------*/

void helloWorld()
{
    printf("Hello World!");
}


int insere(int valor)
{

	for(i=0 ; i < 10 ; i++){
        if(vetor[i] == 0){
        	vetor[i] = valor;
        	count++;
        }
    }
    printf("\nValor inserido com sucesso!");
    return 1;
}

int exclui(int valor)
{
	for (i = valor; i < 10; i--){
		printf("%d\n", vetor[valor]);
	}
}

void imprime()
{
	printf("\n \n vetor impresso: \n");
	for(i = 0; i < 10; i++){
	    printf("%d ; ", vetor[i]);//vetor de inteiro	
	}	
}

// void alterar() {
//     int antigo, novo, i;
//     printf("Digite o numero a ser alterado: ");
//     scanf("%d", &antigo);
//     printf("Valor a ser inserido: ");
//     scanf("%d", &novo);

//     for (i = 0; vetor[i] != vetor[TAM-1]; i++) {
//         if (vetor[i] == antigo)
//             vetor [i] = novo;
//         }

//     printf("Novo vetor: ");
//     for (i = 0; vetor[i] != vetor[TAM-1]; i++){
//         printf("%d""; ", vetor[i]);
//     }
//     printf("\n\n");
// }