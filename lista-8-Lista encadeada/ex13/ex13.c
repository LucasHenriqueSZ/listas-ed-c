/*
		Exercício 13.Tamanho
 Crie a função recursiva len(L), que devolve o tamanho da lista L
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

int len(Lista L) {

	if(L){
		return (1+len(L->prox));
	}else{
		return 0;
	}
}

int main(void) {
Lista I =no(3,no(1,no(5,no(6,NULL))));
exibe(I);
printf("Tamanho = %d\n",len(I));
return 0;
}
