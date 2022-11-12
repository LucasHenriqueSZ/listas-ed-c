
/*		
	Exercício 7. Programa para remoção em lista ordenada

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

void ins_rsr(Item x, Lista *L) {
if(*L != NULL && (*L)->item < x){
		ins_rsr(x,&(*L)->prox);
	}else{
		if(*L == NULL ||(*L)->item != x)
		*L = no(x,*L);
	}
}

void exibe_rd(Lista L) {
    if(L != NULL){
		printf("- %d \n",L->item);
        exibe_rd(L->prox);     	
    }
}

void rem(Item x, Lista *L) {
	while( *L != NULL && (*L)->item < x )
		L = &(*L)->prox;
	if( *L == NULL || (*L)->item > x ) return;
	Lista n = *L;
	*L = n->prox;
	free(n);
}

int main(void) {
Lista I = NULL;
ins_rsr(4,&I);ins_rsr(1,&I);ins_rsr(3,&I);ins_rsr(5,&I);ins_rsr(2,&I);
	//remove 3 da lista
	rem(3,&I);
exibe_rd(I);
return 0;
}

