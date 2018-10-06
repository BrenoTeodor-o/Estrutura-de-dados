
#include <stdlib.h>
#include <stdio.h>

int fat_iterativo(int n)
{
      n = 0;
      int fat=0;
      printf("Insira um valor para o qual deseja calcular seu fatorial: ");
      scanf("%d", &n);

      for(fat = 1; n > 1; n = n - 1)
      fat = fat * n;

      printf("\nFatorial calculado: %d", fat);

}
int fat (int n) {
      //Fun��o que calcula, recursivamente, o fatorial de n.
      if ((n==1) || (n==0)) return 1;
      else
            return fat(n-1)*n;
}


int main()
{

fat_iterativo(12);

//Declara��o de n, o n�mero informado que gera o fatorial recursivo.
int n;
printf("\nInforme o numero que deseja obter o fatorial:\n");
scanf("%d",&n);
printf("O fatorial de %d eh %d \n",n,fat (n));

return 0;
}
