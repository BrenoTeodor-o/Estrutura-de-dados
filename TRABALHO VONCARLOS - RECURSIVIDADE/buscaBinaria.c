#include <stdio.h>
#include <stdlib.h>

int buscaBinariaRecursiva(int vetor[], int inicio, int fim, int busca) {

while(inicio <= fim) {

int meio;
meio = (inicio+fim)/2;

	if(vetor[meio]==busca) {
   		return meio;
	} else if (vetor[meio]<busca) {
	  return buscaBinariaRecursiva(vetor,meio+1,fim,busca);
	  
    } else {
   	  return buscaBinariaRecursiva(vetor,inicio,meio-1,busca);
    }
}
	return -1;
}

int busca_iterativa(int *vetor, int elemento, int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == elemento) {
            return meio;
        } else if (vetor[meio] < elemento) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main () {
//iterativa
char entrada[20];
    int opcao;
    int elemento;
    int resultado;
    int vetor_teste[20] = {3, 9, 18, 22, 22, 31, 32, 33, 46, 48, 50, 51, 53, 55, 63, 74, 76, 83, 85, 91};
    int tamanho = sizeof (vetor_teste) / sizeof (int);
    
    printf("Digite o valor do elemento: ");
    fgets(entrada, 19, stdin);
    elemento = atoi(entrada);
    resultado = busca_iterativa(vetor_teste, elemento, tamanho);
    if (resultado != -1) {
        printf("O elemento procurado esta na posicao %d\n", resultado);
    } else {
        printf("O elemento procurado nao esta presente no vetor\n");
    }

//recursiva
int vetorBusca[20] = {3, 9, 18, 22, 22, 31, 32, 33, 46, 48, 50, 51, 53, 55, 63, 74, 76, 83, 85, 91},fun,x;

	printf("Informe o valor a ser encontrado: ");
	scanf("%d",&x);
	fun=buscaBinariaRecursiva(vetorBusca,0,20,x);
	printf("%d",fun);
	printf("\n\n");
	return 0;

}
