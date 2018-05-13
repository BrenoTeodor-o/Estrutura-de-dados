#include <stdio.h>


int soma(int n)
{
	if(n == 1){
		return n;
	}else{
		int x = n + soma(n-1);
		printf("%d\n", x); 
	}
}

void main(){
	soma(1);
}