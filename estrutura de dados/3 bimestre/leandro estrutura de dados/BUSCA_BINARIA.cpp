#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#define TAM 1000

int vetor[TAM] ;
int valor, contbin=0, contseq=0;
void gera(){
	for(int i=0; i<TAM; i++){
		vetor[i] = rand();	
	}

}

void busca_binaria(int valor){
	int meio, prim, ult;
	prim = 0;
	ult = TAM-1;
	while(prim<=ult){
		meio = (prim+ult)/2;
		contbin++;
		if(vetor[meio]==valor){
		//	printf("BUSCA BINARIA: VALOR ENCONTRADO!");
			return;
		}
		if(valor < vetor[meio]){
			ult = meio - 1;
		}else{
			prim = meio+1;
		}
	//	printf("BUSCA BINARIA: VALOR NAO ENCONTRADO!!");
		}
}

void busca_sequencial(int valor){
	for(int i=0; i<TAM && valor >= vetor[i]; i++){
		contseq++;
		if(valor == vetor[i]){
		//	printf("BUSCA SEQUENCIAL: VALOR ENCONTRADO!");
			return;
		}
		
	}
}

int partition(int esq, int dir){
    int x,y, i, j;
    x = vetor[esq];
    i = esq - 1;
    j = dir + 1;
    while(1){
        do
         	j--; 
            while(vetor[j] > x);
            	do
                	i++;
              		while(vetor[i] < x);
              		if(i < j){
                   		y = vetor[i];
                   		vetor[i] = vetor[j];
                   		vetor[j] = y;
              		} else {
                		return j;
              		}
    }
}   

void quickSort(int esq, int dir){
	
	
	
    int q;
    if(esq < dir){
    	q = partition(esq, dir);
        quickSort(esq, q);
        quickSort(q + 1, dir);
     }
}

int main(){
	gera();
	quickSort(0, TAM-1);
	for(int i=0; i<1000; i++){
		valor = rand();
		busca_binaria(valor);
		busca_sequencial(valor);
		
	}
	printf("\n\n\nBINARIA: %d\n\n\n", contbin/1000);
	printf("SEQUENCIAL: %d", contseq/1000);
	
	
	
}
