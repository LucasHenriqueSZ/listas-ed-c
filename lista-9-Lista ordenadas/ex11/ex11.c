
/*		
	Exercício 11. Ordenada simplesmente crescente
Crie a função recursiva osc(L), que verifica se L é uma lista ordenada de forma simplesmente
crescente (i.e., cada item é menor ou igual ao item seguinte na lista).
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

int osc(Lista L) {
    if(L == NULL || L->prox == NULL)
        return 1;
    if(L->item > L->prox->item)
        return 0;
    return osc(L->prox);
}

int main(void) {
Lista I = NULL;
ins(4,&I); 
ins(1,&I); 
ins(3,&I); 
ins(2,&I);

printf("Ordenada simplesmente crescente: %d\n", osc(I));

return 0;
}


