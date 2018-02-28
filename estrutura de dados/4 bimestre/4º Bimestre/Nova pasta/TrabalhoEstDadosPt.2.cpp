#include<stdlib.h>
#include<stdio.h>

#define TAM 50000 //tamanho do vetor
#define TAMb 1500 //quantidade de repeticoes
	
int vet[TAM];

struct no {
   	int dado;
   	struct no *esq;
   	struct no *dir;
	int bal;
};

struct no* raiz, *raiz_avl;
float contseq,contbin,contabb,contavl;
int i,j,piv;
	
//vetor aleatorio_____________________________________________	
void random(){
	for(int i=0;i<TAM;i++)
	vet[i] = rand();
}

//inserir arvore ABB__________________________________________
void insere_ABinaria(int valor){
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

   while (1){
      	if (valor < atual->dado)
            if (atual->esq==NULL){
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

//inserir arvore AVL__________________________________________
//Rotação para esquerda
void esquerda(struct no *p) {

	struct no *q, *hold;

   q = p->dir;
   hold = q->esq;
   q->esq = p;
   p->dir = hold;

}

//Rotação para a direita
void direita(struct no *p) {
   struct no *q, *hold;

   q = p->esq;
   hold = q->dir;
   q->dir = p;
   p->esq = hold;
}

// Cria um nó
struct no *cria_no(int valor){
    struct no *aux = new (struct no);
    aux->dado=valor;
    aux->dir=NULL;
    aux->esq=NULL;
    aux->bal=0;
    return aux;
};

void insere_AVL(int chave){

   struct no *pp=NULL, *p=raiz_avl, *pajovem=NULL, *ajovem=raiz_avl, *q, *filho;
   int imbal;

   if (p==NULL){ /* Arvore vazia */                              
   	  raiz_avl = cria_no(chave);  /* Funcao para criacao de um novo no */
      return;
   }

/* Insere chave e descobre ancestral mais jovem a ser desbalanceado */
   while (p!=NULL) {
   		if (chave < p->dado){
   			q = p->esq;	
    	}	
   	    else q = p->dir;
        if (q!=NULL){
        	if (q->bal != 0) {
         		pajovem=p;
            	ajovem=q;
            }
		}
       pp = p;
       p = q;
   }

   q = cria_no(chave);

   if (chave<pp->dado){
   		pp->esq=q;
   }	
   else{
		pp->dir=q;
   } 

/* Balanceamento de todos os nós entre ajovem e q devem ser ajustados */
   if (chave<ajovem->dado){
   		filho = ajovem->esq;
   }
   else{
   		filho = ajovem->dir;
   } 
   p = filho;

   while (p!=q){
   	if (chave < p->dado) {
 	  		p->bal=1;
			p=p->esq;
		} 	
	else {
   		p->bal = -1;
		p=p->dir;
   	}
   }

   if (chave<ajovem->dado){
   		imbal = 1;
   }
   else imbal = -1;

   if (ajovem->bal==0){ /*Não houve desbalanceamento */      
   		ajovem->bal=imbal;
        return;
   }


	if (ajovem->bal!=imbal){ /*Não houve desbalanceamento */   
   		ajovem->bal=0;
        return;
   }

   if (filho->bal == imbal){ /* Houve desbalanceamento */
   		p=filho;
        if (imbal==1){ /* Faz rotação simples */
			direita(ajovem);
		}       	
      	else esquerda(ajovem);
      	
       	ajovem->bal=0;
        filho->bal=0;
   } 
   else {
   		if (imbal==1){ /*Faz rotação dupla */	  
      		p=filho->dir;
         	esquerda(filho);
         	ajovem->esq=p;
         	direita(ajovem);
      	} 
		else {
            p=filho->esq;
            direita(filho);
            ajovem->dir=p;
            esquerda(ajovem);
        }
        if (p->bal==0) {
         	ajovem->bal=0;
            filho->bal=0;
        } 
		else {
        	if (p->bal == imbal) {
               	ajovem->bal = - imbal;
                filho->bal = 0;
            } 
			else {
               	ajovem->bal = 0;
                filho->bal = imbal;
            }
        }
        p->bal=0;
   }

   if (pajovem == NULL){ /* Ajusta ponteiro do pai do ancestral mais jovem */
    	raiz_avl = p;
	}
    else if (ajovem==pajovem->dir){
    	pajovem->dir = p;
	}			 
    else pajovem->esq = p;

   return;
}

//ordenar o vetor com QuickSort_______________________________
int partition(int p, int r){
	piv = vet[p];
	i = p - 1;
	j = r + 1;
	
	while(true){
		do{
			j = j -1;		
		}while(vet[j] > piv);

		do{
			i = i + 1;
		}while(vet[i] < piv);

		if(i < j){
			int aux;
			aux=vet[i];
			vet[i]=vet[j];
			vet[j]=aux;
		}
		else{
			return j;
		}
	}
}

void quick_sort(int p, int r){
	if(p < r){
		int q = partition(p, r);
		quick_sort(p,q);
		quick_sort(q+1,r);
	}
}

//buscar a chave usando busca:________________________________
//sequencial
void buscaSeq(int valor){
	//int contseq = 0;
	for(int i=0;i<TAM;i++){
		contseq++;
		if(valor == vet[i]){
			return;
		}
	}
}
//binaria
void buscaBin(int valor){
	int prim,meio,ult;
	prim = 0;
	ult = TAM-1;
	
	//int contbin = 0;
		
	while(prim<=ult){
		meio = (prim + ult)/2;
		contbin++;
		
		if(vet[meio] == valor){
			return;	
		}
		
		if(valor < vet[meio])
			ult = meio-1;
		
		else 
			prim = meio+1;
	}
}
//arvore binaria
	//int contabb=0;
void em_ordem(struct no *aux){
	if(aux != NULL){
		em_ordem(aux->esq);
		printf("%d\n",aux->dado);
		em_ordem(aux->dir);
	}
}

void Arvore_busca_Binaria(int valor){
	struct no *atual;
	atual = raiz;
	while(atual != NULL){
		contabb++;
		if(atual->dado == valor){
			return;
		}
		if(valor < atual->dado)
			atual = atual->esq;
		else atual = atual->dir;
	}
}
//arvore AVL
void busca_avl(int valor){
	
	struct no *atual=raiz_avl;
	while(atual != NULL){
		contavl++;
		if(atual->dado==valor){	
			return;
		}
		if(valor < atual->dado){
			atual = atual -> esq;
		}
		else{
			atual = atual->dir;
		}
	}
}

//imprime_____________________________________________________
void imprime(){
	for(int i=0;i<TAM;i++){
		printf("(%d) ",vet[i]);
	}
}
//main________________________________________________________
int main(){
	
	random();

	for(int i=0;i<TAM;i++){
		insere_ABinaria(vet[i]);
		insere_AVL(vet[i]);
	}
	
	quick_sort(0,TAM -1);	
	
	int v,a=TAMb;
	printf("Para %d repeticoes e com %d numeros\n\n",a,TAM);
	
	while(a>0){
		v = rand();
		//v = vet[a];
		buscaSeq(v);
		buscaBin(v);
		Arvore_busca_Binaria(v);
		busca_avl(v);
		a--;
	}
	
	printf("Busca Sequencial: %.1f comparacoes em media\n",contseq/TAMb);
	printf("Busca Binaria: %.1f comparacoes em media\n",contbin/TAMb);
	printf("Busca Arvore Binaria: %.1f comparacoes em media\n",contabb/TAMb);
	printf("Busca AVL: %.1f comparacoes em media\n",contavl/TAMb);
}
