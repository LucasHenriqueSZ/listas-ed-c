/*
      Exercício 17.Último
      Criea função recursiva last(L), que devolve o último item da lista L
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


Item last(Lista L) {
    if(L->prox == NULL){
        return L->item;
    }else{
        return last(L->prox);
    }
}


int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
exibe(I);
printf("O ultimo item da lista e: %d \n",last(I));

return 0;
}

