/*
	6- Pilha de string

 Use _strdup(s),declarada em string.h,para corrigir o 
programa do exercício anterior.Essa função duplica a cadeia s 
num área de memória,alocada pela função malloc(),e devolve o 
endereço dessa área. Depois de usada,essa cópia pode ser destruída
com a função free().
 */

#include <stdio.h>
#include "pilha.h" //pilha de char*
#include <string.h>

int main(void){
Pilha P = pilha(5);
char s[11];
char *t;
	
for(int i=1; i<=3; i++){
printf("? ");
gets(s);
t=_strdup(s);
empilha(t,P);
}
	
while( !vaziap(P) ){
	puts(desempilha(P));
	free(t);
		}
return 0;
}

