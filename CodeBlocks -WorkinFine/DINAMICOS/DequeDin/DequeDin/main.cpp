#include <stdio.h>
#include <stdlib.h>
#include "din.h"

int main(){

 Deque *dq = cria();
 aluno *al;

 al->mat=2;
 int x = insereInicio(dq,*al);
 exibir(dq);
 system("pause");
 printf("\n");


 al->mat=4;
 int y = insereInicio(dq,*al);
 exibir(dq);
 system("pause");
 printf("\n");


 al->mat=6;
 int z = insereFinal(dq,*al);
 exibir(dq);
 system("pause");
 printf("\n");

 printf("Tam do Deque = %5d\n\n",tamanho(dq));

 removeInicio(dq);
 exibir(dq);
 system("pause");
 printf("\n");

 removeFinal(dq);
 exibir(dq);
 system("pause");
 printf("\n");

 libera(dq);

}
