/*
Exercício 14.Soma de dígitos
Crie  afunção recursiva sd(n),que devolve a somados dígitos do número natural n.
Por exemplo, a chamada sd(7859) deve devolver 29(pois7+8+5+9=29).
*/

#include <stdio.h>

int main (void){
int n;
printf("Digite um numero: ");
scanf("%d",&n);
printf("A soma dos digitos e: %d \n",sd(n));

    return 0;
}

int sd(int n){
    if(n<10) return n;
    else return n%10 + sd(n/10);
}

