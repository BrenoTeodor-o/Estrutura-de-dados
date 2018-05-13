#include <stdio.h>
#include <stdlib.h>
#include "fil.h"

int main(int argc, char *argv[]) {
	int op;

	do{
		printf("|1|INCLUIR\n");
        printf("|2|EXCLUIR\n");
		printf("|3|SAIR\n");
		scanf("%d",&op);
		 switch(op){
			case 1:
            push();
			break;

            case 2:
            pop();
            break;

			case 3:
            return 0;
			break;

			default:
			 printf("Operador incorreto");
        }
    system("pause");
    system("cls");
  }while(op!=3);
system("pause");
return 0;
}
