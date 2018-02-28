struct no {
	int dado;
	struct no *prox;
};
struct no *tabela[Tam];

int espalha(int x){
	return x % Tam;
}

void insere(int valor){
	int pos;
	struct no *aux;
	pos=espalha(valor);
	aux=new (struct no);
	aux->dado = valor;
	aux-> prox = tabela[pos];
	tabela[pos]= aux;
	printf("elemento inserido");
}

