/*

Exercício 7.Conversão em binário
Crie a função recursiva binário(n), que exibe um natural n>= 0 em binário.

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

