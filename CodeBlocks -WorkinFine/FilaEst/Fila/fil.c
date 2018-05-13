#include <stdio.h>
#include <stdlib.h>
#include "fil.h"

int v[N]={0,0,0,0,0};
int final=-1;
int topo=-1;

void push(){
    int val,i,j;
    if(topo==N-1){
    system("cls");
    printf("cheio!\n\n");
    }
    else{
    printf("Digite um inteiro positivo: ");
    scanf("%d",&val);
    topo++;
    v[topo]=val;
    final = v[0];
    for(i=0;i<N;i++){
    if (v[i]!=0 && v[i-1]!=0 && v[i+1]== 0)
    final = v[i];
    printf("%d ,",v[i]);
     }
     printf("\n");
     printf("Valor no topo = %d  || Valor no final = %d\n\n",v[0],final);
    }
}

void pop(){
    int i;
    if(topo==-1){
    system("cls");
    printf("vazio!\n\n");
    }
    else{
    for(i=0;i<N;i++){
    if(v[i+1] != 0)
    v[i]=v[i+1];
    else
    v[i]=0;
    }
    topo--;

    final = v[0];
    for(i=0;i<N;i++){
    if (v[i]!=0 && v[i-1]!=0 && v[i+1]== 0)
    final = v[i];
    printf("%d ,",v[i]);
    }

     printf("\n");
     printf("Valor no topo = %d  || Valor no final = %d\n\n",v[0],final);
    }
     for(i=0;i<N;i++)
    free(v[i]);
 free(v);
}
