//indice de massa corporal

#include <stdio.h>
#include <math.h>

int main(void){
	float p,a,i;
	printf("peso e altura?");
	scanf("%f %f",&p,&a);
	i=p/pow(a,2);
	printf("IMC = %.2f\n",i);
	return 0;

	}
