
/*		
		Exercício 4. Inserção recursiva sem repetição
	Crie a função recursiva ins_rsr(x,&L) , que insere o item x na lista ordenada L somente
	se ele ainda não estiver nesta lista.
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



void ins_rsr(Item x, Lista *L) {
if(*L != NULL && (*L)->item < x){
		ins_rsr(x,&(*L)->prox);
	}else{
		if(*L == NULL ||(*L)->item != x)
		*L = no(x,*L);
	}
}

int main(void) {
Lista I = NULL;
ins_rsr(4,&I);
ins_rsr(1,&I);
ins_rsr(3,&I);
ins_rsr(5,&I);
ins_rsr(2,&I);

//tentando inserir numeros repetidos
ins_rsr(4,&I);
ins_rsr(5,&I);

exibe(I);
return 0;
}

