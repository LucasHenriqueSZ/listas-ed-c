/*
		    Exercicio 15.Clone
    Crie a função recursiva clone(L),que devolve uma cópia da lista L.    
*/

#include<stdio.h>
#include<stdlib.h>

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

Lista clone(Lista L) {
    if(L == NULL) return NULL;
    return no(L->item,clone(L->prox));
}

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
Lista L;
	puts("Lista I:");
	exibe(I);

	L=clone(I);
	puts("\nLista L clone de I:");
	exibe(L);
	
return 0;
}
