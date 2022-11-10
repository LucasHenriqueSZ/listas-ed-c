/*
		Exercício 14.Soma
	Crie a função recursiva sum(L), que devolve a soma dos itens da lista L.
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


int sum(Lista L) {
	if(L){
		return (L->item+sum(L->prox));
		}else{
		return 0;
		}
}

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
	exibe(I);
	
	printf("Soma = %d\n",sum(I));
return 0;
}
