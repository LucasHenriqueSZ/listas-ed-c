//Exerc�cio 5.Programa para lista aleat�ria

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

Lista aleatoria(int n,int m) {
Lista L =NULL;
while(n>0 ) {
L =no(rand()%m,L);
n--;
}
return L;
}

int main(void) {
srand(time(NULL));
Lista A =aleatoria(10,100);
exibe(A);
return 0;
}

