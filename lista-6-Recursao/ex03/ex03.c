/*
	Exerc�cio 3. C�lculo de termial
Crie a fun��o recursiva termial(n), que calcula a somados n primeiros n�meros naturais (n >= 0)
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

