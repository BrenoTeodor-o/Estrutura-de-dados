#include<time.h> //conta o tempo que demora p ordenar
clock_t tempo1, tempo2;

tempo1=clock();
bubble();
tempo2=clock-tempo1;
printf("%f", (float)tempo2/clocks_PER_SEC);

----------------------------------------------
#include<stdlib.h>
fo(int=0; i<n; i++)
vetor[i]=rand();

