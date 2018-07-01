#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "ord.h"

int main(){
    gera();
    clock_t tempo1, tempo2;
    tempo1 = clock();
    heapsort();
    tempo2 = clock() - tempo1;
    printf("Tempo de processamento HEAPSORT: ""%f\n", (float)tempo2/CLOCKS_PER_SEC);
gera();
    tempo1 = clock();
    selection_sort();
    tempo2 = clock() - tempo1;
    printf("Tempo de processamento SELECTIONSORT: ""%f\n", (float)tempo2/CLOCKS_PER_SEC);

gera();
    tempo1 = clock();
    selection_sort();
    tempo2 = clock() - tempo1;
    printf("Tempo de processamento BUBBLESORT: ""%f\n", (float)tempo2/CLOCKS_PER_SEC);
    return 0;

}
