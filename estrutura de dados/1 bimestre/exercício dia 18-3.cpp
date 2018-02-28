#include<stdio.h>
#define Tam 10
int vetor[Tam], vet2[10];
int main(){
	int i, maior, menor, repeticao, media, soma, k, count;
	for (i=0;i<Tam;i++){
		printf("Digite o valor da posicao oii %d:", i);
		scanf("%d",&vetor[i]);
	}
	for (i=9;i>=0;i--)
	  printf("%d ",vetor[i]);
	printf(" \n "); 
	
	maior=vetor[0]; //define maior como sendo vetor índice 0
                       for(i=0; i<Tam; i++){
                                if(vetor[i]>maior){
                                maior=vetor[i]; 
								  }
}
								  printf("\no maior elemento e %d", maior);
	menor=vetor[0];
                       for(i=0; i<Tam; i++){
                                if(vetor[i]<menor){
                                menor=vetor[i];
                                }
                                }
                                printf("\no menor valor e %d", menor);
    soma=0;
    					for(i=0; i<Tam; i++){
    						soma=soma+vetor[i];
    					}
    					media=soma/10;
    					printf("\nmedia %d", media);
    printf("digite o numero que deseja pesquisar");
    scanf("%d",&k);
    					for(i=0;i<Tam;i++){
    						if(k==vetor[i])
    						count++;
    						vet2[i]=i;
    					}
    					printf("esse numero aparece %d vezes", count);
						for(i=0;i<Tam;i++)
						printf("o vetor %d", vet2[i]); 					
}
