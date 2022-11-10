/*
        Exercício 21.Ordenada
        Crie a função recursiva sorted(L), que verifica se a lista L está ordenada.
        
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

int sorted(Lista L){
    Lista aux;
    aux = L->prox;
    if(L->item <= aux->item){
        if(aux->prox == NULL){
            return 1;
        }else{
            return sorted(aux);
        }
    }else{
        return 0;
    }
}

int main(void) {
Lista I =no(1,no(2,no(3,NULL)));
exibe(I);
if(sorted(I)){
    printf("A lista esta ordenada\n");
}else{
    printf("A lista nao esta ordenada\n");
}
return 0;
}

