//Exercício 7.Programa para anexação

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

void anexa(Lista *A,Lista B) {
if(!B )return;
while(*A )
A =&(*A)->prox;
*A =B;
}

int main(void) {
Lista H =no(4,no(2,NULL));
Lista I =no(3,no(1,no(5,NULL)));
printf("H = "); exibe(H);
printf("I = "); exibe(I);
printf("Pressione enter");
getchar();
anexa(&H,I);
printf("H = "); exibe(H);
printf("I = "); exibe(I);
return 0;
}

