//Exerc�cio 1. C�lculo de fatorial
#include <stdio.h>

int fat(int n){
	if (n==0) return 1;
	return n*fat(n-1);
	}

int main (void){
	int n;
	printf("Num? ");
	scanf("%d",&n);
	printf("fat = %d\n",fat(n));
	return 0;
	}

