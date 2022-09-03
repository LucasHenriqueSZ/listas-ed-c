/*
		Exerc�cio 4.Express�es booleanas
crie um programa para ler uma express�o booleana completamente parentesiada e 
exibir sua forma posfixa correspondente,bem como seu valor num�rico.

Considere que as express�es s�o compostas por:
Operandos:letras mai�sculas F e V,com valores num�ricos 0 e 1, respectivamente.
Operadores:!(n�o), &(e) e |(ou),da maior para a menor prioridade.
Delimitadores:par�nteses de abertura e fechamento.

Por exemplo, para a express�o booleana infixa parentesiada "((!F)|(F&V))", o programa
deve apresentar como sa�da a forma posfixa "F!FV&|" e o valor num�rico 1.
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "pilha.h"

int prio(char o) {
switch(o ) {
case'(':return 0;
case'|':return 1;
case'&': return 2;
case'!':return 3;
}
return-1; // operador inv�lido!
}

char *posfixa(char*e) {
static char s[256];
int j =0;
Pilha P =pilha(256);
for(int i=0; e[i]; i++)
if(e[i]=='F' || e[i]=='V' )s[j++] =e[i];
else if(strchr("!&|",e[i]) ){
 while( !vaziap(P) && prio(topo(P))>=prio(e[i]) )
 s[j++] = desempilha(P);
 empilha(e[i],P);
}else if(e[i]==')'){s[j++] =desempilha(P) ;} 
s[j] ='\0';
destroip(&P);
return s;
}

int valor(char *r, int tm) {
Pilha P =pilha(256);
char e[tm];
for(int i=0;i<=tm;i++){
		if(r[i]=='F'){
		e[i]='0';
		}else if(r[i]=='V'){
		e[i]='1';}else{
		e[i]=r[i];}
	}
for(int i=0; e[i]; i++)
if(isdigit(e[i]) ){
	empilha(e[i]-'0',P);
}else if(e[i]=='!'){
int y =desempilha(P);
		empilha(!y,P);
}else{
int y =desempilha(P);
int x =desempilha(P);
switch(e[i] ) {
case'&':empilha(x&y,P); break;
case'|':empilha(x|y,P); break;
}
}
int z = desempilha(P);
destroip(&P);
return z;
}
int main(void) {
char e[513],*r;
	int tamanho;
printf("Infixa? ");
gets(e);
	r=malloc(sizeof(char));
	r=posfixa(e);
	tamanho =strlen(r);
printf("Posfixa: %s\n",r);
printf("valor: %d\n",valor(r,tamanho));


return 0;
}

