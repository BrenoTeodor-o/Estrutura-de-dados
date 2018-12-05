// #include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

int** alocarMat(int m, int n) {
    int *v; /* ponteiro para a matriz */
    int i; /* variavel auxiliar      */
    if (m < 1 || n < 1) { /* verifica parametros recebidos */
        printf("* Erro: Parametro invalido *\n");
        return (NULL);
    }
    /* aloca as linhas da matriz */
    v = (int**) calloc(m, sizeof (int *));
    if (v == NULL) {
        printf("* Erro: Memoria Insuficiente *");
        return (NULL);
    }
    /* aloca as colunas da matriz */
    for (i = 0; i < m; i++) {
        v[i] = (int*) calloc(n, sizeof (int));
        if (v[i] == NULL) {
            printf("* Erro: Memoria Insuficiente *");
            return (NULL);
        }
    }
    return (v); /* retorna o ponteiro para a matriz */
}

void insereMat(int** mat, int vet1, int vet2) {
    mat[vet1][vet2] = 1;
    mat[vet2][vet1] = 1;
}

void imprimeMat(int** mat, int vet) {
    for (int i = 0; i < vet; i++) {
        for (int j = 0; j < vet; j++) {
            if (mat[i][j] == 1) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main(int argc, char** argv) {
    int **mat;
    int vet;
    int i, j;
    printf("Digite o número de vértices: ");
    scanf("%d", &vet);
    mat = alocarMat(vet, vet);
    while (i != -1 && j != -1) {
        printf("Caso queira encerrar digite -1 em algum campo. Qual vertice deseja ligar? Separe-os com um espaço: ");
        scanf("%d %d", &i, &j);
        if (i < 0 || j < 0) {
            printf("Encerrado\n");
        } else if (i > vet || j > vet) {
            printf("Impossível");
        } else {
            insereMat(mat, i, j);
        }
    }
    imprimeMat(mat, vet);
    return 0;
}