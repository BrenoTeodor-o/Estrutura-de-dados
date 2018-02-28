/*
|
|   @author Breno Teodoro
|   Universidade Estadual de Ponta Grossa
|   Matéria: Estrutura de Dados
|   Profº. Mathias Talevi Betim
|   
|
*/

#include "arquivo.c"
#include <stdio.h>
#include <stdlib.h> // a libc vai definir essas funções


int main()
{
    
    printf("\n*-------------------------------------------------*\n");
    insere(5);
    insere(7);
    insere(6);
    insere(4);
    insere(3);
    insere(2);
    printf("\n");
    imprime();
    exclui(5);
    exclui(7);
    alterar();
    imprime();
    printf("\n*-------------------------------------------------*\n");
}