/*Exercício 2.Outra forma de exibição
Altere a função exibe(),de modo que os itens da lista sejam exibidos
entre colchetes e separados por vírgulas. A lista vazia deve ser exibida como[]
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

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
exibe(I);
return 0;
}

