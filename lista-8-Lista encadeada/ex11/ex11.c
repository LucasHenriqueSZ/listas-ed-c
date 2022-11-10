/*
	Exercício 11.Inversão
 Crie a função inversa(L), que cria e devolve uma cópia invertida
 da lista L. Por exemplo, se L for a lista[1,2,3],a chamada inversa(L)
 deve devolver a lista[3,2,1].
*/

#include <stdio.h>
#include <stdlib.h>


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

Lista inversa(Lista L) {
	Lista X;
	int aux;
while(L) {
	aux = L->item;
	 L =L->prox;
	  X =no(aux,X);
	}
	return X;
}

int main(void) {
Lista I =no(1,no(2,no(3,NULL)));
Lista Z = inversa(I);
	exibe(I);
	exibe(Z);

return 0;
}

