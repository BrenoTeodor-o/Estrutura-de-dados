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

// void helloWorld();
void insere(int valor,int pos); // função que iremos usar para inserir valores na minha lista usando valor e posição
void exclui(int posicao); // excluiremos o valor referente à posição da nossa lista
void imprime(); // iremos imprimir nossa lista
void busca_lista(int valor); // buscaremos o valor da lista e iremos retornar a posição em que ele se encontra
int vazio(); // iremos mostrar nessa função se a fila se encontra vazia
#endif // ARQUIVO_H_INCLUDED

