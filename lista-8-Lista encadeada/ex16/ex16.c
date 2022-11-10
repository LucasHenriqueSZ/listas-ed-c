/*
        Exercício 16.Aleatória
    Crie a função recursiva rnd(n,m), que devolve uma lista com n itens aleatórios em[0,m-1].
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef int Item;
typedef struct no {
Item item;
struct no *prox;
} *Lista;

Lista no(Item x,Lista p) {
Lista n =malloc(sizeof(struct no));
n->item =x;
n->prox =p;
return n;
}
void exibe(Lista L) {
	Lista aux;
	printf("[");
	while(L !=NULL ) {
		aux = L->prox;
	if(aux == NULL){
		printf("%d] \n",L->item);
			break;
		}else{
	printf("%d,",L->item);	
	L =L->prox;}
}	
}

Lista rnd(int n,int m) {
if(n==0) return NULL;
return no(rand()%m,rnd(n-1,m));
}


int main(void) {
srand(time(NULL));
Lista A =rnd(20,100);
exibe(A);
return 0;
}

