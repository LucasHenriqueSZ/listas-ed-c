/*
Exerc�cio 10.Produto
Crie a fun��o recursiva prod(m,n),que devolve o produto de dois
n�meros naturais m e n,usando a penas soma e subtra��o.

*/

#include <stdio.h>
int prod(int m, int n ){
	if(n>0){
		return (m+prod(m,n-1));
		}else{
		return 0;
		}
	}
int main (void){
	int m,n;
	printf("produto de dois numeros, ex:3 X 4 = 12 \n informe os numeros ");
	scanf("%d %d",&m,&n);
	printf("%d X %d = %d \n",m,n,prod(m,n));
	return 0;
	}

