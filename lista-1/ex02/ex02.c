// indice  de massa corporal [2°versão]

#include <stdio.h>
#include <math.h>

int main (void){
	float p,a,i;
	printf("peso e altura? ");
	scanf("%f %f",&p,&a);
	i=p/pow(a,2);
	printf("IMC = %.2f\n",i);

	if(i<18.5)puts("Magra");
	else if (i>30)puts("obesa");
	else puts ("Normal");

	return 0;
	}
