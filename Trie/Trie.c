/*
|UNIVERSIDADE ESTADUAL DE PONTA GROSSA
| Breno Ribeiro Teodoro
| 15059823
| Estrutura de Dados
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N_ALFABETO 26

#define MAPEAMENTO(c) ((int)c-(int)'a')

#define true 1
#define false 0

typedef int bool;

struct No{
	struct No *filhos[N_ALFABETO];
	bool tipoRetornoTorF;
};

struct No *criaNo(){
	struct No *pNo	=	NULL;
	pNo=(struct No *) malloc(sizeof(struct No));
	if(pNo){
		int i;
		pNo->tipoRetornoTorF=false;
		for(i=0;i<N_ALFABETO;i++)
		pNo->filhos[i]=NULL;
	}
	return pNo;
	
}
 int mapearIndice (char c){
 return (( int ) c - ( int ) 'a');
} 

void inserir(struct No *raiz,const char *chave){
	int nivel;
	int comprimento	=	strlen(chave);
	int i;
	struct No *ponteiro	=	raiz;
	for(nivel= 0;nivel<comprimento;nivel++){
		i=mapearIndice(chave[nivel]);
		if(!ponteiro->filhos[i])
			ponteiro->filhos[i]=criaNo();
		ponteiro=ponteiro->filhos[i];
	}
	ponteiro->tipoRetornoTorF=true;
}

bool busca(struct No *raiz,const char *chave){
	int nivel;
	int comprimento	=	strlen(chave);
	int index;
	struct No *ponteiro = raiz;
	for(nivel=0;nivel<comprimento;nivel++){
		index=mapearIndice(chave[nivel]);
		if(!ponteiro->filhos[index])
			return false;
		ponteiro	=	ponteiro->filhos[index];
	}
	return (ponteiro!=NULL && ponteiro->tipoRetornoTorF);
}

void delete(struct No *raiz,const char *chave){
	int nivel;
	int comprimento	=	strlen(chave);
	int i;
	struct No *ponteiro	=	raiz;
	for(nivel= 0;nivel<comprimento;nivel++){
		i=mapearIndice(chave[nivel]);
		if(!ponteiro->filhos[i])
			return ;
		ponteiro=ponteiro->filhos[i];
	}
	ponteiro->tipoRetornoTorF=false;
}
int main(){
	char frase[]="o rato roeu a roupa do rei de roma e a rainha de raiva roeu o resto o rei entao ficou furioso e brigou com a rainha";
	int i, j, k, ant=0;
	
	struct No *raiz=criaNo();
	
	for(i=0;i<strlen(frase);i++){
		if(frase[i]==' '|| frase[i]=='\0'){
			char palavra[30];			
			for(j=ant,k=0;j<(i-1),k<(i-ant);j++,k++)
					palavra[k]=frase[j];	
			
			palavra[k]='\0';	
			inserir(raiz,palavra);
			ant=i+1;
			
		}
	}
	
	printf("\nFrase:\n");
	printf("%s\n", frase);
	
	printf("\nBuscando a palavra 'rato'...");
	if(busca(raiz,"rato"))
		printf("\nEncontrada!");
		
	(delete(raiz,"rei"));
		(delete(raiz,"rainha"));
			(delete(raiz,"rato"));
				(delete(raiz,"entao"));
					(delete(raiz,"roeu"));
						(delete(raiz, "furioso"));
		
	printf("\n\nVerificando se a palavra 'rato' foi deletada");	
	if(!busca(raiz,"rato"))
	printf("\nDeletada!");
	
	printf("\n\nVerificando se a palavra 'rei' foi deletada");	
	if(!busca(raiz,"rei"))
	printf("\nDeletada!");
	
	printf("\n\nVerificando se a palavra 'rainha' 'foi deletada");	
	if(!busca(raiz,"rainha"))
	printf("\nDeletada!");
	
	printf("\n\nVerificando se a palavra 'roeu' foi deletada");	
	if(!busca(raiz,"roeu"))
	printf("\nDeletada!");
	
	printf("\n\nVerificando se a palavra 'entao' foi deletada");	
	if(!busca(raiz,"entao"))
	printf("\nDeletada!");
	
	printf("\n\nVerificando se a palavra 'furioso' foi deletada");	
	if(!busca(raiz,"furioso"))
	printf("\nDeletada!");
	
}
