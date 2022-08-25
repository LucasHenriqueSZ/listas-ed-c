/*
		1-Ordenação decrescente e sem repetição

Faça a alteração mínima necessária para que o programa do exercício
anterior ordene os números em ordem decrescente
*/

#include <stdlib.h>
#include <stdio.h>
#include "pilha.h" 
#include <string.h>

int main(void){
int n, num;
printf("informe o tamanho da sequencia");
	scanf("%d",&n);
Pilha a = pilha(n);
Pilha b = pilha(n);

	puts("inserir numeros\n");
	for(int i=0;i<n;i++){
		scanf("%d",&num);
		empilha(num,b);
		}
puts(" ");
while(!vaziap(b)){
		int ax=topo(b);
		desempilha(b);
		while(!vaziap(a) && topo(a)>ax){ //>
			empilha(topo(a),b);desempilha(a);}
		empilha(ax,a);
		}
	while(!vaziap(a)){
		printf("%d \n",desempilha(a));
		}
return 0;
}
