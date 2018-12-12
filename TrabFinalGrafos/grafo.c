#include "grafo.h"
#include <string.h>

void lerGrafo(){
 char url[]="entrada.txt", ch;
 int i,a,b;
 FILE *arq;

 arq = fopen(url, "r");
 if(arq == NULL)
    printf("Erro, nao foi possivel abrir o arquivo\n");
 else{
     printf("\nO arquivo entrada.txt foi carregado com sucesso!\n\n");
  	fscanf(arq,"%d ", &aux);
}

 for(i=1; i<=aux; i++){
    lista[i].campo = 0;
    lista[i].prox = NULL;
  }
    fscanf(arq,"%d %d", &a, &b);

  while (!feof(arq)) {
  	matriz[a-1][b-1] = 1;
  	matriz[b-1][a-1] = 1;
    Inserir_Aresta(lista,a,b);
    Inserir_Aresta(lista,b,a);
    fscanf(arq,"%d%d", &a, &b);
    num++;
  }

    Imprimir(lista);
	for(i=1; i<=aux; i++){
		if(max < lista[i].campo){
    		max=lista[i].campo;
		}
		if(min >= lista[i].campo){
			min=lista[i].campo;
		}
	}

	printf("Numero de arestas: %d\n",num+1);
	printf("Numero de vertices: %d\n",aux+1);
	printf("grau maximo: %d\n",max);
	printf("grau minimo: %d\n",min);
	printf("grau medio: %d\n",(min+max)/2);
}

void arquivo(){
ITEM * tmp;
FILE *fp;
fp = fopen ( "saida.txt", "a" );
int i;
    for(i=1; i<=aux; i++) {
    tmp = lista[i].prox;
    fprintf(fp,"%d: (%d) ==>", i, lista[i].campo);
        while (tmp != NULL) {
            fprintf(fp,"%d  ", tmp->campo);
            tmp = tmp->prox;
        }
    fprintf(fp,"\n");
    }
}

void criarArquivo(ITEM *lista){
int result, i,j;
FILE *fp;
fp = fopen ( "saida.txt", "wt" );
char Str[100];

    if (fp == NULL){
        printf("Problemas na CRIACAO do arquivo\n");

    }else{
		fprintf (fp, "Numero de arestas: %d\n", num+1);
		fprintf (fp, "Numero de vertices: %d\n", aux+1);
		fprintf (fp, "Grau maximo: %d\n",max);
		fprintf (fp, "Grau minimo: %d\n",min);
		fprintf (fp, "Grau medio: %d\n",(min+max)/2);
		arquivo();
	}
	fclose (fp);
}

void ImprimeMatriz(){
int i, j;
	for(i =0 ; i<aux; i++){
		for (j=0; j<aux; j++){
			printf ("%d ", matriz[i][j]);
      	}printf ("\n");
	}
}

void ImprimeLista(){
int i;
ITEM * tmp;
    for(i=1; i<=aux; i++) {
    tmp = lista[i].prox;
    printf("%2d: (%d) ==>", i, lista[i].campo);
        while (tmp != NULL) {
            printf("%d  ", tmp->campo);
            tmp = tmp->prox;
        }
        printf("\n");
    }
}


void Imprimir(ITEM *lista){
int i,max=0;
ITEM * tmp;
    for(i=1; i<=aux; i++) {
        tmp = lista[i].prox;
        printf("%2d: (%d) ==>", i, lista[i].campo);
            while (tmp != NULL) {
            printf("%d  ", tmp->campo);
            tmp = tmp->prox;
            }
        printf("\n");
    }
}

int buscaProfundidade(int valor){
int i;
ITEM * tmp;
    for(i=1; i<=aux; i++) {
        tmp = lista[i].prox;
        while (tmp != NULL) {
            if(valor == tmp->campo){
                printf("%d  ", tmp->campo);
                return tmp->campo;
            }
        tmp = tmp->prox;
        }
        printf("\n");
    }
}

void Inserir_Aresta(ITEM *lista, int a, int b){
ITEM *aux;
ITEM *tmp;

aux = (ITEM*) malloc((int)sizeof(ITEM));    //retorno de um ponteiro genérico.
aux->campo = b;
aux->prox = NULL;

lista[a].campo++;
if(lista[a].prox == NULL) // Caso a lista estiver vazia - Insere.
    lista[a].prox = aux;
    else{
    tmp = lista[a].prox;
        if (tmp->campo > b) { //insere como primeiro da lista
        aux->prox = tmp;
        lista[a].prox = aux;
        }else if (tmp->prox == NULL) { //insere os vértices ordenados
            aux->prox = tmp->prox;
            tmp->prox = aux;
            }else{
                while((tmp->prox != NULL) &&(tmp->prox->campo < b))
	                tmp = tmp->prox;
                    aux->prox = tmp->prox;
                    tmp->prox = aux;
            }
    }
}

