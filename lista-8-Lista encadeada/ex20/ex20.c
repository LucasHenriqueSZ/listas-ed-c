/*
        Exercício 20.Mínimo
        Crie a função recursiva minimum(L),que devolve o menor item da lista L.
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

int minimum(Lista L){
    if(L->prox == NULL){
        return L->item;
    }else{
        if(L->item < minimum(L->prox)){
            return L->item;
        }else{
            return minimum(L->prox);
        }
    }
}

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
exibe(I);
printf("O menor item da lista e: %d \n",minimum(I));

return 0;
}


