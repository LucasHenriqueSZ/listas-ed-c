/*
ExercÌcio 2. A fun√ß√£o empurra()
Crie a funÁ„o recursiva empurra(v,u), que empurraù um item maximo do vetor v para a
posiÁ„o u de v, possivelmente alterando a ordem dos demais itens do vetor.
*/

#include <stdio.h>

void troca(int v[],int i,int j){
	int x =v[i];
	v[i]=v[j];
	v[j]=x;
	
	}

void empurra(int v[],int n) {
	for(int i=1; i<2; i++)
	for(int j=0; j<n-i; j++)
		if(v[j]>v[j+1] )
			troca(v,j,j+1);
	}

void exibe(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
	puts(" ");
	}


int main(void){
	int v[9] ={51,82,38,99,75,19,69,46,27};
	empurra(v,9);
	exibe(v,9);
	
	return 0;
	}
