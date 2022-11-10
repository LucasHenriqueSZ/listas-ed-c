/*
		Exercício 6.Criação de lista contendo um intervalo
Crie a função intervalo(n), que devolve uma lista com os inteiros consecutivos de 1 até n
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

Lista intervalo(int n) {
Lista L =NULL;
while(n>=1) {
L =no(n,L);
n--;
}
return L;
}

int main(void) {
srand(time(NULL));
Lista A =intervalo(10);
exibe(A);
return 0;
}

