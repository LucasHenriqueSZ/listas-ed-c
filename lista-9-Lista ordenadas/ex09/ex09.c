
/*		
	Exercício 9. Programa para verificação de pertinência em lista ordenada

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

void exibe_rd(Lista L) {
    if(L != NULL){
		printf("- %d \n",L->item);
        exibe_rd(L->prox);     	
    }
}
int pert(Item x, Lista L) {
	while( L != NULL && L->item < x )
		L = L->prox;
	return (L != NULL && L->item == x);
}


int main(void) {
Lista I = NULL;
ins(4,&I); 
ins(1,&I); 
ins(3,&I); 
ins(2,&I);
printf("%d\n", pert(5,I));
printf("%d\n", pert(3,I));
return 0;
}


