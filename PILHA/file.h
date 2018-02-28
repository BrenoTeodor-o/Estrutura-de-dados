/*
|
|   @author Breno Teodoro
|   Universidade Estadual de Ponta Grossa
|   Matéria: Estrutura de Dados
|   Profº. Mathias Talevi Betim
|   
|
*/

#ifndef ARQUIVO_H_INCLUDED
#define ARQUIVO_H_INCLUDED
struct prato{
	int id;
	char nome[20];
};

typedef struct prato Prato;
Prato vetor [TAM];
int contador;
void push (Prato); //incluir valor no topo 
Prato pop(); //excliu valor do topo
Prato top(); // mostra valor do topo
void init(); // contador vale 0 inicializa a pilha vazia
void empty(); // verefica pilha vazia
void pilhaCheia(); //pilha cheia

#endif // ARQUIVO_H_INCLUDED