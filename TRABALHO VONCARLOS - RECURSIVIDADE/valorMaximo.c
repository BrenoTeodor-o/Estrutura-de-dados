#include <stdio.h>
#include <stdlib.h>

int maximo_rec(){
    float numero_max; // elemento m�ximo do vetor
    float *vetor; // vetor que ser� alocado din�micamente
    int i; //contador;
    int n; // n�mero de elementos do vetor
    
    // Solicita ao usu�rio o n�mero de elementos do vetor
    printf("Entre com o número de elementos do vetor ");
    scanf("%i",&n);
    
    system("clear || cls");
    
    // alocando o vetor din�micamente
    vetor = (float*) malloc(n*sizeof(float));
    
    // populando o vetor
    for (i = 0;i < n;++i)
    {
        printf("Entre com o elemento %i do vetor ",i + 1);
        scanf("%f",&vetor[i]);
    }
    
    // Busca o elemento m�ximo
    numero_max = vetor[0];
    for (i = 0;i < n;++i)
        if (vetor[i] > numero_max)
            numero_max = vetor[i];
            
            
    //Imprime os elementos do vetor e o m�ximo
    printf("\n\nElementos do vetor : ");    
    for (i = 0;i < n;++i)
        printf("%.2f ",vetor[i]);

    printf("\nO elemento maximo eh o %.2f\n",numero_max);
    
    
    // Liberando a mem�ria alocada din�micamente
    free(vetor);
    return(0);
}

int maximo_it () {
    int vet[] = {1,22,45,8,9,6,46};
    int atual = 0;
    int tam = (sizeof(vet)/sizeof((vet)[0]));

    for (int i = 0; i < tam; i++) {
        if (vet[i] > vet[i+1]) {
            if(vet[i] > atual)
            atual = vet[i];
        }
    }
    printf("%d", atual);
}

int main(int argc, char **argv)
{
    printf("funcao recursiva: \n");
    maximo_rec();
    printf("\n ------------------------------------------- \n\n");
    printf("funcao iterativa: \n");
    maximo_it();

    return(0);
}