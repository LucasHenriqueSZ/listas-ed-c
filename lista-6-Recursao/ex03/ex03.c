/*
	Exercício 3. Cálculo de termial
Crie a função recursiva termial(n), que calcula a somados n primeiros números naturais (n >= 0)
*/

#include <stdio.h>

int termial (int n){
	if(n>0) return n+termial(n-1);
	return(n);
	}
int main (void){
	int n;
	printf ("num? ");
	scanf("%d",&n);
	printf("termial = %d\n",termial(n));
	return 0;
	}

