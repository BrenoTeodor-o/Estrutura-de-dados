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
int valor;
int vetor[10];
int count = 0;
// void helloWorld();

int insere(int valor); 		// função que iremos usar para inserir valores na minha lista usando valor e posição
int exclui(int valor); 		// excluiremos o valor referente à posição da nossa lista
void imprime(); 			// iremos imprimir nossa listazia
void alterar();				// nessa função alteramos o valor do nosso vetor
#endif // ARQUIVO_H_INCLUDED