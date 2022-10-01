/*
Exercício 15.Quantidade de dígitos
Crie a função recursiva qd(n),que devolve a quantidade de dígitos binários para representar o natural n.
Por exemplo,a chamada qd(13)deve devolver 4(pois 13 embinário é 1101).
*/

#include <stdio.h>

int main(void)
{
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    printf("A quantidade de digitos binarios para representar o numero %d e: %d \n",n,qd(n));
    return 0;
}

int qd(int n)
{
    if(n==0)
        return 0;
    else
        return 1+qd(n/2);
}

