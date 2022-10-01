/*
	Exercicio 17. Cadeia inversa
Crie a fun��o recursiva inv(s,p,u),que inverte a strings,cujo primeiro caractere est� na posi��o p e cujo �ltimo caractere est� na posi��o u.
A fun��o deve devolver s como resposta.
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
  	//armazerna posi��o incial de s em p
    p=0;
    //armazerna posi��o final de s em u
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

