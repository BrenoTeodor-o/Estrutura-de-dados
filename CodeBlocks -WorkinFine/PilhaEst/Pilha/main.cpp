#include <stdio.h>
#include <stdlib.h>
#include "pil.h"

int main(int argc, char *argv[]){

Ppilha p;
int *res;
int resPeek;

p=cria();                   //p recebe um tipo Ppilha
push(p,1);
push(p,2);
push(p,3);
mostra(p);
printf("\n");
printf("resultado peek= %d\n",peek(p));
printf("\n");
pop(p);
mostra(p);
printf("\n");
printf("resultado peek= %d\n",peek(p));

libera(p);

system("pause");
return 0;
}
