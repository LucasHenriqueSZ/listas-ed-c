/*
Exercício 6. Preenchimento aleatorio
fassa um programa que preenche um vetor v com n inteiros 
aleatorios, gerados a partir da semente s, escolhidos no intervalo [0,999]

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>




void exibe(int *v, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
	puts(" ");
	}

void intercala(int v[], int p, int m, int u) {
int *w = malloc((u-p+1)*sizeof(int));
int i=p, j=m+1, k=0;
while( i<=m && j<=u )
w[k++] = (v[i]<v[j]) ? v[i++] : v[j++];
while( i<=m ) w[k++] = v[i++];
while( j<=u ) w[k++] = v[j++];
for(k=0; k<=u-p; k++) v[p+k] = w[k];
free(w);
}


void ms(int v[], int p, int u) {
if( p==u ) return;
int m = (p+u)/2;
	ms(v,p,m);
	ms(v,m+1,u);
	intercala(v,p,m,u);
}
void msort(int v[], int n) {
	ms(v,0,n-1);
}

void preenche(int v[], int n, int s) {
srand(s); // definida em stdlib.h
for(int i=0; i<n; i++) v[i] = rand()%1000;
}

int main(void) {
int v[10],s;

	 srand(time(NULL));     
	s=rand() % 100;
    preenche(v, 10,s );
msort(v,10);
exibe(v,10);
return 0;
}
