/*
       Exercício 23.Contagem 
       Crie a função recursiva count(x,L),que informa quantas vezes o item x ocorre na lista L.
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

int count (int x,Lista L){
    if(L == NULL){
        return 0;
    }else{
        if(L->item == x){
            return 1 + count(x,L->prox);
        }else{
            return count(x,L->prox);
        }
    }
}

int main(void) {
	int n = 5;
Lista L = no(1,no(2,no(3,no(4,no(5,no(6,no(7,no(5,no(5,no(10,NULL))))))))));
exibe(L);
printf("Quantidade de vezes que o numero %d aparece na lista: %d \n",n,count(n,L));
return 0;
}

