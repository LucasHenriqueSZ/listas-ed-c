/*
	Exercicio 17. Cadeia inversa
Crie a função recursiva inv(s,p,u),que inverte a strings,cujo primeiro caractere está na posição p e cujo último caractere está na posição u.
A função deve devolver s como resposta.
*/

#include <stdio.h>
#include <string.h>
char *inv(char *s,int p,int u);
int main(void)
{
    char s[100];
    int p,u;
    printf("Digite uma string: ");
    scanf("%s",s);
  	//armazerna posição incial de s em p
    p=0;
    //armazerna posição final de s em u
    u=strlen(s)-1;

    printf("A string invertida e: %s \n",inv(s,p,u));
    return 0;
}

char *inv(char *s,int p,int u)
{
    char aux;
    if(p<u)
    {
        aux=s[p];
        s[p]=s[u];
        s[u]=aux;
        inv(s,p+1,u-1);
    }
    return s;
}

