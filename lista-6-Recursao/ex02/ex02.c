/*exerc�cio 2.
C�lculo de pot�ncia Crie a fun��o recursiva pot(x,n), que calcula a pot�ncia de
um n�mero real x diferente de 0 elevado a um n�mero natural n.
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

