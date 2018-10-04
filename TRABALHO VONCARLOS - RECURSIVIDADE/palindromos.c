#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char palindromo (char word[999])
{
    int j,flag=0; //inicia  flag com 0;

	printf("Contrario: ");
	for(j=strlen(word); j>=0; j--){
			printf("%c",word[j]);
			if((word[strlen(word)-1]==word[0]) && (word[strlen(word)-2]==word[1]))
				flag++; //Se a condição for confirmada, flag passa a valer 1;
	}
	printf("\n\n");
	if(flag!=0)
		printf("PALINDROMO\n\n");
	else
		printf("NAO PALINDROMO\n\n");
}


char Verifica(char str[])
{
   if((str[strlen(str)-1]==str[0]) && (str[strlen(str)-2]==str[1])){
        printf("EH PALINDRIMO");
        return 1;
   } else {
      if (str[0] != str[strlen(str)-1]){
            printf("NAO EH PALINDRIMO");
            return 0;
      }
      return Verifica( str + 1);
   }
}

void main(){
    palindromo("socorram-me subi no onibus em marrocos");
    Verifica("socorram-me subi no onibus em marrocos");
}
