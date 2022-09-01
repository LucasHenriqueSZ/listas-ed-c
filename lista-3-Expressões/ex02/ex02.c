/*
		Exerc韈io 2.Teste do programa

	Altere o programa do Exemplo 4, substituindo a fun玢o posfixa() pela
segunda vers鉶. Em seguida,teste-o com as seguintes express鮡s infixas:
 - 2*3+8/4
 - 9𤂿
 - 2+3*4-5
 - (3+4)*(8-6)/2
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o) {
switch(o ) {
case'(':return 0;
case'+':
case'-':return 1;
case'*':
case'/':return 2;
}
return-1; // operadorinv醠ido!
}

char *posfixa(char*e) {
static char s[256];
int j =0;
Pilha P =pilha(256);
for(int i=0; e[i]; i++)
if(e[i]=='(')empilha('(',P);
else if(isdigit(e[i]) )s[j++] =e[i];
else if(strchr("+-/*",e[i]) ) {
while( !vaziap(P) &&prio(topo(P))>=prio(e[i]) )
s[j++] =desempilha(P);
empilha(e[i],P);
}
else if(e[i] ==')') {
while(topo(P)!='(')
s[j++] =desempilha(P);
desempilha(P);
}while( !vaziap(P) )
s[j++] =desempilha(P);
s[j] ='\0';
destroip(&P);
return s;
}

int main(void) {
char e[513];
printf("Infixa? "); // 2*3+8/4; 9𤂿; 2+3*4-5; (3+4)*(8-6)/2
gets(e);
printf("Posfixa: %s\n",posfixa(e));
return 0;
}

