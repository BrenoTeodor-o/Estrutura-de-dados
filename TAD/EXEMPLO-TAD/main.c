// Main.c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Ponto.c"

int main(){
	float d;
// Ponto r; -> resulta em erro, pois em nossa estrutura Ponto só podemos declarar ponteiros
	Ponto *p, *q;
	p = ptoCria(10,21); //onde no ponto p, X=10 e Y=21
	q = ptoCria(7,25);

	d = ptoDistancia(p,q);
	printf("Distancia entre pontos: %f\n", d);
	ptoLibera(q);
	ptoLibera(p);
	system("Pause");
	return 0;
}