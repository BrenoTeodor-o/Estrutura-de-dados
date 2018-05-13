#include <stdio.h>
#include <stdlib.h>
#include "deq.h"

Deque* init() {
    Deque* de = (Deque*) malloc(sizeof (Deque));
    if (de != NULL) {
        de->inicio = -1;
        de->final = -1;
        de->quantidade = 0;
    }
    return de;
};

void inserirInicio(Deque* de, Aluno a1){
    if ((de==NULL)||(de->quantidade==TAM)){
        return;
    }
    if (de->inicio==0){
        de->dados[de->inicio] = a1;
        de->inicio --;
        de->quantidade++;
    }
    if (de->inicio < 0){
        de->inicio = TAM - 1;
        de->dados[de->inicio] = a1;
        de->quantidade ++;
    }
    de->inicio--;
    de->dados[de->inicio] = a1;
    de->quantidade ++;
};



void inserirFinal(Deque* de, Aluno a1){

    de->dados[de->final] = a1;
    de->quantidade++;
};

void excluirDeque(Deque* de){
    if (de != NULL){
        free(de);
    }
};

int tamanhoDeque(Deque* de){
    if (de != NULL){
        return de->quantidade;
    }
    return -1;
};

void listarDeque(Deque* de){
int i;
if(de==NULL){
printf("deque vazio\n");
return;
}
for(i=0;i<=de->quantidade;i++){
    printf("%5d ",de->dados[i]);
   }
}
