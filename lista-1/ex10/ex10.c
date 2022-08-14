//Ponto!

#include <stdio.h>

typedef struct {float x; float y;}ponto;

int main (void){
	ponto p={1.5,2.5};
	printf("(%.1f,%.1f)\n",p.x,p.y);
	return 0;
}
