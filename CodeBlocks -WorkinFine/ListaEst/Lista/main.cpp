#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include "lis.h"

main() {

	int opcao,valor,pos;
	bool i=true;
    //fazer pra escolher posição de remoção
	menu();
	do {
		opcao = getche()-'0';

		switch(opcao) {
			case 1:
				system ("cls");
				menu();
				printf("\nDigite o valor a ser inserido ");
				scanf("%d", &valor);
				insereInicio(valor);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;

            case 2:
				system ("cls");
				menu();
				printf("\nDigite o valor a ser inserido ");
				scanf("%d", &valor);
				insereFim(valor);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;

            case 3:
				system ("cls");
				menu();
				printf("\nDigite o valor a ser inserido ");
				scanf("%d", &valor);
				fflush(stdin);
				printf("\nDigite a posicao a ser inserido ");
				scanf("%d", &pos);
				insereMeio(valor,pos);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;

			case 4:
				system ("cls");
				menu();
				exibir();
				printf("\nDigite o valor a ser removido ");
				scanf("%d", &valor);
				remover(valor);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;
			case 5:
				system ("cls");
				menu();
				printf("\nDigite o valor a ser buscado");
				scanf("%d", &valor);
				buscar(valor);
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;
			case 6:
				system ("cls");
				menu();
				exibir();
				printf("\n\nEscolha outra op\207\706o para continuar...\n\n");
				break;
			case 7:
				system ("cls");
				printf("\n\n\t\tAt\202 logo !!\n\n\n\n\n\n\n\n\n\n");
				i=false;
				break;
		}
	}
	while(i==true);

	system ("pause");
}
