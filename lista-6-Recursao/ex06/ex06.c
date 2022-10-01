/*
Exercício 6.Contagem regressiva
Crie a função recursiva cr(n), que exibe uma contagem progressiva de n>=0 até 1
*/

#include <stdio.h>

void cr(int n){
    printf("%d ", n);
    if (n==0) {
        return;
    } else {
        cr(n-1);
    }
}
int main (){
    int n;
    printf("num?\n");
    scanf("%d", &n);
    cr(n);
	  printf("\n");
    return 0;
}

