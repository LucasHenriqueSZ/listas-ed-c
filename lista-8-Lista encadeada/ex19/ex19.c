/*
        Exercício 19.Enésimo
        Crie a função recursiva nth(n,L),que devolve o enésimo (n>1)itemda lista L
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

int nth(int n,Lista L){
    if(n==1){
        return L->item;
    }else{
        return nth(n-1,L->prox);
    }
}

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
	int n =2;
exibe(I);
printf("item %d da lista: %d \n",n,nth(n,I));
return 0;
}

