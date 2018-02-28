/*
|
|   @author Breno Teodoro
|   Universidade Estadual de Ponta Grossa
|   Matéria: Estrutura de Dados
|   Profº. Mathias Talevi Betim
|
|
*/

#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#define TAM 10


/*DEFINIÇÕES DE VARIÁVEIS*/
int i = 0;

/*------------------------*/

void helloWorld()
{
printf("Hello World!");
}


int insere(int valor) 
{
vetor[count] = valor;
count++;
printf("\nValor inserido com sucesso!\n");
return 1;
}

int exclui(int valor)
{
for(i = 0; i < TAM; i++){
	if (vetor[i]==valor)
	{
		vetor[i] = 0;
	}
}
printf("\n valor deletado \n");
}

void imprime()
{
printf("\n \n vetor impresso: \n");
	for(i = 0; i < TAM; i++)
	{
	    printf("%d ; ", vetor[i]);//vetor de inteiro	
	}	
}
