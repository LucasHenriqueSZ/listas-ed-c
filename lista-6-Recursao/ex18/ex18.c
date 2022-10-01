/*
	Exercício 18.Cadeia palíndroma
Crie a função recursiva pal(s,p,u),que informa se as trings,cujo primeiro caractere está na posição p e cujo 
último caractere está na posição u,é palíndroma.*/


#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 100
int pal(char s[], int p, int u);
int main()
{
char s[MAX];
int p, u;
 printf("Introduza uma string: ");
 gets(s);
 p = 0;
 u = strlen(s) - 1;
if (pal(s, p, u))
	printf("A string e palindroma \n");
else
	printf("A string nao e palindroma \n");
return 0;
}


int pal(char s[], int p, int u)
{
	if (p >= u)
		return 1;
	if (isspace(s[p]))
		return pal(s, p + 1, u);
	if (isspace(s[u]))
		return pal(s, p, u - 1);
	if (s[p] != s[u])
		return 0;
	return pal(s, p + 1, u - 1);
}

