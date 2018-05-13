#include "deque.h"
#include <stdlib.h>
#include <stdio.h>
void main()
{
	Deque *de;
	de = init();
	if(de != NULL){
		printf("\n\n Iniciada \n\n");
	}

	// tamanhoDeque(de);
	listarDeque(de);
}