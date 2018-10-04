#include "stdio.h"

int fib_iterativo(int n){
  int a, b, auxiliar, i, sequencia;

  a = 0;
  b = 1;

  printf("Série de Fibonacci:\n");
  printf("%d\n", b);

  for(i = 0; i < n; i++)
  {
    auxiliar = a + b;
    a = b;
    b = auxiliar;
    sequencia = (auxiliar-(a+b))*-1;
    printf("%d \n", sequencia);
  }
}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return (Fibonacci(n-1) + Fibonacci(n-2) );
      printf("%d\n", Fibonacci(n));
      return 0;
}
int main()
{
    printf("\n fibonnacci iterativo \n");
    fib_iterativo(12);

    printf("\n ------------------------------------------------------------------ \n");

    printf("\n fibonnacci recursivo \n");
    printf("%d\n", Fibonacci(12));
    return 0;
}
