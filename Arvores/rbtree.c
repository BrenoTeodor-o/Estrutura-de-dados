#include <stdio.h>
#include <stdlib.h>
#include "DSGraph.h"
 
int main()
{
 
    init($ARVORE_VERMELHO_PRETO);
 
    NO *raiz = NULL;
 
    criarArvore(raiz);
 
    raiz=  inserir(raiz, 13);
    raiz=  inserir(raiz, 8);
    raiz=  inserir(raiz, 17);
    raiz=  inserir(raiz, 11);
    raiz=  inserir(raiz, 1);
    raiz=  inserir(raiz, 15);
    raiz=  inserir(raiz, 25);
    raiz=  inserir(raiz, 27);
    raiz=  inserir(raiz, 22);
 
    show(raiz,0);
    setSleepTime(5);
    terminateDSGraph();
 
    return 0;
}