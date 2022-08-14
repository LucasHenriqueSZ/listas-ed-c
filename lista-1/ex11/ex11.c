//funcionamento ponteiro

#include <stdio.h>

int main (void){
	 int v=5; //variavel simples
	int *p; //variavel ponteiro
	p=&v;
	*p=*p+2;
	printf("v=%d, *p=%d\n",v,*p);
	return 0;
}
