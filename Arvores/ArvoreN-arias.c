/*
|UNIVERSIDADE ESTADUAL DE PONTA GROSSA
| Breno Ribeiro Teodoro
| 15059823
| Estrutura de Dados
*/

#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef int bool;
typedef char TIPOCHAVE;

typedef struct no{
    TIPOCHAVE chave;
    struct no *primFilho;
    struct no *proxIrmao;
} NO;

typedef NO* PONT;

PONT CriaNovoNo(TIPOCHAVE ch){
    PONT novo = (PONT)malloc(sizeof(NO));
    novo->primFilho = NULL;
    novo->proxIrmao = NULL;
    novo->chave = ch;
    return(novo);
}

PONT inicializa(TIPOCHAVE ch){
    return(CriaNovoNo(ch));
}

PONT buscaChave(TIPOCHAVE ch, PONT raiz){
    if(raiz == NULL) return NULL;
    if(raiz->chave == ch) return raiz;
    PONT p = raiz->primFilho;
    while(p){
        PONT resp = buscaChave(ch, p);
        if(resp) return(resp);
        p = p->proxIrmao;
    }
    return(NULL);
}

bool insere(PONT raiz, TIPOCHAVE novaChave, TIPOCHAVE chavePai){
    PONT pai = buscaChave(chavePai,raiz);
    if(!pai) return(false);
    PONT filho = CriaNovoNo(novaChave);
    PONT p = pai->primFilho;
    
    if(!p) pai->primFilho = filho;
    else{
        while(p->proxIrmao)
        p = p->proxIrmao;
        p->proxIrmao = filho;

    }
}

void exibirArvore(PONT raiz){
    if(raiz == NULL) return;
    printf("%c(", raiz->chave);
    PONT p = raiz->primFilho;
    while (p){
        exibirArvore(p);
        p = p->proxIrmao;
    }
}

int main()
{
    PONT r = inicializa('a');
    insere(r, 'b', 'a');
    insere(r, 'c', 'a');
    insere(r, 'd', 'b');
    insere(r, 'e', 'b');
    insere(r, 'f', 'b');
    insere(r, 'g', 'b');
    insere(r, 'h', 'd');
    insere(r, 'i', 'd');
    printf("\n");
    exibirArvore(r);

    return 0;
}
