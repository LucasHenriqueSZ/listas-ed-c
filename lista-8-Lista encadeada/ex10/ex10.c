/*
		Exercício 10.Pertinência
 Crie a função pertence(x,L), que verifica se o item x pertence à lista L

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool pertence(Lista L,int x) {
bool t = false;
while(L ) {
		if(L->item == x){
			t= true;
		}
	L =L->prox;
}
return t;
}

int main(void) {
Lista I =no(3,no(10,no(5,NULL)));
	exibe(I);
	printf("Tamanho = %d\n",tamanho(I));
	if(pertence(I,5)){
	printf("item pertence\n");
	}else{
	printf("item nao pertence\n");
	}

return 0;
}

