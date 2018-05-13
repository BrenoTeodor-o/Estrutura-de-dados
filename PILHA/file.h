/*
|
|   @author Breno Ribeiro Teodoro
|   Universidade Estadual de Ponta Grossa
|   Matéria: Estrutura de Dados
|   Profº. Mathias Talevi Betim
|   
|
*/

#ifndef ARQUIVO_H_INCLUDED
#define ARQUIVO_H_INCLUDED
#define TAM 10

struct aluno
{
	// int id;
	char nome[TAM];
};

typedef struct aluno Aluno;

Aluno vetor[TAM];
int contador = -1;

//void helloWorld();//hello world

void push (Aluno); 	//incluir valor no topo 
Aluno pop(); 		//excliu valor do topo
Aluno top(); 		// mostra valor do topo
Aluno pull(); 		//altera o valor do topo
void init(); 		//contador vale 0 inicializa a pilha vazia
void empty(); 		//verefica pilha vazia
void pilhaCheia(); 	//pilha cheia

#endif // ARQUIVO_H_INCLUDED