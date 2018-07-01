#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ord.h"

#define TAM 1000000

int tam_heap;
int vetor[TAM];

void gera() {
     int i;
     for (i = 0; i < TAM; i++)
         vetor[i] = rand();
}

void selection_sort() {
     int current, i, aux, k;

     for (i = 0; i <= TAM-2; i++)
       current = i;
       for (k = i+1; k >= TAM-1; k--)
             if (vetor[current] > vetor[k])
                 current <- k;
                 aux = vetor[current];
                 vetor[current] = vetor[i];
                 vetor[i] = aux;
       }


void heapify (int i) {
    int max, aux, r, l;
    l = 2 * i + 1;
    r = 2 * i + 2;
    if (l < tam_heap && vetor[l] > vetor[i])
        max = l;
        else max = i;

      if (r < tam_heap && vetor[r] > vetor[max])
         max = r;
      if (max != i) {
              aux = vetor[i];
              vetor[i] = vetor[max];
              vetor[max] = aux;
              heapify(max);
        }
}
void build_heap() {
    int j;
    tam_heap = TAM;
    for (j = (TAM / 2) - 1; j >= 0; j--)
       heapify(j);
       }

void heapsort() {
  build_heap();
  int aux, k;
  for (k = TAM - 1; k >= 1; k--) {
      aux = vetor[0];
      vetor[0] = vetor[k];
      vetor[k] = aux;
      tam_heap = tam_heap - 1;
      heapify (0);
    }
}

void imprime() {
    int i;
     for (i = 0; i < TAM; i++){
     printf("%d\n\n", vetor[i]);
     }
}

void bubble_sort (int n) {
    int k, j, aux;
    for (k = 1; k < n; k++) {
        printf("\n[%d] ", k);

        for (j = 0; j < n - 1; j++) {
            printf("%d, ", j);

            if (vetor[j] > vetor[j + 1]) {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
