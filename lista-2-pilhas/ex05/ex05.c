/*
		5-Polha de strings

 Qual será a saída,se o usuário digitar as cadeias "um","dois" e "tres"?
*/

#include <stdio.h>
#include "pilha.h" //pilha de char*

int main(void){
Pilha P = pilha(5);
char s[11];
for(int i=1; i<=3; i++){
printf("? ");
gets(s);
empilha(s,P);
}

while( !vaziap(P) ) puts(desempilha(P));
return 0;
}

