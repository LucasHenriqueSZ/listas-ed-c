/*
		Exerc�cio 12.Intervalo
 Crie a fun��o intervalo(p,u), que cria e devolve uma lista contendo
 inteiros consecutivos de p at� u(para p<=u).Por exemplo, a chamada
 intervalo(-2,3) deve devolver a lista[-2,-1,0,1,2,3].Se p>u, a fun��o
 deve devolver uma lista vazia.
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

Lista intervalo(int p, int u) {
	Lista L =NULL;
	
	while(p<=u) {
	L =no(p,L);
		p++;
	}
	L= inversa(L);
return L;
}



int main(void) {
Lista A =intervalo(-2,3);
exibe(A);
return 0;
}

