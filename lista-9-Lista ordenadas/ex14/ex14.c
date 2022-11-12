
/*		
	Exercício 14. Ordenada estritamente decrescente
Crie a função recursiva oed(L), que verifica se L é uma lista ordenada de forma estritamente
decrescente (i.e., cada item é maior que item seguinte na lista).

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
while( *L != NULL && (*L)->item > x )
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

int osd(Lista L) {
    if(L == NULL || L->prox == NULL)
        return 1;
    if(L->item < L->prox->item || L->item != L->prox->item )
        return 0;
    return osd(L->prox);
}

int main(void) {
Lista I = NULL;
ins(4,&I); 
ins(1,&I); 
ins(3,&I); 
ins(2,&I);
ins(3,&I); 
	exibe(I);

printf("Ordenada estritamente decrescente: %d\n", osd(I));

return 0;
}


