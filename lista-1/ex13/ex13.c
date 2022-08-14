//passagen por referencia

#include <stdio.h>

void troca(int *a, int *b){  //produz o efeito desejado
	int c=*a;
		*a=*b;
		*b=c;
		}

int main (void){
	
	int x=5,y=3;
	troca(&x,&y);
	printf("x=%d   y=%d \n",x,y);
	return 0;
}
