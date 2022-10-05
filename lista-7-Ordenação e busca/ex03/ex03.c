/*
	Exercício 3. Versão recursiva de bubble sort

 Crie a Função recursiva bsr(v,n), que usa a função empurra() e a estrategia do bubble
 sort, para organizar os n itens do vetor v em ordem crescente.
*/

#include <stdio.h>

void troca(int v[],int i,int j){
	int x =v[i];
	v[i]=v[j];
	v[j]=x;
	
	}

void bsr(int v[], int n) {
	if(n>1) {
	for(int j=0; j<n-1; j++)
	if( v[j]>v[j+1] )
		troca(v,j,j+1);
	bsr(v,n-1);
	}
}

void exibe(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
	puts(" ");
	}


int main(void){
	int v[9] = {51,82,38,99,75,19,69,46,27};
	bsr(v,9);
	exibe(v,9);
	return 0;
	}
