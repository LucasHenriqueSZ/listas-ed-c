//lista de numeros "alocação dinamica encadeada"

#include <stdio.h>
#include <stdlib.h>

typedef struct no *ptr;
struct no {int item; ptr prox;};

ptr no(int x , ptr p){
	ptr n =malloc(sizeof(struct no));
	n->item = x;
	n->prox =p;
	return n;
	}

int main(void){
	ptr p=no(3,no(1,no(5,NULL)));
	while(p!=NULL){
		printf("%d\n",p->item);
		p=p->prox;
		}
	return 0;
	}
