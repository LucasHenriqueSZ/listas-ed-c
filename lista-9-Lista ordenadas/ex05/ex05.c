
/*		
	Exercício 5. Exibição recursiva direta
Crie a função recursiva exiba_rd(L), que exibe a lista ordenada L em ordem direta, i.e.,
mostrando os itens do primeiro até o último (um em cada linha).

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





void ins_rsr(Item x, Lista *L) {
if(*L != NULL && (*L)->item < x){
		ins_rsr(x,&(*L)->prox);
	}else{
		if(*L == NULL ||(*L)->item != x)
		*L = no(x,*L);
	}
}



void exibe_rd(Lista L) {
    if(L != NULL){
		printf("- %d \n",L->item);
        exibe_rd(L->prox);     	
    }
}

int main(void) {
Lista I = NULL;
ins_rsr(4,&I);
ins_rsr(1,&I);
ins_rsr(3,&I);
ins_rsr(5,&I);
ins_rsr(2,&I);
exibe_rd(I);
return 0;
}

