/*
Exercício 9.Par
Crie a função recursiva par(n),que determina  se o natural n é par,usando apenas subtração.

*/
#include <stdio.h>
int par(int n){
	if(n!=0 && n>0){
		return par(n-2);
		}else if(n==0){
		 printf("numero e par \n "); 
		}else{
		printf("numero nao e par \n");
		}
	}
int main (void){
	int num;

	printf("verifica se  numero e par \n informe o numero ");
	scanf("%d",&num);	
	par(num);


	return 0;
	}

