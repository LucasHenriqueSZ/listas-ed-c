/*

Exerc�cio 7.Convers�o em bin�rio
Crie a fun��o recursiva bin�rio(n), que exibe um natural n>= 0 em bin�rio.

*/

#include <stdio.h>

void binario (int n){
	if(n>1) binario(n/2);
	printf("%d",n%2);
	}

int main (void){
	int n;
	printf("num? ");
	scanf("%d",&n);
	binario(n);
	printf("\n");
	return 0;
	}

