#include <stdio.h>
#include <stdlib.h>
#include "deq.h"


int main(){
    Deque *dq= init();
    Aluno *al;
    al->id=10;
    inserirInicio(dq,*al);
    listarDeque(dq);
    excluirDeque(dq);

}
