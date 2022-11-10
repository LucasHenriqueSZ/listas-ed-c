/*
      Exercício 18.Pertinência
      Crie a função recursiva in(x,L),que verifica se o item x está na lista L.
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

int in(Item x,Lista L){
    if(L == NULL){
        return 0;
    }else{
        if(L->item == x){
            return 1;
        }else{
            return in(x,L->prox);
        }
    }
}

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
int x=5;
exibe(I);

	if(in(x,I)){
		printf("o item %d esta na lista\n",x);
		}else{
		printf("o item %d nao esta na lista\n",x);
		}

return 0;
}

