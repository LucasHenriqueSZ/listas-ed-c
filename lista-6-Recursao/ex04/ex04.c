/*
		Exerc�cio 4.C�lculo da s�rie harm�nica
Crie a fun��o recursiva  h(n),  que  calcula  a  soma  dos  n>=1 primeiros termos da s�rie harm�nica (1+1/2+1/3+... +1/n).
*/

#include <stdio.h>

float h(n){
	  if(n == 1)
          return 1;
      else
          return((float)1/n + h(n - 1));
	}

int main (void){
	int n;
	printf ("num? ");
	scanf("%d",&n);
	printf("harmonica = %.2f\n",h(n));
	return 0;
	}

