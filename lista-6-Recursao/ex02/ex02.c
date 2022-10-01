/*exercício 2.
Cálculo de potência Crie a função recursiva pot(x,n), que calcula a potência de
um número real x diferente de 0 elevado a um número natural n.
 */
 
#include <stdio.h>

float pot(float x, int n){
	if(n==1) return x;
	return x*pot(x,n-1);
	}

int main (void){
	float x;
	int n;

	printf("Base e expoente? ");
	scanf("%f %d",&x,&n);
	printf("pot = %.1f\n",pot(x,n));
	return 0;
	}

