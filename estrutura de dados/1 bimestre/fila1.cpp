#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define TAM 6
       int fila[TAM];
       int inicio=0;
       int fim=0;
       int cont=0;

       void insere(int valor){
            if(cont==TAM){
                          printf("Fila cheia");
                          return;
                          }
                          fila[fim]=valor;
                          if(fim==TAM-1)
                          fim=0;
                          else{ fim=fim+1;
                          }
                          cont=cont+1;
                          printf("\n elemento inserido com sucesso\n");
                          }  
                          
       void removef(){
            if(cont==0){
                        printf("Fila vazia");
                        return;
                        }
                        if(inicio==TAM-1)
                        inicio=0;
                        else inicio=inicio+1;
                        cont=cont-1;
                        printf("o elemento foi removido");
}
       int vazia(){
        if(cont==0)
        return 1;
        else
        return 0;
         }
            
         void imprime(){
              int i,j;
              if(cont==0){
                           printf("fila vazia");
                           return;
                           }
                           j=inicio;
                           for(i=0;i<cont;i++){
                                               printf("\n%d\n",fila[j]);
                                               if(j==TAM-1)
                                               j=0;
                                               else j=j+1;
                                               }
                                               }
                                    
                                         
                                                       
int main(){
    int numero;
    insere(1);
    insere(3);
    insere(5);
    removef();
    imprime();
     system ("pause");
}
