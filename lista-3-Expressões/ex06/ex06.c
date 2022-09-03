/*
		Exerc�cio 6.Avalia��o da forma prefixa

	Crie a fun��o valpre(e),que devolve o valor da express�o aritm�tica prefixa e.
  Em seguida,fa�a um programa para testar a fun��o.
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
return-1; // operador inv�lido!  
}

char *posfixa(char*e) {
static char s[256] ;
int j =0;
Pilha P =pilha(256);
for(int i=0; e[i]; i++)
if(e[i]==')')empilha(')',P);
else if(isdigit(e[i]) )s[j++] =e[i];
else if(strchr("+-/*",e[i]) ) {
while( !vaziap(P) &&prio(topo(P))>=prio(e[i]) )
s[j++] =desempilha(P);
empilha(e[i],P);
}
else if(e[i] =='(') {
while(topo(P)!=')')
s[j++] =desempilha(P);
desempilha(P);
}while( !vaziap(P) )
s[j++] =desempilha(P);
s[j] ='\0';
destroip(&P);
return s;
}


int valpre(char*e) {
Pilha P =pilha(256);
int tm=strlen(e)-1;
for(int i=tm; i>=0; i--){
if(isdigit(e[i]) ){empilha(e[i]-'0',P);}
else{
int y =desempilha(P);
int x =desempilha(P);
switch(e[i] ) {
case'+':empilha(x+y,P); break;
case'-':empilha(x-y,P); break;
case'*':empilha(x*y,P); break;
case'/':empilha(y/x,P); break;
}}}
int z =desempilha(P);
destroip(&P);
return z;
}
int main(void) {
char e[256],*r;
printf("Infixa? "); 
gets(e);
	r=malloc(sizeof(char));
r=_strrev(posfixa(_strrev(e)));
printf("Prefixa: %s\n",r);
	printf("valor: %d\n",valpre(r));
	puts(" ");
return 0;
}

