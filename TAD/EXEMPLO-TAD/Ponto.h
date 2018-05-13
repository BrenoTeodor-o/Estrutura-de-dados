// arquivo .h exemplo de TAD referentes à aula 1 e 2 de estrutura de dados
typedef struct ponto Ponto;
// cria um novo ponto*
Ponto* ptoCria(float x, float y);
// libera um ponto
void proLibera(Ponto* p);
// acessa os valores X e Y de um ponto
void ptoAcessa(Ponto* p, float*x, float* y);
// Atribui valores X e Y à um ponto
void ptoAtribui(Ponto* p, float x, float y);
// Calcula a distancia entre dois pontos
float ptoDistancia(Ponto* p1, Ponto* p2);