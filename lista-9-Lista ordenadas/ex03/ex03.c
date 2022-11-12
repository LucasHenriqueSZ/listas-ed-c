
/*		Exercício 3. Inserção recursiva
	Crie a função recursiva ins_rec(x,&L), que insere o item x na lista ordenada L.
*/

#include <stdio.h>
#include <stdlib.h>

typedef int Item;
typedef struct no {
Item item;
struct no *prox;
} *Lista;

Lista no(Item x, Lista p) {
Lista n = malloc(sizeof(struct no));
n->item = x;
n->prox = p;
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

void ins_rec(Item x, Lista *L) {
if(*L != NULL && (*L)->item < x){
		ins_rec(x,&(*L)->prox);
	}else{
		*L = no(x,*L);
	}
}

int main(void) {
Lista I = NULL;
ins_rec(4,&I);
ins_rec(1,&I);
ins_rec(3,&I);
ins_rec(5,&I);
ins_rec(2,&I);
exibe(I);
return 0;
}

