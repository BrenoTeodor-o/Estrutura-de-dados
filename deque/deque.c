#include "deque.h"

Deque* init(){
	Deque* de = (Deque*)malloc(sizeof(Deque));
	if(de != NULL){
		de -> inicio = -1;
		de -> final = -1;
		de -> qtde = 0;
		// de ->
	}
	return de;
}

int tamanhoDeque(Deque* de){
	if(de != NULL){
		return de -> qtde;
	}
	return -1;
}

void listarDeque(Deque* de)
{
	int i = de -> inicio;
	// printf("teste\n");
	if (de->qtde == 0){
		printf("TEM nada \n");
		return;
	}
	while(i != de -> final)
	{
		// printf("entrou no while\n");
		if(i > 0 && de -> final < TAM)
		{
			printf("%d\n", de -> dados[i].id);
		}
		i++;
		if (i >= TAM)
		{
			i=0;
		}
	}
}

void excluirDeque(Deque* de){
	if(de != NULL)
	{
		free(de);
	}
}

void inserirInicio(Deque* de, Aluno id)
{
	if(i)
}