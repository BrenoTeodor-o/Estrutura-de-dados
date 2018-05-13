#include "deque.c"
#include <stdlib.h>
#include <stdio.h>

#define TAM 10

struct aluno{
	int id;
};

struct deque{
	int inicio;
	int final;
	int qtde;
	struct aluno dados[TAM];
};


typedef struct deque Deque;
typedef struct aluno Aluno;

Deque* de;

Deque* init();
void inserirInicio(Deque* de, Aluno id);
void inserirFinal(Deque* de, Aluno id);
void excluirInicio(Deque* de);
void excluirFinal(Deque* de);
int tamanhoDeque();
void listarDeque(Deque* de);
void excluirDeque(Deque* de);
