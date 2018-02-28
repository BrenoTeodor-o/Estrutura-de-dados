#include <stdio.h>
#include <stdlib.h>

#define TAM 8

        int vertices[TAM];
        int adj[TAM][TAM];
        int cont=0;
        
        //insere vertice
        void insere_vertice(int valor){
             if(cont<TAM){
                          vertices[cont] = valor;
                          cont ++;                                       
             } else {
                          printf("\nERRO");
             }
        }
        
        //insere aresta
        void insere_aresta(int orig, int dest){
             int i=0;
             int j=0;
             
             while(i<cont && vertices[i] != orig)
                          i++;
             if(i==cont){
                         printf("\nVertice origem nao encontrado!");
                         return;
             }
             while(j<cont && vertices[j] != dest)
                          j++;
             if(j==cont){
                         printf("\nVertice destino nao encontrado!");
                         return;
             }
             adj[i][j]=1;
             printf("\nInserido com sucesso!");
        }
        
        //preenche matriz com 0
        void matriz_zero(){
             for(int i=0;i<TAM;i++){
                     adj[i][i]=0;                       
             }                  
             printf("\nTudo zerado!\n\n");
        }
                
        //remove aresta
        void remove_aresta(int orig, int dest){
             int i=0;
             int j=0;
             
             while(i<cont && vertices[i] != orig)
                          i++;
             if(i==cont){
                         printf("\nVertice origem nao encontrado!");
                         return;
             }
             while(j<cont && vertices[j] != dest)
                          j++;
             if(j==cont){
                         printf("\nVertice destino nao encontrado!");
                         return;
             }
             if(adj[i][j]==1){
                             adj[i][j]=0;
                             printf("\nRemovido com sucesso!");
             }
        }
        
        //imprime a matriz e o vetor
        void imprime(){
             int i=0;
             int j=0;
             
             printf("MATRIZ\n");
             for(i=0;i<TAM;i++){
                                for(j=0;j<TAM;j++){
                                                   printf(" %d ", adj[i][j]);                                
                                }
                                printf("\n");
             }
             printf("\nVETOR\n");     
             for(i=0;i<TAM;i++){
                                 printf(" %d ", vertices[i]);
             }
        }
        
        //main
        int main(){
            matriz_zero();
            imprime();
            printf("\n-------------------------------------------------");
            
            insere_vertice(1);
            insere_vertice(2);
            insere_vertice(3);
            insere_vertice(6);
            insere_vertice(7);
            insere_vertice(8);

            printf("\n\n");            
            imprime();
            printf("\n-------------------------------------------------");
            
            insere_aresta(1,2);
            insere_aresta(1,3);
            insere_aresta(3,6);
            insere_aresta(2,7);
            insere_aresta(8,6);
                        
            printf("\n\n");
            imprime();                      
            printf("\n-------------------------------------------------");
            
            remove_aresta(8,6);
            remove_aresta(1,4);
            
            printf("\n\n");
            imprime();
            printf("\n-------------------------------------------------");
                        
            printf("\n\n");
            system("pause");
        }
        
