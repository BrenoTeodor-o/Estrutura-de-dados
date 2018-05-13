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



/*DEFINIÇÕES DE VARIÁVEIS*/
int i = 0;

/*------------------------*/

void helloWorld()
{
	printf("\n helloWorld \n");
}
void empty(){
	if(contador == -1){
		printf("pilha vazia\n");
	}
}
void push(Aluno a1){
    if(contator > TAM)
    {
        printf("\n pilha cheia \n");
        return;
    }else{
    	contador=contador+1;
    	vetor[i]=Aluno;
    	printf("inserido\n");
    }
}
void init()
{
	if (contador==-1){
		contador++;
		printf("\ninicializado\n");
	}
}