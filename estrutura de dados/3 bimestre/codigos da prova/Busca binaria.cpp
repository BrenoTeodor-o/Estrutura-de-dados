#include<stdio.h>
#include<stdlib.h>
#define tam 1000

int vetor[tam];
int contbin, contseq;

void buscabin(int valor){
     int prim = 0; 
     int ult = tam - 1;
     int meio = (ult + prim)/2;
     while(prim <= ult){
     contbin++;
     if(valor == vetor[meio]){
          printf("Posicao = %d\n", meio);
          return; 
           }
     else if(valor < vetor[meio]){
          ult = meio - 1;
          meio = (ult + prim)/2;
          }
     else {
          prim = meio + 1;
           meio = (ult + prim)/2;  
          }
          }
     printf("Nao encontrado\n");
     }
     
void sequencial(int valor){
     int i;
     for(i = 0; i < tam; i++){
           contseq++;
           if(valor == vetor[i]){
                    printf("Posicao = %d\n", i);
                    return;
                    }
     }
     printf("Valor não encontrado\n");
}       
     
void inserction_sort(){
     int i, k, x, y;
     bool found;
     for(k = 1; k <= tam-1; k++){
           x = vetor[k];
           i = k - 1;
           found = false;
           while ((found == false) && (i >= 0)){
                 if (vetor[i] > x){
                    y = vetor[i+1];
                    vetor[i+1]=vetor[i];
                    vetor[i] = y;
                    i--;
                 } else {
                    found = true;
                 }
           }
     }
}
     
void gera(){
     for(int i = 0; i < tam; i++)
             vetor[i] = rand();
     }     
     
int main(){
    gera();
    inserction_sort();
        //for(int i = 0; i < tam; i++)
          //  printf("%d\n",vetor[i]);
    buscabin(6334);
    printf("%d\n",contbin);
    sequencial(6334);
    printf("%d\n",contseq);
    system("pause");
    return 1;    
}     
