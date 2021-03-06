// 1º cria um vetor com os valores de 0-499
// faz 1000 buscas randomicas
// numero medio de comparações
// 2º cria um vetor com os valores randomico
// faz 1000 buscas randomicas
// numero medio de comparações

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TAM 500


int cont, cont_avl;

struct no {
    int dado;
    struct no *esq;
    struct no *dir;
    int bal;
};

struct no* raiz, *raiz_avl;

// Rota��o para a esquerda
void esquerda(struct no *p) {

	struct no *q, *hold;

   q = p->dir;
   hold = q->esq;
   q->esq = p;
   p->dir = hold;

}

//Rota��o para a direita
void direita(struct no *p) {

	struct no *q, *hold;

   q = p->esq;
   hold = q->dir;
   q->dir = p;
   p->esq = hold;

}

// Cira um no e preenche os membros
struct no *cria_no(int valor){
    struct no *aux = new (struct no);
    aux->dado=valor;
    aux->dir=NULL;
    aux->esq=NULL;
    aux->bal=0;
    return aux;
};


void insere_avl(int chave) //arvore balanceada AVL
{

	struct no *pp=NULL, *p=raiz_avl, *pajovem=NULL, *ajovem=raiz_avl, *q, *filho;
   int imbal;

   if (p==NULL) {             /* Arvore vazia */
   	  raiz_avl = cria_no(chave);  /* Funcao para criacao de um novo no */
      return;
   }

/* Insere chave e descobre ancestral mais jovem a ser desbalanceado */
   while (p!=NULL) {
   	if (chave < p->dado)
      	q = p->esq;
         else q = p->dir;
      if (q!=NULL)
      	if (q->bal != 0) {
         	pajovem=p;
            ajovem=q;
      }
      pp = p;
      p = q;
   }

   q = cria_no(chave);

   if (chave<pp->dado)
   	pp->esq=q;
      else pp->dir=q;

/* Balanceamento de todos os n�s entre ajovem e q devem ser ajustados */
   if (chave<ajovem->dado)
   	filho = ajovem->esq;
      else filho = ajovem->dir;

   p = filho;

   while (p!=q) {
   	if (chave < p->dado) {
      	p->bal=1;
         p=p->esq;
   	} else {
   			p->bal = -1;
            p=p->dir;
   			}
   }

   if (chave<ajovem->dado)
   	imbal = 1;
      else imbal = -1;

   if (ajovem->bal==0) {      /*N�o houve desbalanceamento */
   	ajovem->bal=imbal;
      return;
   }


	if (ajovem->bal!=imbal) {   /*N�o houve desbalanceamento */
   	ajovem->bal=0;
      return;
   }

	/* Houve desbalanceamento */
   if (filho->bal == imbal) {
   	p=filho;
      if (imbal==1)        /* Faz rota��o simples */
      	direita(ajovem);
      	else esquerda(ajovem);
      ajovem->bal=0;
      filho->bal=0;
   } else {
   		if (imbal==1) {	  /*Faz rota��o dupla */
      		p=filho->dir;
         	esquerda(filho);
         	ajovem->esq=p;
         	direita(ajovem);
      	} else {
              p=filho->esq;
              direita(filho);
              ajovem->dir=p;
              esquerda(ajovem);
         }
         if (p->bal==0) {
         	ajovem->bal=0;
            filho->bal=0;
         } else {
         		if (p->bal == imbal) {
               	ajovem->bal = - imbal;
                  filho->bal = 0;
               } else {
               	ajovem->bal = 0;
                  filho->bal = imbal;
               }
         }
      p->bal=0;
   }

   if (pajovem == NULL)  /* Ajusta ponteiro do pai do ancestral mais jovem */
      raiz_avl = p;
      else if (ajovem==pajovem->dir)
      			 pajovem->dir = p;
                else pajovem->esq = p;

   return;
}

void insere_abb(int valor) //ABB
{

   struct no *atual, *aux;

   aux = new(struct no);
   aux->dado = valor;
   aux->esq = NULL;
   aux->dir = NULL;

   atual=raiz;

   if (atual==NULL) {
   	  raiz = aux;
   	  return;
   }

   while (1) {
         	if (valor < atual->dado)
            	if (atual->esq==NULL) {
            	    atual->esq=aux;
            	    return;
                 }
                 else atual=atual->esq;
            else if (atual->dir==NULL) {
            	    atual->dir=aux;
            	    return;
                 }
                 else atual=atual->dir;
         }
}
 



void busca_avl(int valor){ //*******************************
  struct no *atual = raiz_avl;
  while(atual!=NULL){
    cont_avl++;
    if (atual -> dado == valor){
      return;
    }
    if (valor < atual -> dado){
      atual = atual->esq;
    }else{
      atual=atual->dir;
    }
  }
}

void busca_abb(int valor){ //***************
  struct no *atual = raiz;
  while(atual!=NULL){
    cont++;
    if (atual -> dado == valor){
      return;
    }
    if (valor < atual -> dado){
      atual = atual->esq;
    }else{
      atual=atual->dir;
    }
  }
}

// Apaga todos os elementos de uma �rvore bin�ria.
// Recebe como par�metro a raiz da �rvore a ser apagada
void apaga(struct no *atual)
{
	if (atual!=NULL) {
   	   apaga(atual->esq);
       apaga(atual->dir);
       delete(atual);
	}
}

 


int main(){
 	// PARA O VETOR FIXO
	for(int i=0; i <TAM;i++){
		insere_abb(i);
		insere_avl(i);
	}
	for(int i;i<1000;i++){
		int valor=rand();
		busca_abb(valor);
		busca_avl(valor);
		
	}
	printf("\t\t\t == VETOR 0-500 ==\n\n");
	printf("ABB: %f COMPARACOES \n", (float)cont/1000);
	printf("AVL: %f COMPARACOES \n", (float)cont_avl/1000);
	
	apaga(raiz);
	apaga(raiz_avl);
	
	raiz=NULL;
	raiz_avl=NULL;
	cont=0;
	cont_avl=0;


	
		// para o vetor rand
	for(int i=0; i <TAM;i++){
		int valor_insere = rand();
		insere_abb(valor_insere);
		insere_avl(valor_insere);
	}
	for(int i;i<1000;i++){
		int valor_busca=rand();
		busca_abb(valor_busca);
		busca_avl(valor_busca);
		
	}
	printf("\t\t\t\n\n == VETOR RANDOMICO ==\n\n");
	printf("ABB: %f COMPARACOES \n", (float)cont/1000);
	printf("AVL: %f COMPARACOES \n", (float)cont_avl/1000);
	
	
	
	
	

 
}


