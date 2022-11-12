
/*		
	Exercício 8. Remoção de todas as ocorrências
Crie a função iterativa rem_todo(x,&L), que remove toda ocorrência do item x na lista
ordenada L.

*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
Item item;
struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
	Lista n = malloc(sizeof(struct no));
	n->item = x;
	n->prox = p;
return n;
} 

void ins(Item x, Lista *L) {
while( *L != NULL && (*L)->item < x )
L = &(*L)->prox;
*L = no(x,*L);
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

void rem_todo(Item x, Lista *L) {
	while(*L != NULL){
	while((*L)->item < x ){
		L = &(*L)->prox;
	}
	if( *L == NULL || (*L)->item > x ) return;
	Lista n = *L;
	*L = n->prox;
	free(n);
	}
}

int main(void) {
Lista I = NULL;
ins(4,&I);ins(1,&I);ins(3,&I);ins(5,&I);ins(2,&I);ins(5,&I);ins(5,&I);
exibe(I);
	//remove todos os 5 da lista
	rem_todo(5,&I);
exibe(I);
return 0;
}

