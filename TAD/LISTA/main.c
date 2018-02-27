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
#include <stdlib.h> // a libc vai definir essas funções


 int main()
 {
    printf("\n*-------------------------------------------------*\n");
    //helloWorld();
    insere(1,0);
    insere(2,1);
    insere(3,2);
    insere(4,3);
    insere(5,4);
    insere(6,5);
    insere(7,6);
    insere(8,7);

    imprime();
    exclui(2);
    imprime();
    insere(3,2);
    imprime();
    printf("\n*-------------------------------------------------*\n");
 }



