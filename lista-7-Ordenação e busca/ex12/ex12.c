/*		
		Exerc�cio 12. Vers�o recursiva de busca bin�ria
Crie a fun��o recursiva rbsearch(x,v,p,u), que faz uma busca bin�ria para determinar
se o item x est� no vetor crescente v, indexado de p at� u.
*/

#include <stdio.h>

int rbsearch(int x, int v[], int p, int u) {
if( p>u ) return 0;
int m = (p+u)/2;
if( x==v[m] ) return 1;
if( x<v[m] ) return rbsearch(x,v,p,m-1);
else return rbsearch(x,v,m+1,u);
}


int main(void) {
int v[8] = {19,27,31,48,52,66,75,80};
printf("27: %d\n", rbsearch(27,v,0,7));
printf("51: %d\n", rbsearch(51,v,0,7));
return 0;
}

