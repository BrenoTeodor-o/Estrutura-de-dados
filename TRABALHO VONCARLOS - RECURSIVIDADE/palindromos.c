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

int palindromo_rec (char[999])
 int i, j;
{
    if(i >= j ){
        printf("NAO PALINDROMO\n\n");
        return 0;
    }else{
    if(v[ i ] = = v[ j ]){
        return palindromo_rec( v, i+1, j-1);
        printf("EH PALINDROMO");
    }else{
        return 0;
        }
    }
}
void main(){
    palindromo("socos");
    palindromo_rec("socos");
}
