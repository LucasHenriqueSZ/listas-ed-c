/*
		Exerc�cio 11. Vers�o recursiva de busca linear
Crie a fun��o recursiva rlsearch(x,v,n), que faz uma busca linear para determinar se o
item x est� no vetor v, que tem n itens.
*/

#include <stdio.h>

int rlsearch(int x, int v[], int n) {
if(n == 0)
return 0;
if(x == v[n-1])
return 1;
return rlsearch(x,v,n-1);
}


int main(void) {
int v[8] = {66,80,31,48,27,75,19,52};
printf("27: %d\n", rlsearch(27,v,8));
printf("51: %d\n", rlsearch(51,v,8));
return 0;
}

