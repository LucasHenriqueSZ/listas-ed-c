/*
		Exerc韈io 3.Programa completo

	Crie um program acompleto para ler uma express鉶 aritm閠ica na forma infixa e exibir sua
forma posfixa correspondente,bem como seu valor num閞ico.Por exemplo,para a express鉶 infixa"2*3+8/4",
o programa deve apresentar como sa韉a a forma posfixa"23*84/+" e o valor num閞ico 8.
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


int valor(char*e) {
Pilha P =pilha(256);
for(int i=0; e[i]; i++)
if(isdigit(e[i]) )empilha(e[i]-'0',P);
else{
int y =desempilha(P);
int x =desempilha(P);
switch(e[i] ) {
case'+':empilha(x+y,P); break;
case'-':empilha(x-y,P); break;
case'*':empilha(x*y,P); break;
case'/':empilha(x/y,P); break;
}
}
int z =desempilha(P);
destroip(&P);
return z;
}

int main(void) {
char e[513], *z;
printf("Infixa? "); // 2*3+8/4; 9𤂿; 2+3*4-5; (3+4)*(8-6)/2
gets(e);
	z=malloc(sizeof(int));
	z=posfixa(e);
printf("Posfixa: %s\n",z);
	
printf("resultado: %d ",valor(z));
	free(z);
	puts(" ");
return 0;
}

