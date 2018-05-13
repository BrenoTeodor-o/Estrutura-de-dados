#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <locale.h>
#include <string.h>
#include "din.h"


int main(){
setlocale(LC_ALL, "Portuguese");
FILA *f= (FILA *)malloc(sizeof(FILA));

inserir(f,10);
inserir(f,11);
inserir(f,12);
exibir(f);
tam(f);
printf("\n");
excluir(f);
printf("\n");
exibir(f);
tam(f);
printf("\n");


system("pause");
return 0;
}
