/*
		Exerc�cio 8.�ltimo item
Crie a fun��o ultimo(L), que devolve o �ltimo item da lista L(se L estiver vazia, erro fatal)

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

int tamanho(Lista L) {
int t =0;
while(L ) {
t++;
L =L->prox;
}
return t;
}
int ultimo(Lista L) {
int t =0;
while(L ) {
t=L->item;
L =L->prox;
}
return t;
}

int main(void) {
Lista I =no(3,no(1,no(5,NULL)));
	exibe(I);
	printf("Tamanho = %d\n",tamanho(I));
	printf("Ultimo item = %d\n",ultimo(I));
return 0;
}

