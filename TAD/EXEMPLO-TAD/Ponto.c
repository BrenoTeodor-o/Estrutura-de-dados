#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

// definição do tipo de dados
struct ponto
{
	float x;
	float y;
};
// Aloca e retorna um ponto com coordenadas X e Y
Ponto* ptoCria(float x, float y){
	Ponto* p = (Ponto*) malloc(sizeof(Ponto));
	if (p != NULL)
	{
		p->x = x;
		p->y = y;
	}
	return p;
}
// libera memoria alocada p/ um ponto
void ptoLibera(Ponto* p){
	free(p);
}
// Acessa, por referencia, o valor de um ponto
void ptoAcessa(Ponto* p, float* x, float* y){
	*x = p->x;
	*y = p->y;
}
// Atribui a um ponto os valores de X e Y
void ptoAtribui(Ponto* p, float x, float y){
	p->x = x;
	p->y = y;
} 
// Calcula a distancia entre dois pontos
float ptoDistancia(Ponto* p1, Ponto* p2){
	float dx = p1->x - p2->x;
	float dy = p1->y - p2->y;
	return sqrt(dx*dx + dy*dy);
}