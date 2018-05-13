#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>
#include <string.h>


typedef struct{
    int chave;
}REGISTRO;

typedef struct aux{
    REGISTRO reg;
    struct aux* prox;
}ELEMENTO, *PONT;

typedef struct {
   PONT inicio;
   PONT fim;
}FILA;
//=====================================================================
void init(FILA* f){
    f->inicio=NULL;
    f->fim=NULL;
}
void tam(FILA* f){
    PONT end =f->inicio;
    int tam=0;
        while(end != NULL){
        tam++;
        end=end->prox;
        }
        printf("\nNº de elementos = %d",tam);
}

void exibir(FILA* f){
    PONT end = f->inicio;
    printf("Fila:  ");
    while(end != NULL){
      printf(" %d ",end->reg.chave);
      end = end->prox;
    }
    printf("\n");
}
void inserir(FILA* f,int re){
    PONT novo  =(PONT)malloc(sizeof(ELEMENTO));
    novo->reg.chave=re;
    novo->prox=NULL;
    if(f->inicio ==NULL)
        f->inicio=novo;
    else
    f->fim->prox=novo; //o prox do ''fim'' anterior agora recebe um novo valor
    f->fim=novo;  //esse novo valor agora aponta para fim sendo ele agora o novo final
}

void excluir(FILA* f){
    if(f->inicio ==NULL)
        printf("Fila vazia!");
    PONT apagar =f->inicio;
    f->inicio = f->inicio->prox;
    free(apagar);

    if(f->inicio == NULL)
    f->fim=NULL;
}

void zerar(FILA* f){
    PONT end = f->inicio;
    while(end != NULL){
        PONT apagar = end; //apagar recebe o valor de inicio do end
        end = end->prox;//end agora recebe o valor do seu proximo e repete esse processo enquanto não houver null
        free(apagar);
    }
    f->inicio=NULL;
    f->fim=NULL;
}

int main(){
setlocale(LC_ALL, "Portuguese");
FILA *f= (FILA *)malloc(sizeof(FILA));

inserir(f,10);
inserir(f,11);
inserir(f,12);
exibir(f);
tam(f);
printf("\n");
excluir(f);
printf("\n");
exibir(f);
tam(f);
printf("\n");


system("pause");
return 0;
}
// como fazer ele reconhecer como inteiro os valores impressos
