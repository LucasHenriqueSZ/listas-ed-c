/*
       Exercício 22.Igualdade
       Crie a função recursiva equal(A,B),que verifica se as listas A e B são iguais.
        
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

int equal(Lista A,Lista B){
    if(A == NULL && B == NULL){
        return 1;
    }else if(A == NULL || B == NULL){
        return 0;
    }else if(A->item == B->item){
        return equal(A->prox,B->prox);
    }else{
        return 0;
    }
}

int main(void) {
Lista A = no(1,no(2,no(3,no(4,NULL))));
Lista B = no(1,no(2,no(3,no(4,NULL))));

exibe(A);
exibe(B);
if(equal(A,B)){
    printf("Sao iguais\n");
}else{
    printf("Nao sao iguais\n");
}
return 0;
}

