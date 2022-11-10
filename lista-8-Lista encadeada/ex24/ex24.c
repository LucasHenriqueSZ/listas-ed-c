/*
       Exercício 24.Substituição
       Crie a função recursiva replace(x,y,L),que substitui ocorrências de x por y na lista L
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

Lista replace(int x,int y,Lista L){
    Lista aux;
    if(L == NULL){
        return NULL;
    }else{
        if(L->item == x){
            L->item = y;
        }
        L->prox = replace(x,y,L->prox);

        return L;
    }
}

int main(void) {
Lista L = no(1,no(4,no(5,no(9,no(8,no(5,no(10,NULL)))))));
exibe(L);
	
//substituindo 5 por 0
L = replace(5,0,L);
exibe(L);   

return 0;
}

